nclude "shell.h"
#include <stddef.h>  // Include for NULL definition
#include <stdio.h>   // Include for error messages

/**
 *  * is_wiam - determines if a file is an executable command
 *   * @info: the info struct
 *    * @path: path to the file
 *     *
 *      * Return: 1 if true, 0 otherwise
 *       */
int is_wiam(info_t *info, char *wiam)
{
	    struct stat st;

	        (void)info;
		    if (!wiam || stat(wiam, &st))
			            return (0);

		        if (st.st_mode & S_IFREG)
				    {
					            return (1);
						        }
			    return (0);
}

/**
 *  * dup_wiam_chars - duplicates characters
 *   * @pathstr: the PATH string
 *    * @start: starting index
 *     * @stop: stopping index
 *      *
 *       * Return: pointer to new buffer
 *        */
char *dup_wiam_chars(char *pathstr, int start, int stop)
{
	    static char buf[1024];
	        int i = 0, k = 0;

		    for (k = 0, i = start; i < stop; i++)
			            if (pathstr[i] != ':')
					                buf[k++] = pathstr[i];
		        buf[k] = 0;
			    return (buf);
}

/**
 *  * find_wiam - finds this cmd in the PATH string
 *   * @info: the info struct
 *    * @pathstr: the PATH string
 *     * @cmd: the cmd to find
 *      *
 *       * Return: full path of cmd if found or NULL
 *        */
char *find_wiam(info_t *info, char *pathstr, char *cmd)
{
	    int i = 0, curr_pos = 0;
	        char *path;

		    if (!pathstr)
			            return (NULL);
		        if ((_strlen(cmd) > 2) && starts_with(cmd, "./"))
				    {
					            if (is_wiam(info, cmd))
							                return (cmd);
						        }
			    while (1)
				        {
						        if (!pathstr[i] || pathstr[i] == ':')
								        {
										            path = dup_wiam_chars(pathstr, curr_pos, i);
											                if (!*path)
														                _strcat(path, cmd);
													            else
															                {
																		                _strcat(path, "/");
																				                _strcat(path, cmd);
																						            }
														                if (is_wiam(info, path))
																	                return (path);
																            if (!pathstr[i])
																		                    break;
																	                curr_pos = i;
																			        }
							        i++;
								    }
			        return (NULL);
}


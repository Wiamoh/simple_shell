nclude "shell.h"

/**
 *  * wiam_strlen - returns the length of a string
 *   * @s: the string whose length to check
 *    *
 *     * Return: integer length of string
 *      */
int wiam_strlen(char *s)
{
	    int i = 0;

	        if (!s)
			        return (0);

		    while (*s++)
			            i++;
		        return (i);
}

/**
 *  * wiam_strcmp - performs lexicographic comparison of two strings.
 *   * @wiam_s1: the first string
 *    * @wiam_s2: the second string
 *     *
 *      * Return: negative if wiam_s1 < wiam_s2, positive if wiam_s1 > wiam_s2, zero if wiam_s1 == wiam_s2
 *       */
int wiam_strcmp(char *wiam_s1, char *wiam_s2)
{
	    while (*wiam_s1 && *wiam_s2)
		        {
				        if (*wiam_s1 != *wiam_s2)
						            return (*wiam_s1 - *wiam_s2);
					        wiam_s1++;
						        wiam_s2++;
							    }
	        if (*wiam_s1 == *wiam_s2)
			        return (0);
		    else
			            return (*wiam_s1 < *wiam_s2 ? -1 : 1);
}

/**
 *  * wiam_starts_with - checks if needle starts with haystack
 *   * @wiam_haystack: string to search
 *    * @wiam_needle: the substring to find
 *     *
 *      * Return: address of the next char of wiam_haystack or NULL
 *       */
char *wiam_starts_with(const char *wiam_haystack, const char *wiam_needle)
{
	    while (*wiam_needle)
		            if (*wiam_needle++ != *wiam_haystack++)
				                return (NULL);
	        return ((char *)wiam_haystack);
}

/**
 *  * wiam_strcat - concatenates two strings
 *   * @wiam_dest: the destination buffer
 *    * @wiam_src: the source buffer
 *     *
 *      * Return: pointer to the destination buffer
 *       */
char *wiam_strcat(char *wiam_dest, char *wiam_src)
{
	    char *wiam_ret = wiam_dest;

	        while (*wiam_dest)
			        wiam_dest++;
		    while (*wiam_src)
			            *wiam_dest++ = *wiam_src++;
		        *wiam_dest = *wiam_src;
			    return (wiam_ret);
}


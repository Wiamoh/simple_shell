nclude "shell.h"

/**
 *  * wiam_strcpy - copies a string
 *   * @wiam_dest: the destination
 *    * @wiam_src: the source
 *     *
 *      * Return: pointer to destination
 *       */
char *wiam_strcpy(char *wiam_dest, char *wiam_src)
{
	    int i = 0;

	        if (wiam_dest == wiam_src || wiam_src == 0)
			        return (wiam_dest);
		    while (wiam_src[i])
			        {
					        wiam_dest[i] = wiam_src[i];
						        i++;
							    }
		        wiam_dest[i] = 0;
			    return (wiam_dest);
}

/**
 *  * wiam_strdup - duplicates a string
 *   * @wiam_str: the string to duplicate
 *    *
 *     * Return: pointer to the duplicated string
 *      */
char *wiam_strdup(const char *wiam_str)
{
	    int length = 0;
	        char *wiam_ret;

		    if (wiam_str == NULL)
			            return (NULL);
		        while (*wiam_str++)
				        length++;
			    wiam_ret = malloc(sizeof(char) * (length + 1));
			        if (!wiam_ret)
					        return (NULL);
				    for (length++; length--;)
					            wiam_ret[length] = *--wiam_str;
				        return (wiam_ret);
}

/**
 *  * wiam_puts - prints an input string
 *   * @wiam_str: the string to be printed
 *    *
 *     * Return: Nothing
 *      */
void wiam_puts(char *wiam_str)
{
	    int i = 0;

	        if (!wiam_str)
			        return;
		    while (wiam_str[i] != '\0')
			        {
					        wiam_putchar(wiam_str[i]);
						        i++;
							    }
}

/**
 *  * wiam_putchar - writes the character c to stdout
 *   * @wiam_c: The character to print
 *    *
 *     * Return: On success 1.
 *      * On error, -1 is returned, and errno is set appropriately.
 *       */
int wiam_putchar(char wiam_c)
{
	    static int i;
	        static char buf[WRITE_BUF_SIZE];

		    if (wiam_c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
			        {
					        write(1, buf, i);
						        i = 0;
							    }
		        if (wiam_c != BUF_FLUSH)
				        buf[i++] = wiam_c;
			    return (1);
}


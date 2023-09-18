#include "shell.h"

/**
 * **wiam_strtow - splits a string into words. Repeat delimiters are ignored
 * @wiam_str: the input string
 * @wiam_d: the delimiter string
 * Return: a pointer to an array of strings, or NULL on failure
 */

char **wiam_strtow(char *wiam_str, char *wiam_d)
{
 int wiam_i, wiam_j, wiam_k, wiam_m, wiam_numwords = 0;
 char **wiam_s;

 if (wiam_str == NULL || wiam_str[0] == 0)
  return (NULL);
 if (!wiam_d)
  wiam_d = " ";
 for (wiam_i = 0; wiam_str[wiam_i] != '\0'; wiam_i++)
  if (!is_delim(wiam_str[wiam_i], wiam_d) && (is_delim(wiam_str[wiam_i + 1], wiam_d) || !wiam_str[wiam_i + 1]))
   wiam_numwords++;
if (wiam_numwords == 0)
  return (NULL);
 wiam_s = malloc((1 + wiam_numwords) * sizeof(char *));
 if (!wiam_s)
  return (NULL);
 for (wiam_i = 0, wiam_j = 0; wiam_j < wiam_numwords; wiam_j++)
 {
  while (is_delim(wiam_str[wiam_i], wiam_d))
   wiam_i++;
  wiam_k = 0;
  while (!is_delim(wiam_str[wiam_i + wiam_k], wiam_d) && wiam_str[wiam_i + wiam_k])
   wiam_k++;
  wiam_s[wiam_j] = malloc((wiam_k + 1) * sizeof(char));
  if (!wiam_s[wiam_j])
  {
   for (wiam_k = 0; wiam_k < wiam_j; wiam_k++)
    free(wiam_s[wiam_k]);
   free(wiam_s);
   return (NULL);
  }
  for (wiam_m = 0; wiam_m < wiam_k; wiam_m++)
   wiam_s[wiam_j][wiam_m] = wiam_str[wiam_i++];
  wiam_s[wiam_j][wiam_m] = 0;
 }
 wiam_s[wiam_j] = NULL;
 return (wiam_s);
}
/**
 * **wiam_strtow2 - splits a string into words
 * @wiam_str: the input string
 * @wiam_d: the delimiter
 * Return: a pointer to an array of strings, or NULL on failure
 */
char **wiam_strtow2(char *wiam_str, char wiam_d)
{
 int wiam_i, wiam_j, wiam_k, wiam_m, wiam_numwords = 0;
 char **wiam_s;

 if (wiam_str == NULL || wiam_str[0] == 0)
  return (NULL);
 for (wiam_i = 0; wiam_str[wiam_i] != '\0'; wiam_i++)
  if ((wiam_str[wiam_i] != wiam_d && wiam_str[wiam_i + 1] == wiam_d) ||
      (wiam_str[wiam_i] != wiam_d && !wiam_str[wiam_i + 1]) || wiam_str[wiam_i + 1] == wiam_d)
   wiam_numwords++;
 if (wiam_numwords == 0)
  return (NULL);
 wiam_s = malloc((1 + wiam_numwords) * sizeof(char *));
 if (!wiam_s)
  return (NULL);
 for (wiam_i = 0, wiam_j = 0; wiam_j < wiam_numwords; wiam_j++)
 {
  while (wiam_str[wiam_i] == wiam_d && wiam_str[wiam_i] != wiam_d)
   wiam_i++;
  wiam_k = 0;
  while (wiam_str[wiam_i + wiam_k] != wiam_d && wiam_str[wiam_i + wiam_k] && wiam_str[wiam_i + wiam_k] != wiam_d)
   wiam_k++;
  wiam_s[wiam_j] = malloc((wiam_k + 1) * sizeof(char));
  if (!wiam_s[wiam_j])
  {
   for (wiam_k = 0; wiam_k < wiam_j; wiam_k++)
    free(wiam_s[wiam_k]);
   free(wiam_s);
   return (NULL);
  }
  for (wiam_m = 0; wiam_m < wiam_k; wiam_m++)
   wiam_s[wiam_j][wiam_m] = wiam_str[wiam_i++];
  wiam_s[wiam_j][wiam_m] = 0;
 }
 wiam_s[wiam_j] = NULL;
 return (wiam_s);
}


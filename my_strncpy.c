/*
** my_strncpy.c for lib in /u/all/simon_o/rendu/lib/my
** 
** Made by antoine simon
** Login   <simon_o@epitech.net>
** 
** Started on  Tue Dec  4 18:16:25 2012 antoine simon
** Last update Tue Dec  4 18:20:22 2012 antoine simon
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while ((src[i] != '\0') && (n >= i))
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[i] = src[i];
  return (dest);

}

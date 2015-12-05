/*
** my_strcat.c for my_strcat in /afs/epitech.net/users/all/simon_o/rendu/piscine/Jour_07
** 
** Made by antoine simon
** Login   <simon_o@epitech.net>
** 
** Started on  Wed Oct 10 13:02:54 2012 antoine simon
** Last update Mon Oct 22 09:27:42 2012 antoine simon
*/

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	n;

  i = 0;
  n = my_strlen(dest);
  while (src[i] != '\0')
    {
      dest[n + i] = src[i];
      i = i + 1;
    }
  dest[n + i] = '\0';
  return (dest);
}

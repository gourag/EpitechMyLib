
/*
** my_strcpy.c for my_strcpy in /afs/epitech.net/users/all/simon_o/rendu/piscine/Jour_06/ex_01
** 
** Made by antoine simon
** Login   <simon_o@epitech.net>
** 
** Started on  Mon Oct  8 10:01:23 2012 antoine simon
** Last update Sat Oct 20 13:02:29 2012 antoine simon
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while ((src[i] != '\0') || (dest[i] != '\0'))
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[i] = src[i];
  return (dest);
}

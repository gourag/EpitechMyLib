/*
** my_strncat.c for my_strncat in /afs/epitech.net/users/all/simon_o/rendu/piscine/Jour_07/ex_02
** 
** Made by antoine simon
** Login   <simon_o@epitech.net>
** 
** Started on  Wed Oct 10 18:00:51 2012 antoine simon
** Last update Wed Oct 10 19:49:16 2012 antoine simon
*/

char	*my_strncat(char *dest, char *src, int nb)
{
  int	i;
  int	n;

  i = 0;
  n = my_strlen(dest);
  if (nb >= n)
    {
      while (src[i] != '\0')
	{
	  dest[n + i] = src[i];
	  i = i + 1;
	}
      return (dest);
    }
}

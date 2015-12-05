/*
** my_strncmp.c for my_strncmp in /afs/epitech.net/users/all/simon_o/rendu/piscine/Jour_06
** 
** Made by antoine simon
** Login   <simon_o@epitech.net>
** 
** Started on  Wed Oct 10 09:28:03 2012 antoine simon
** Last update Wed Oct 17 11:35:14 2012 antoine simon
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int   i;
  int   l;
  int   nb;

  i = 0;
  l = 0;
  while ((s1[i] != '\0') && (s1[i] != '\0') && (n != i) && (n != l))
    {
      if (s1[i] != s2[l])
        {
          nb = s1[i] - s2[l];
          return (nb);
        }
      i = i + 1;
      l = l + 1;
    }
  return (0);
}

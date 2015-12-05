/*
** my_str_isnum.c for my_str_isnum in /afs/epitech.net/users/all/simon_o/rendu/piscine/Jour_06
** 
** Made by antoine simon
** Login   <simon_o@epitech.net>
** 
** Started on  Wed Oct 10 09:38:47 2012 antoine simon
** Last update Thu Oct 18 17:39:16 2012 antoine simon
*/

int	my_str_isnum(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] > '9')
        {
          return (0);
        }
      if (str[i] < '0')
        {
          return (0);
        }
      i = i + 1;
    }
  return (1);
}

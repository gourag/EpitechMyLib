/*
** my_str_islower.c for my_str_islower in /afs/epitech.net/users/all/simon_o/rendu/piscine/Jour_06
** 
** Made by antoine simon
** Login   <simon_o@epitech.net>
** 
** Started on  Wed Oct 10 09:39:53 2012 antoine simon
** Last update Thu Oct 18 17:17:21 2012 antoine simon
*/

int	my_str_islower(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] > 'z')
        {
          return (0);
        }
      if ((str[i] < 'a') && (str[i] > 'Z'))
        {
          return (0);
        }
      i = i + 1;
    }
  return (1);
}

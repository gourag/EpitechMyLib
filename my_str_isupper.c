/*
** my_str_isupper.c for my_str_isupper in /afs/epitech.net/users/all/simon_o/rendu/piscine/Jour_06
** 
** Made by antoine simon
** Login   <simon_o@epitech.net>
** 
** Started on  Wed Oct 10 09:40:42 2012 antoine simon
** Last update Thu Oct 18 17:14:09 2012 antoine simon
*/

int	my_str_isupper(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < 'A')
        {
          return (0);
        }
      if (str[i] > 'Z')
        {
          return (0);
        }
      i = i + 1;
    }
  return (1);
}

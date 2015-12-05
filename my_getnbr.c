/*
** my_getnbr.c for getnbr in /afs/epitech.net/users/all/simon_o/rendu/piscine/Jour_04
** 
** Made by antoine simon
** Login   <simon_o@epitech.net>
** 
** Started on  Tue Oct  9 17:03:38 2012 antoine simon
** Last update Fri Jan 11 13:09:56 2013 antoine simon
*/
 
int	my_getnbr(char *str)
{
  long result;
  int	f;
  int	i;

  result = 0;
  i = 0;
  f = 0;
  if (str == NULL)
    return (0);
  while (str[i] == '-' || str[i] == '+')
    {
      if (str[i] == '-')
	  f = f + 1;
      i = i + 1;
    }
  while ((str[i] != '\0') && (str[i] >= '0') && (str[i] <= '9'))
    {
      result = ((str[i] - '0') + (result * 10));
      i = i + 1;
    }
  if (f % 2 != 0)
    result = result *(-1);
  if (result > 2147483647 || result < -2147483648)
    result = 0;
  return (result);
}

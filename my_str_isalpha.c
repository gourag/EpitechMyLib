/*
** my_str_isalpha.c for my_str_isalpha in /afs/epitech.net/users/all/simon_o/rendu/piscine/Jour_06
** 
** Made by antoine simon
** Login   <simon_o@epitech.net>
** 
** Started on  Wed Oct 10 09:36:46 2012 antoine simon
** Last update Thu Oct 18 16:01:53 2012 antoine simon
*/

int	my_str_isalpha(char *str)
{
  int	i;

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
      if (str[i] < 'A')
	{
	  return (0);
	}
      if ((str[i] > 'Z') && (str[i] < 97))
	{
	  return (0);
	}
      i = i + 1;
    }
  return (1);
}

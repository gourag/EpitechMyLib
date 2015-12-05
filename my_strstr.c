/*
** my_strstr.c for my_strstr in /afs/epitech.net/users/all/simon_o/rendu/piscine/Jour_06/ex_04
** 
** Made by antoine simon
** Login   <simon_o@epitech.net>
** 
** Started on  Tue Oct  9 13:12:08 2012 antoine simon
** Last update Mon Oct 22 09:32:16 2012 antoine simon
*/

char	*my_strstr(char *str, char *to_find)
{
  int	i;
  int	l;
  
  i = 0;
  l = 0;
  while (str[i] != '\0')
    {
      if (str[i] != to_find[l])
	{
	  l = 0;
	}
      if (str[i] != to_find[l])
	{
	  return (0);
	}
      if (str[i] == to_find[l])
	{
	  l = l + 1;
	}
      if (to_find[l] == '\0')
	{
	  l = l - 1;
	  i = i - l;
	  return (&str[i]);
	}
      i = i + 1;
    }
  return (0);
}

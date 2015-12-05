/*
** my_strlowcase.c for my_strlowcase in /afs/epitech.net/users/all/simon_o/rendu/piscine/Jour_06
** 
** Made by antoine simon
** Login   <simon_o@epitech.net>
** 
** Started on  Wed Oct 10 09:34:37 2012 antoine simon
** Last update Thu Oct 18 09:49:28 2012 antoine simon
*/

char *my_strlowcase(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if ((str[i] <= 90) && (str[i] >= 65))
	{
	  my_putchar((str[i]) +32);
	}
      else
	{
	  my_putchar(str[i]);
	}
      i = i + 1;
    }
}

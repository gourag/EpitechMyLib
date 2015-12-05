/*
** my_strcapitalize.c for my_strcapitalize in /afs/epitech.net/users/all/simon_o/rendu/piscine/Jour_06
** 
** Made by antoine simon
** Login   <simon_o@epitech.net>
** 
** Started on  Wed Oct 10 09:35:39 2012 antoine simon
** Last update Thu Oct 18 14:46:59 2012 antoine simon
*/

char	*my_strcapitalize(char *str)
{
  int	i;

  i = 0;
  if ((str[i] >= 'a') && (str[i] <= 'z'))
    {
      my_putchar((str[i]) -32);
      i = i + 1;
    }
  while (str[i] != '\0')
    {
      if ((str[i - 1] == ' ') && (str[i] >= 'a') && (str[i] <= 'z'))
	{
	  my_putchar((str[i]) -32);
	}
      else
	{
	  my_putchar(str[i]);
	}
      i = i + 1;
    }
}

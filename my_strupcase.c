/*
** my_strupcase.c for my_strupcase in /afs/epitech.net/users/all/simon_o/rendu/piscine/Jour_06
** 
** Made by antoine simon
** Login   <simon_o@epitech.net>
** 
** Started on  Wed Oct 10 09:33:04 2012 antoine simon
** Last update Thu Oct 18 09:47:30 2012 antoine simon
*/

char	*my_strupcase(char *str)
{
  int	i;
  
  i = 0;
  while (str[i] != '\0')
    {
      if ((str[i] <= 122) && (str[i] >= 97))
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

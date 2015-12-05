/*
** char_nimpr.c for char_nimpr in /home/simon_o//printf
** 
** Made by antoine simon
** Login   <simon_o@epitech.net>
** 
** Started on  Fri Nov  9 12:09:58 2012 antoine simon
** Last update Sun Nov 18 11:47:09 2012 antoine simon
*/

int	display_char(char *str, int *i, int *nbr)
{
  my_putchar('\\');
  if (str[*i] < 100)
    {
      my_putstr("0");
      *nbr = *nbr + 1;
    }
  if (str[*i] < 8)
    {
      my_putstr("0");
      *nbr = *nbr + 1;
    }
}

int	char_nimpr(char *str, char *base)
{
  int	nbr;
  int	i;

  i = 0;
  nbr = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 32 && str[i] < 127)
	my_putchar(str[i]);
      else
	{
	  display_char(str, &i, &nbr);
	  nbr += my_put_nbr_base(str[i], base);
	}
      i++;
      nbr++;
    }
  return (nbr + 1);
}

/*
** my_printf_flag.c for my_printf in /home/simon_o//printf
** 
** Made by antoine simon
** Login   <simon_o@epitech.net>
** 
** Started on  Thu Nov 15 13:23:13 2012 antoine simon
** Last update Thu Nov 22 11:24:39 2012 antoine simon
*/

#include <stdarg.h>
#include "my.h"

int	flag(va_list ap, char *str, int i, int nb)
{
  i++;
  if (str[i + 1] == 'o')
    {
      nb += my_putstr("0");
      nb += my_put_nbr_base(va_arg(ap, int), "01234567");
    }
  else if (str[i + 1] == 'x')
    {
      nb += my_putstr("0x");
      nb += my_put_nbr_base(va_arg(ap, int), "0123456789abcdef");
    }
  else if (str[i + 1] == 'X')
    {
      nb += my_putstr("0X");
      nb += my_put_nbr_base(va_arg(ap, int), "0123456789ABCDEF");
    }
  else
    return (0);
  return (nb);
}

int	what_op(va_list ap, char *str, int i)
{
  i++;
  if (str[i + 1] == 'd' || str[i + 1] == 'i')
    my_put_sign(va_arg(ap, int));
}

int	wich_op(va_list ap, char *str, int *i, int *nb)
{
  if (str[*i + 1] == '#')
    {
      *nb = flag(ap, str, *i, *nb);
      if (*nb != 0)
	{
	  *i = *i + 1;
	  return (*nb);
	}
      *i = *i + 1;
    }
}

int	option(va_list ap, char *str, int i, int nb)
{
  if (str[i + 1] == 'u')
    nb += my_put_nbr_base(va_arg(ap, int), "0123456789");
  else if (str[i + 1] == 'o')
    nb += my_put_nbr_base(va_arg(ap, int), "01234567");
  else if (str[i + 1] == 'x')
    nb += my_put_nbr_base(va_arg(ap, int), "0123456789abcdef");
  else if (str[i + 1] == 'X')
    nb += my_put_nbr_base(va_arg(ap, int), "0123456789ABCDEF");
  else if (str[i + 1] == 'S')
    {
      nb += char_nimpr(va_arg(ap, char *), "01234567");
      if (str[i + 2] != '\0')
	{
	  //	  my_putchar(' ');
	  //	  nb++;
	}
    }
  else if (str[i + 1] == 'b')
    nb += my_put_nbr_base(va_arg(ap, int), "01");
  else
    return (0);
  return (nb);
}

int	action(va_list ap, char *str, int i, int nb)
{
  wich_op(ap, str, &i, &nb);
  if (str[i + 1] == 'c')
    {
      my_putchar(va_arg(ap, int));
      nb++;
    }
  else if (str[i + 1] == 's')
    nb += my_putstr(va_arg(ap, char *));
  else if (str[i + 1] == 'd' || str[i + 1] == 'i')
    nb += my_put_nbr(va_arg(ap, int));
  else if ((str[i + 2] == 'd' || str[i + 2] == 'i') && str[i + 1] == '+')
    nb += my_put_sign(va_arg(ap, int));
  else if (str[i + 1] == 'p')
    nb += my_pointer(va_arg(ap, unsigned long));
  else if ((nb = option(ap, str, i, nb)) == 0)
    return (0);
  return (nb);
}

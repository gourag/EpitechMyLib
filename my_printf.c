/*
** my_printf.c for my_printf in /home/simon_o//printf
** 
** Made by antoine simon
** Login   <simon_o@epitech.net>
** 
** Started on  Mon Nov  5 16:19:43 2012 antoine simon
** Last update Sun Nov 18 20:59:53 2012 antoine simon
*/

#include <stdarg.h>
#include "my.h"

int	my_printadd(char *str, int *i, int *nb)
{
  if (str[*i + 1] == '%')
    {
      while (str[*i + 1] == '%')
	{
	  my_putchar(str[*i]);
	  *nb = *nb + 1;
	  *i = *i + 2;
	}
      *nb = *nb + 1;
    }
  if (str[*i + 1] == ' ')
    {
      my_putchar(' ');
      while (str[*i + 1] == ' ')
	*i = *i + 1;
    }
}

int	my_printadd2(char *str, int *i, int *nb)
{
  if (*nb != 0)
    *i = *i + 1;
  else if (*nb != 0 && str[*i - 1] == '#')
    *i = *i + 1;
  else if (*nb != 0 && str[*i - 1] == '+')
    *i = *i + 1;
  else
    my_putchar(str[*i]);
  *i = *i + 1;
}

int	display(char *str, int *i, int *nb)
{
  if (str[*i - 1] == '#')
      *i = *i + 1;
  if (str[*i - 1] == '+')
      *i = *i + 1;
  if (str[*i - 1] != 'S' && str[*i] != '0')
    {
      my_putchar(str[*i]);
      *nb = *nb + 1;
    }
}

int	my_printf(char *str, ...)
{
  int	nb;	
  int	i;
  va_list	ap;

  nb = 0;
  i = -1;
  va_start(ap, str);
  while (str[++i] != '\0')
    {
      if (str[i] == '%')
	{
	  my_printadd(str, &i, &nb);
	  nb = (action(ap, str, i, nb));
	  my_printadd2(str, &i, &nb);
	}
      display(str, &i, &nb);
    }
  va_end(ap);
  return (nb);
}

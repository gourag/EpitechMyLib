/*
** my_putstr.c for printf in /home/simon_o//printf
** 
** Made by antoine simon
** Login   <simon_o@epitech.net>
** 
** Started on  Wed Nov 14 17:25:06 2012 antoine simon
** Last update Sun Nov 18 12:01:18 2012 antoine simon
*/

#include <stdlib.h>
#include <stdio.h>

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  if (str == NULL)
    return (my_putstr("(null)"));
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
  return (i);
}


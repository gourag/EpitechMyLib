/*
** my_strlen.c for my_strlen in /home/simon_o//printf
** 
** Made by antoine simon
** Login   <simon_o@epitech.net>
** 
** Started on  Thu Nov 15 14:20:16 2012 antoine simon
** Last update Sun Nov 18 12:01:50 2012 antoine simon
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}

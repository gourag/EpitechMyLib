/*
** my_swap.c for my_swap.c in /afs/epitech.net/users/all/simon_o/rendu/piscine/Jour_04
** 
** Made by antoine simon
** Login   <simon_o@epitech.net>
** 
** Started on  Thu Oct  4 10:00:24 2012 antoine simon
** Last update Thu Oct  4 13:43:22 2012 antoine simon
*/
int	my_swap(int *a, int *b)
{
  int	c;
  
  c = *b;
  *b = *a;
  *a = c;
}

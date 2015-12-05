/*
** my_square_root.c for my_square_root in /afs/epitech.net/users/all/simon_o/rendu/piscine/Jour_05
** 
** Made by antoine simon
** Login   <simon_o@epitech.net>
** 
** Started on  Wed Oct 10 08:01:58 2012 antoine simon
** Last update Tue Oct 16 14:42:31 2012 antoine simon
*/

int	my_square_root(int nb)
{
  int	i;

  i = 0;
  while (i * i <= nb)
    {
      if (i * i == nb)
	{
	  return (1);
	}
      i = i + 1;
    }
  return (0);
}

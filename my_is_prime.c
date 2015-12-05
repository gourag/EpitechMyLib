/*
** my_is_prime.c for my_is_prime in /afs/epitech.net/users/all/simon_o/rendu/piscine/Jour_05
** 
** Made by antoine simon
** Login   <simon_o@epitech.net>
** 
** Started on  Wed Oct 10 08:04:05 2012 antoine simon
** Last update Wed Oct 17 10:58:05 2012 antoine simon
*/

int	my_is_prime(int nb)
{
  int	i;

  i = 2;
  while ((nb - 1) != i)
    {
      if (nb % i == 0)
	{
	  return (0);
	}
      i = i + 1;
    } 
  return (1);
}

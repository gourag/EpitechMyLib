/*
** my_put_nbr.c for put_nbr in /home/simon_o//printf
** 
** Made by antoine simon
** Login   <simon_o@epitech.net>
** 
** Started on  Fri Nov  9 16:27:33 2012 antoine simon
** Last update Sun Nov 18 12:00:22 2012 antoine simon
*/

int	my_put_nbr(int nb)
{
  int	nbr;

  nbr = 1;
  if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
      nbr++;
    }
  if (nb > 9)
    nbr += my_put_nbr(nb / 10);
  my_putchar((nb % 10) + 48);
  return (nbr);
}

/*
** my_put_nbr_ndisp.c for printf in /home/simon_o//printf
** 
** Made by antoine simon
** Login   <simon_o@epitech.net>
** 
** Started on  Sun Nov 18 12:44:50 2012 antoine simon
** Last update Sun Nov 18 20:57:22 2012 antoine simon
*/

int	my_put_sign(int nb)
{
  int	nbr;

  nbr = 1;
  if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
      nbr++;
    }
  else
    my_putchar('+');
  if (nb > 9)
    nbr += my_put_nbr(nb / 10);
  my_putchar((nb % 10) + 48);
  return (nbr);
}



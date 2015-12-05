/*
** my_put_nbr_base.c for myputnbr_base in /home/simon_o//printf
** 
** Made by antoine simon
** Login   <simon_o@epitech.net>
** 
** Started on  Thu Nov  8 22:19:41 2012 antoine simon
** Last update Fri Nov 16 13:30:16 2012 antoine simon
*/

int	my_put_nbr_base(unsigned long nb, char *base)
{
  int	nbr;

  nbr = 1;
  if (nb >= my_strlen(base))
    nbr += my_put_nbr_base(nb / my_strlen(base), base);
  my_putchar(base[nb % my_strlen(base)]);
  return (nbr);
}

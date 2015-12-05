/*
** my_pointer.c for printf in /home/simon_o//printf
** 
** Made by antoine simon
** Login   <simon_o@epitech.net>
** 
** Started on  Sat Nov 17 19:27:21 2012 antoine simon
** Last update Sun Nov 18 11:57:41 2012 antoine simon
*/

int	my_pointer(unsigned long point)
{
  int	nb;

  nb = 0;
  if (point == 0)
    {
      my_putstr("(nil)");
      return (nb + 5);
    }
  my_putstr("0x");
  nb = my_put_nbr_base(point, "0123456789abcdef");
  return (nb + 2);
}

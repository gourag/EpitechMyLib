/*
** my_power_rec.c for my_power_rec.c in /home/simon_o/
** 
** Made by antoine simon
** Login   <simon_o@epitech.net>
** 
** Started on  Sun Oct  7 19:00:36 2012 antoine simon
** Last update Mon Oct  8 18:31:10 2012 antoine simon
*/

int	my_power_rec(int nb, int power)
{
  int	a;

  a = nb;
  if (power < 0)
    {
      return (0);
    }
  if (power == 0)
    {
      return(1);
    }
  if (power > 0)
    {
      power = power - 1;
      a = a * my_power_rec(nb, power);
      return(a);
    }
}

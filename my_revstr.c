/*
** my_revstr.c for my_revstr.c in /afs/epitech.net/users/all/simon_o/rendu/piscine/Jour_06/ex_03
** 
** Made by antoine simon
** Login   <simon_o@epitech.net>
** 
** Started on  Tue Oct  9 08:12:51 2012 antoine simon
** Last update Sun Nov 25 14:04:07 2012 antoine simon
*/

char	*my_revstr(char *str)
{
  int   nb;

  nb = (lentgh(str) - 1);
  while (str[nb] != str[0 - 1])
    {
      my_putchar(str[nb]);
      nb--;
    }
}

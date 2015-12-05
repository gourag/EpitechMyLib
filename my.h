/*
** my.h for my.h in /afs/epitech.net/users/all/simon_o/rendu/include
** 
** Made by antoine simon
** Login   <simon_o@epitech.net>
** 
** Started on  Fri Oct 12 18:05:22 2012 antoine simon
** Last update Sun Nov 25 14:19:33 2012 antoine simon
*/

#ifndef MY_H_
#define MY_H_
#include <stdarg.h>

void	my_putchar(char c);
int	my_isneg(int nb);
int	my_swap(int *a, int *b);
int	my_getnbr(char *str);
void	my_sort_int_tab(int *tab, int size);
int	my_power_rec(int nb, int power);
int	my_square_root(int nb);
int	my_is_prime(int nombre);
int	my_find_prime_sup(int nb);
char	*my_strcpy(char *dest, char *src);
char	*my_strncpy(char *dest, char *src, int nb);
char	*my_revstr(char *str);
char	*my_strstr(char *str, char *to_find);
int	my_strcmp(char *s1, char *s2);
int	my_strncmp(char *s1, char *s2, int nb);
char	*my_strupcase(char *str);
char	*my_strlowcase(char *str);
char	*my_strcapitalize(char *str);
int	my_str_isalpha(char *str);
int	my_str_isnum(char *str);
int	my_str_islower(char *str);
int	my_str_isupper(char *str);
int	my_str_isprintable(char *str);
int	my_showstr(char *str);
int	my_showmem(char *str, int size);
char	*my_strcat(char *dest, char *src);
char	*my_strncat(char *dest, char *src, int nb);
int	my_strlcat(char *dest, char *src, int size);
int	my_put_nbr(int nb);
int	my_putstr(char *str);
int	my_strlen(char *str);
int	my_put_nbr_base(unsigned long nb, char *base);
void	my_put_nbr_unit(unsigned long nb, char *base);
int	my_strlen_nbr(int nb);
int	my_pointer(unsigned long point);
int	my_printadd(char *str, int *i, int *nb);
int	my_printadd2(char *str, int *i, int *nb);
int	display(char *str, int *i, int *nb);
int	my_print(char *str, ...);
int	flag(va_list ap, char *str, int i, int nb);
int	what_op(va_list ap, char *str, int i);
int	option(va_list ap, char *str, int i, int nb);
int	action(va_list ap, char *str, int i, int nb);
int	display_char(char *str, int *i, int *nbr);
int	my_put_sign(int nb);

#endif

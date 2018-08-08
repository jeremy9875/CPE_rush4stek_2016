/*
** my_putchar.c for my_putchar.c in /home/d.kevin/delivery/tekadventure/lib/my
** 
** Made by Kevin DA PONTE
** Login   <d.kevin@epitech.net>
** 
** Started on  Tue Apr  4 13:18:01 2017 Kevin DA PONTE
** Last update Tue Apr  4 13:18:43 2017 Kevin DA PONTE
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

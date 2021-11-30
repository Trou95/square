#include <unistd.h>

void  ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_rect_border(int len)
{
  len -= 2;
  ft_putchar('o');
  while(len > 0){
    ft_putchar('-');
    len --;
  }
  if (len == 0) ft_putchar('o');
  ft_putchar('\n');
}

void ft_rect_fill(int len)
{
  len -= 2;
  ft_putchar('|');
  while(len > 0){
     ft_putchar(' ');
     len--;
  }
  if(len == 0) ft_putchar('|');
  ft_putchar('\n');
}

void  rush(int x, int y)
{
    if (x <= 0 || y <= 0) return;
    y -= 2;
    ft_rect_border(x);
    while(y > 0){
      ft_rect_fill(x);
      y--;
    }
    if(y == 0) ft_rect_border(x);
}

int main ()
{
  rush(7,8);
  return 0;
}

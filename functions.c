#include "my_printf.h"

void my_putnbr(int nbr)
{

  if(nbr < 0)
    {
      my_putchar('-');
      my_putnbr(nbr / -10);
    }

  if(nbr > 9)
    {
      my_putnbr(nbr / 10);
    }

  my_putchar((nbr < 0 ? -(nbr % 10) : nbr % 10)+ '0');

}
void my_putchar(char c)
{
  write(1, &c, 1);
}

void my_putstr(char* str)
{
  int itr;
  for(itr = 0; str[itr] != '\0'; itr++)
    {
      my_putchar(str[itr]);
    }
}

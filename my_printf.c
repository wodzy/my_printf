#include "my_printf.h"

t_opt array[5] = {{'c',&option_c},
		  {'s',&option_s},
		  {'i',&option_i},
		  {'d',&option_i},
		  {'%',&option_m}};


void option_m(va_list arg)
{
  if (arg)
    my_putchar('%');
}
void option_c(va_list arg)
{
  int c;
  c = va_arg(arg, int);
  my_putchar(c);
}

void option_s(va_list arg)
{
  char* s;
  s = va_arg(arg,char*);
  my_putstr(s);
}

void option_i(va_list arg)
{
  int i;
  i = va_arg(arg,int);
  my_putnbr(i);
}

int my_printf(char *format,...)
{
  int itr;
  int itrTwo;
  va_list w;

  va_start(w,format);
  for (itr = 0; format[itr]; itr++)
    {
      if (format[itr] == '%')
	{
	  itr++;
	  for (itrTwo = 0; itrTwo < 5; itrTwo++)
	    if (array[itrTwo].params == format[itr])
	      array[itrTwo].ptr(w);
	}
      else
	my_putchar(format[itr]);
    }
  va_end(w);
  return (1); 
}

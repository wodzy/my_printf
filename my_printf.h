#ifndef MY_PRINTF_H
#define MY_PRINTF_H
#include <stdarg.h>
#include <unistd.h>
typedef struct s_opt
{

  char params;
  void (*ptr)();

}t_opt;

void my_putstr(char* str);
void my_putnbr(int nbr);
void my_putchar(char c);
int my_printf(char *format,...);
void option_c(va_list arg);
void option_i(va_list arg);
void option_s(va_list arg);
void option_m(va_list arg);
#endif /* MY_PRINTF_H */

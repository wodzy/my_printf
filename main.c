#include "my_printf.h"

int main()
{
  my_printf("1 - une chaine\n");
  my_printf("2 - %s\n", "une autre chaine");
  my_printf("3 - %i\n",42);
  my_printf("4 - %s %d %s%c","avec",4,"parametres",'\n');
  my_printf("5 - %d%%\n",42);
  my_printf("6 - %i\n",-12);
}

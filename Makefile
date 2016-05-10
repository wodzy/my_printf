AR = 			ar -r
CC = 			gcc -W -Wall -Werror
RM = 			rm -f

NAME = 			libmy_printf_`uname -m`-`uname -s`
OBJ  = 			$(SRC:%.c=%.o)
SRC  =			functions.c \
			my_printf.c

all: 			my_printf_static my_printf_dynamic

clean:
			$(RM) $(OBJ)

fclean: 		clean
			$(RM) $(NAME).a $(NAME).so

my_printf_static:	$(OBJ)
	        	$(AR) $(NAME).a $(OBJ)
			ranlib $(NAME).a

my_printf_dynamic:	$(OBJ)
		        $(CC) -shared -o $(NAME).so $(OBJ)
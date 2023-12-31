NAME = libftprintf.a

CC = cc

SRCS = ft_puthexa.c ft_floor.c ft_log10.c\
		ft_pow.c ft_putnbr.c ft_putchar.c ft_putstr.c ft_printf.c

CFLAGS = -Wall -Wextra -Werror 
	
OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	@ar -rc $(NAME) $(OBJS)
	@echo compiling and archiving is done
clean : 
		@rm -rf $(OBJS)
		@echo removing .o files

fclean : clean
		@rm -rf $(NAME)
		@echo removing .a file

re : fclean clean all

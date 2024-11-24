NAME	=	libftprintf.a

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror 

ARCHV	=	ar crs

RM		=	rm -f

MAN_FUNC	=	ft_printf.c			ft_putchar.c		ft_putnbr.c	 	ft_putstr.c		ft_putnbr_u.c  		ft_putnbr_base.c 		ft_print_add.c

OBJFUN	=	$(MAN_FUNC:.c=.o)


all : $(NAME)

$(NAME) : $(OBJFUN)
	$(ARCHV) $(NAME) $(OBJFUN)

%.o : %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJFUN)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : clean

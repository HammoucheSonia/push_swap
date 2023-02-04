NAME= push_swap

SRC = utils.c algorithme.c  libft_utils.c  main.c  max_min.c  parcing.c  pivot.c  push.c  rev_rotate.c  rotate.c  sort.c  swap.c

CC      = gcc
FLAGS	= -Werror -Wextra -Werror -g 


OBJ = $(SRC:.c=.o)

${NAME}: ${OBJ} ${MLX}
	$(CC) $(OBJ) $(LIB) -o $@ ${OBJS} 

%.o: %.c
	${CC} ${FLAGS} -c $< -o $@  

all: $(NAME)

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}
	

re: fclean all

.PHONY : all clean fclean re 

NAME = lem-in

TMP = objs

CC = cc

CFLAGS = -Wall -Wextra #-Werror

SRCS = $(wildcard *.c)

OBJS = $(patsubst %.c, ./$(TMP)/%.o, $(SRCS))

RM = rm -fr

HEADER = $(wildcard *.h)

./$(TMP)/%.o: %.c $(HEADER) Makefile
	$(CC) $(CFLAGS) -o $@ -c $<

all: $(NAME)

$(NAME): $(TMP) $(OBJS) $(LIBFT) $(FT_FPRINTF)
	$(CC) $(CFLAGS) $(OBJS) $(LINKER) -o $(NAME)

$(TMP):
	@mkdir $(TMP)

clean:
	$(RM) $(OBJS_DIR)
	$(RM) $(TMP)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re bonus

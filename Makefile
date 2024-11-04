NAME = lem-in

TMP = objs

CC = cc

INCLUDES = -I./includes -I./libft -I./get_next_line

CFLAGS = -Wall -Wextra -fsanitize=address -g #-Werror

CFLAGS += $(INCLUDES)

SRCS = $(wildcard src/*.c)

OBJS = $(patsubst src/%.c, ./$(TMP)/%.o, $(SRCS))

RM = rm -fr

HEADER = $(wildcard *.h)

LIBFT_DIR = libft

LIBFT = $(LIBFT_DIR)/libft.a

LINKER = -L $(LIBFT_DIR) -lft 

all: $(NAME)

./$(TMP)/%.o: src/%.c $(HEADER) Makefile
	$(CC) $(CFLAGS) -o $@ -c $<


$(NAME): $(TMP) $(OBJS) $(LIBFT) $(FT_FPRINTF)
	$(CC) $(CFLAGS) $(OBJS) $(LINKER) -o $(NAME)

$(LIBFT):
	@make --no-print-directory -C $(LIBFT_DIR)
	@echo "$(GREEN)✅ $(NAME) sucessfully created$(RESET)"

$(TMP):
	@mkdir $(TMP)

clean:
	@make --no-print-directory clean -C $(LIBFT_DIR)	
	$(RM) $(OBJS_DIR)
	$(RM) $(TMP)

fclean: clean
	@make --no-print-directory fclean -C $(LIBFT_DIR)
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re bonus

# -------------------
# Variables
# -------------------
NAME = build/libftprintf.a

SRC_DIR = src
OBJ_DIR = build/obj

SOURCES = ft_printf.c \
          ft_putchar.c \
          ft_putstr.c \
          ft_putnum.c \
          ft_putunsigned.c \
          ft_puthex.c \
          ft_putpointer.c

SRC = $(addprefix $(SRC_DIR)/,$(SOURCES))
OBJ = $(addprefix $(OBJ_DIR)/,$(SOURCES:.c=.o))

CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iinclude
RM = rm -rf

# -------------------
# Variables test
# -------------------
TEST = test/test_exec
TEST_SRC = test_bin/maintest.c

# -------------------
# Targets
# -------------------

# Librería
all: $(NAME)

$(NAME): $(OBJ)
	mkdir -p build
	ar rcs $(NAME) $(OBJ)

# Objetos
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Test
test: $(NAME)
	mkdir -p test
	$(CC) $(CFLAGS) -Iinclude $(TEST_SRC) $(NAME) -o $(TEST)

# Ejecutar test
runtest: test
	./$(TEST)

# Ejecutar test con valgrind
valgrind: test
	valgrind --leak-check=full ./$(TEST)

# Limpieza
clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME) $(TEST) build test

re: fclean all

# Phony targets
.PHONY: all clean fclean re test run valgrind

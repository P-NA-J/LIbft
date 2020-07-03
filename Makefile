LIB = libft.a

CFLAG = -Wall -Werror -Wextra

INCLUDE = includes

SRC_MEMORY =	memory/ft_memset.c
SRC_MEMORY +=	memory/ft_memcpy.c
SRC_MEMORY +=	memory/ft_memccpy.c
SRC_MEMORY +=	memory/ft_memmove.c
SRC_MEMORY +=	memory/ft_memchr.c
SRC_MEMORY +=	memory/ft_memcmp.c
SRC_MEMORY +=	memory/ft_memalloc.c
SRC_MEMORY +=	memory/ft_memdel.c
SRC_MEMORY +=	memory/ft_bzero.c

SRC_STRING =	string/ft_strlen.c
SRC_STRING +=	string/ft_strdup.c
SRC_STRING +=	string/ft_strcpy.c
SRC_STRING +=	string/ft_strncpy.c
SRC_STRING +=	string/ft_strcat.c
SRC_STRING +=	string/ft_strncat.c
SRC_STRING +=	string/ft_strlcat.c
SRC_STRING +=	string/ft_strchr.c
SRC_STRING +=	string/ft_strrchr.c
SRC_STRING +=	string/ft_strstr.c
SRC_STRING +=	string/ft_strnstr.c
SRC_STRING +=	string/ft_strcmp.c
SRC_STRING +=	string/ft_strncmp.c
SRC_STRING +=	string/ft_strnew.c
SRC_STRING +=	string/ft_strdel.c
SRC_STRING +=	string/ft_strclr.c
SRC_STRING +=	string/ft_striter.c
SRC_STRING +=	string/ft_striteri.c
SRC_STRING +=	string/ft_strmap.c
SRC_STRING +=	string/ft_strmapi.c
SRC_STRING +=	string/ft_strequ.c
SRC_STRING +=	string/ft_strnequ.c
SRC_STRING +=	string/ft_strsub.c
SRC_STRING +=	string/ft_strjoin.c
SRC_STRING +=	string/ft_strtrim.c
SRC_STRING +=	string/ft_strsplit.c

SRC_CHARACTER =		character/ft_isalpha.c
SRC_CHARACTER +=	character/ft_isdigit.c
SRC_CHARACTER +=	character/ft_isalnum.c
SRC_CHARACTER +=	character/ft_isascii.c
SRC_CHARACTER +=	character/ft_isprint.c
SRC_CHARACTER +=	character/ft_toupper.c
SRC_CHARACTER +=	character/ft_tolower.c

SRC_CONVERSION =	conversion/ft_atoi.c
SRC_CONVERSION +=	conversion/ft_itoa.c

SRC_PRINT =		print/ft_putchar.c
SRC_PRINT +=	print/ft_putstr.c
SRC_PRINT +=	print/ft_putendl.c
SRC_PRINT +=	print/ft_putnbr.c
SRC_PRINT +=	print/ft_putchar_fd.c
SRC_PRINT +=	print/ft_putstr_fd.c
SRC_PRINT +=	print/ft_putendl_fd.c
SRC_PRINT +=	print/ft_putnbr_fd.c

SRC_LIST =	list/ft_lstnew.c
SRC_LIST +=	list/ft_lstdelone.c
SRC_LIST +=	list/ft_lstdel.c
SRC_LIST +=	list/ft_lstadd.c
SRC_LIST +=	list/ft_lstiter.c
SRC_LIST +=	list/ft_lstmap.c
SRC_LIST +=	list/ft_lstdup.c
SRC_LIST +=	list/ft_lst_push_back.c

SRC = $(SRC_MEMORY)
SRC += $(SRC_STRING)
SRC += $(SRC_PRINT)
SRC += $(SRC_LIST)
SRC += $(SRC_CONVERSIOn)
SRC += $(SRC_CHARACTER)

OBJ = $(SRC:.c=.o)

PATH_SRC = $(addprefix srcs/, $(SRC))
PATH_OBJ = $(addprefix obj/, $(OBJ))


all: directory_obj_creation $(LIB)

directory_obj_creation:
	if ! [ -d "obj/" ]; then mkdir obj ; fi
	if ! [ -d "obj/memory" ]; then mkdir obj/memory ; fi
	if ! [ -d "obj/string" ]; then mkdir obj/string ; fi
	if ! [ -d "obj/character" ]; then mkdir obj/character ; fi
	if ! [ -d "obj/list" ]; then mkdir obj/list ; fi
	if ! [ -d "obj/conversion" ]; then mkdir obj/conversion ; fi
	if ! [ -d "obj/print" ]; then mkdir obj/print ; fi

$(LIB): $(PATH_OBJ)
	ar rc $@ $(PATH_OBJ)
	ranlib $@

$(addprefix obj/, %.o): $(addprefix srcs/, %.c)
	$(CC) $(CFLAG) -c $< -o $@ -I$(INCLUDE)

clean:
	rm -rf obj

fclean: clean
	rm -f $(LIB)

re: fclean all

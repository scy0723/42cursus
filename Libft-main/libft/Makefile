CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

RM = rm -f

AR = ar
ARFLAGS = crs

INCLUDES = ./libft.h

SRCS_NM = ft_isalpha.c \
		  ft_isdigit.c \
		  ft_isalnum.c \
		  ft_isascii.c \
		  ft_isprint.c \
		  ft_strlen.c \
		  ft_memset.c \
		  ft_bzero.c \
		  ft_memcpy.c \
		  ft_memmove.c \
		  ft_strlcpy.c \
		  ft_strlcat.c \
		  ft_strncmp.c \
		  ft_toupper.c \
		  ft_tolower.c \
		  ft_strchr.c \
		  ft_strrchr.c \
		  ft_memchr.c \
		  ft_memcmp.c \
		  ft_strnstr.c \
		  ft_atoi.c \
		  ft_calloc.c \
		  ft_strdup.c \
		  ft_substr.c \
		  ft_strjoin.c \
		  ft_strtrim.c \
		  ft_split.c \
		  ft_itoa.c \
		  ft_strmapi.c \
		  ft_striteri.c \
		  ft_putchar_fd.c \
		  ft_putstr_fd.c \
		  ft_putendl_fd.c \
		  ft_putnbr_fd.c

SRCS_BN = ft_lstnew.c \
		  ft_lstadd_front.c \
		  ft_lstsize.c \
		  ft_lstlast.c \
		  ft_lstadd_back.c \
		  ft_lstdelone.c \
		  ft_lstclear.c \
		  ft_lstiter.c \
		  ft_lstmap.c

OBJS = $(SRCS_NM:.c=.o)

OBJS_BONUS = $(SRCS_BN:.c=.o)

ifdef WITH_BONUS
		OBJ_FILES = $(OBJS) $(OBJS_BONUS)
	else
		OBJ_FILES = $(OBJS)
endif

all : $(NAME)
	sleep 1

.c.o : $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME) : $(OBJ_FILES)
	$(AR) $(ARFLAGS) $@ $^

clean :
	$(RM) $(RMFLAG) $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(RM) $(RMFLAG) $(NAME)

re: fclean all

bonus:
		@make WITH_BONUS=1 all

.PHONY : all clean fclean re bonus

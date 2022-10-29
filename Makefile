LIBNAME := vriadic.a
NAME := test.out
LIB_SRC := printnumber.c \
		printstring.c \
		createfiles.c \
		removefiles.c
		
TEST_SRC :=  main.c
LIB_OBJ := $(LIB_SRC:.c=.o)
TEST_OBJ := $(TEST_SRC:.c=.o)

create_lib:$(LIB_OBJ)
	ar -cr $(LIBNAME) $^

%.o:%.c vriadic.h test.h
	cc -c $< -o $@
create_test :create_lib $(TEST_OBJ);
	cc $(TEST_OBJ) $(LIBNAME) -o $(NAME)

run : create_test
	./$(NAME)
clean_lib :
	rm $(LIB_OBJ)
fclean_lib: clean_lib
	rm $(LIBNAME)

clean_test :
	rm $(TEST_OBJ)
fclean_test : clean_test
	rm $(NAME)
clean:fclean_lib fclean_test

re : clean run

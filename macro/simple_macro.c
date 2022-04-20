#include <stdio.h> // result after preprocessed file "$ clang/gcc -E simple_macro.c"

#define ABC  5

int
main(int argc, char* argv[]){
	int x = 3;
	int y = ABC;
	
	int z = x + y;
	printf("x + y = %d\n", z);
	return 0;
}
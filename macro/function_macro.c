#include <stdio.h> // result after preprocessed file "$ clang/gcc -E function_macro.c"

#define ADD(a, b) a + b

int
	main(int argc, char** argv){
		int x = 2;
		int y = 3;
		int z = ADD(x, y);
		
		printf("value of z is %d\n", z);
		return 0;
	}
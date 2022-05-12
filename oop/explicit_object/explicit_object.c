#include <stdio.h>

// encapsulation happening here
//  when we put data members i.e. x, y, red etc
//  in "pixel_t"
typedef struct {
	int x, y;
    int red, green, blue;
} pixel_t;

int main()
{
    // "p1" and "p2" are explicit objects here
    //  because programmer as well as program are aware of them
    pixel_t p1, p2;

    p1.x = 56;
    p1.y = 34;
    p1.red = 123;
    p1.green = 37;
    p1.blue = 127;

    p2.x = 56;
    p2.y = 34;
    p2.red = 123;
    p2.green = 37;
    p2.blue = 127;

    return 0;
}
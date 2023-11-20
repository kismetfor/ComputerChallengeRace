#include <stdio.h>

//#define  f(x)  x*x

//#define X
//struct xx X{
//    int  a;
//    float b;
//}stu;

//#define X struct xx
//    X{
//              int  a;
//              float b;
//          }stu;

//struct
// {
//    int a;
//    float b;
//  }stu;

int main()
{
//    int  a=6, b=2, c;
//    c=f(a)/f(b);
//    printf("%d",c);
//
    int x[6] = {1, 2,3,4,5,6};
    int *y=x;
    printf("%d\n", *(&x[0]+4));
    //
//    int a=3;
//    int b=4;
//    int c=5;
//    int x = !((a<b)&&!c||1);
//    printf("%d\n", x);
    return 0;
}

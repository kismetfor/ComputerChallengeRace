#include<stdio.h>

int  x=1;

int f(int  a)
{   static int  x=2;
    int  n=0;
   if(a%2)
         { static int  x=3;n+=x++;  }
   else
         { static int  x=5;n+=x++;  }
    return  n+x++;
 }

int main()
{   int  sum=x,i;
    
    for(i=0;i<4;i++)
         sum+=f(i);
    
    printf("%d",sum);
    return 0;
}

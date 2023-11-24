//
//  main.c
//  4
//
//  Created by rain on 2023/11/24.
//

#include <stdio.h>

int fun(int n[],int Len){
 int Max=n[0];
 for(int i=1;i<Len;i++)
  if(Max<n[i])
   Max=n[i];
 return Max;
}

int main(int argc, const char * argv[]) {
    int n[]={1,2,3,4,5};
     printf("%d",fun(n,sizeof(n)/sizeof(int)));
    return 0;
}

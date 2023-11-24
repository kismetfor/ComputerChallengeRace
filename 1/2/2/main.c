//
//  main.c
//  2
//
//  Created by rain on 2023/11/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int sum=0;
    enum n{a,b,c,d,e,f};
    enum n i;
    for(i=a;i<=f;i=(enum n)((int)i+1))
        sum+=(int)i;
    printf("%d",sum);
    return 0;
}

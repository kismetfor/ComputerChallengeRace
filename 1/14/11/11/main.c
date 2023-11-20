//
//  main.c
//  11
//
//  Created by rain on 2023/11/20.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
//    char a = 'a';
//    printf("%d\n", a);
//    a = a>>1;
//    printf("%d\n", a);
    
    int x = 1; //0000 0001
    int ret = ~x; //1111 0001--原1000 1111
    printf("%d\n", ret);
    return 0;
}

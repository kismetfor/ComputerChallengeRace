//
//  main.c
//  test
//
//  Created by rain on 2023/11/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char a[]="\0abc\012345";
    printf("%d\n", sizeof(a));
    return 0;
}

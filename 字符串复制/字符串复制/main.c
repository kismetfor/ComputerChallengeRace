#include<stdio.h>
#include<string.h>
#include <assert.h>

#define N 80

char * mystrcpy(char * s, char * t, int m){
    assert((s != NULL) && (t != NULL));
    char *ret = s;
    t += m-1;
    while ((*s++ = *t++));
    return ret;
}  ;

int main()
{
    int n,m;
    char str1[N],str2[N];
    //printf("输入第一个字符串:");
    gets(str1);
   // printf("输入m的值:");
    scanf("%d",&m);
    n = strlen(str1);
    if(n<m)
    {
        printf("错误");
    }
    else
    {
        mystrcpy(str2,str1,m);
        puts(str2);
    }
    return 0;
}
/********** Begin **********/

/********** End **********/

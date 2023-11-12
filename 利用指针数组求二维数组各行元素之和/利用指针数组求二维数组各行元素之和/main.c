#include<stdio.h>

#define N 3
#define M 5

int main()
{
    int a[N][M];
    int *p[N] ;
    for(int i=0;i<N;i++)
    {
        for (int j=0; j<M; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i=0; i<N; i++) {
        p[i] = &a[i][0];
    }
    /********** Begin *********/
    for (int i=0; i<N; i++) {
        int sum = 0;
        for (int j=0; j<M; j++) {
            sum += *(p[i]+j);
        }
        printf("第%d行和为:%d\n", i, sum);
    }
    /********** End **********/
    return 0;
}

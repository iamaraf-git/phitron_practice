
#include<stdio.h>

int main()
{

    int m, n ;
    scanf("%d%d",&m,&n);
    int *p=&m, *q=&n;
    float k= (*p + *q);
    printf("%.3f",k/2);
    return 0;
}

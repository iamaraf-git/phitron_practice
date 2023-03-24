#include<stdio.h>

solve(int n)
{

    if(n<1) return 0;
    else
        return solve(n-1)+ n;


}

int main()
{

    int n ;
    scanf("%d",&n);
   
    printf("%d ",solve(n));

    return 0;
}
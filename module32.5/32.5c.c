#include<stdio.h>

solve(int n)
{

    if(n<1) return 9;
    else
    {

        solve(n-1);
        printf("%d ",n);
        
    }
}

int main()
{

    int n ;
    scanf("%d",&n);

    solve(n);

    return 0;
}
// Problem Statement
// You are given a positive integer n .The second line will contain n positive integers.
// Write a function that will take an integer array as an argument and return the sum in the following way.
// >> If the index is odd and at the same time the value is odd then you can add the index and values
// >> If the index is even and at the same time the value is even then you can add the index and values


// Return the total sum from the function. If there is no such value which is mentioned in the above then return 0 from the function.
// See the sample input ,output and explanation for more clarification.

// Constraints-
// 1<=n<=100
// Values of array will be given between 1-1000



#include<stdio.h>

int main()
{
    // printf("Hello world!");
    int i, n,sum =0;
    scanf("%d", &n);
    int arr[n];

    for( i=1; i<n+1 ; i++)
        scanf("%d",&arr[i]);

    for( i=1; i<n+1 ; i++)
    {
        if((i%2==0)&&(arr[i]%2==0))
            sum += arr[i]+ i;

        else  if((i%2==1)&&(arr[i]%2==1))
            sum += arr[i]+ i;
    }

    printf("%d",sum);
    return 0;
}

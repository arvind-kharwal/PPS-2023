#include<stdio.h>
int main()
{
    int n,i;
    unsigned long int fact = 1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact = fact*i;
    }    
    printf("\nThe factorial is %lu",fact);
}
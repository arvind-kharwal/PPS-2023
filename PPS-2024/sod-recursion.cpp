#include<stdio.h>
int sod(int);
int main()
{
    int r,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    r = sod(n);
    printf("\nThe sum is %d",r);
    return(0);
}
int sod(int n)
{
    int s;
    if (n==0)
        return 0;
    else
        s = n%10+sod(n/10);
    return(s);
}
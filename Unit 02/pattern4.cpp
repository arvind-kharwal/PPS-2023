#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=65;i<=69;i++)
    {
        for(j=1;j<=69-i;j++)
            printf(" ");
        for(k=65;k<=i;k++)
            printf("%c",k);
        printf("\n");
    }          
    return(0);
}
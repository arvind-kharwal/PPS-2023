#include<stdio.h>
int main()
{
    int i=0,j=0;
    while(i<3)
    {
        while(j<3)
        {
            printf("\n%d%d",i,j);
            j++;
        }
        i++;
    }
    return(0);
}
#include <stdio.h>
int main()
{
    int i, j,sum=0;
    for(i=1; i<=500; i++)
    {
        sum = 0;
        for(j=1; j<i; j++)
        {
            if(i % j == 0)
            {
                sum = sum + j;
            }
        }
        if(sum == i)
        {
            printf("%d, ", i);
        }
    }
    return 0;
}

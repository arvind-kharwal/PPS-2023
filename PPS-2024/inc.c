#include<stdio.h>
int main()
{
    int a = 5,b;
    b = a++ +a+ a++;
    printf("%d\t%d",a,b);
    return(0);
}

#include<stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("data.txt","r+");
    fputc('A',fp);
}
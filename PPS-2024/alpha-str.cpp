#include<string.h>
#include <stdio.h>
int main()
{
    char s[20];
    int i,j,k,t;
    printf("\nEnter the string ");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        j = i;
        for(k=i+1;s[k]!='\0';k++)
        {
            if(s[k]<s[j])
            {
                j = k;
            }
        }
        t = s[i];
        s[i] = s[j];
        s[j] = t;
        printf("%c",s[i]);
    }

    
}
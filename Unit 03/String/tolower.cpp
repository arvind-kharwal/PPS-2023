#include <ctype.h>
#include <stdio.h>
int main()
{
	char ch,ch1;
	printf("\n Enter the character: ");
	ch = getchar();
	ch = tolower(ch);
	printf("%c",ch);
	return 0;
}
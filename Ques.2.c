#include <stdio.h>

int main(void) {
	// your code goes here
	int a;
	scanf("%d",&a);
	char c;
	char array[50];
	for(int i=0;i<a;i++)
	{
	    scanf("%c",&c);
	    array[i]=c;
	}
	for(int i=0;i<a;i++)
	{
	    printf("%c",array[i]);
	}
	return 0;
}


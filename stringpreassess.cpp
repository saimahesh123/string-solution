#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],temp;
	int i,j=0;
	printf("ENTER THE STRING:");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='-')
		{
			temp=s[j];
			s[j]=s[i];
			s[i]=temp;
			j++;
		}	
	}
	puts(s);
}

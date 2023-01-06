#include<stdio.h>
#include<string.h>
int main()
{
	char license[30];
	int test=10;
	int i;
	strcpy(license,"xxxxREDACTEDxxxx");
	for(i=0;i<10;i++)
	{
		if(i==test)
		{
			printf(license);
		}
		else
		{
			printf("\ncan't show license");
		}
	}
}

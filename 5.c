

#include<stdio.h>
int main()
{
	int i=1,sum=0;
	while(i<=20)
	{
		sum = sum + (i*i*i);
		i++;
	}
	printf("  %d "  , sum ) ; 
	
}


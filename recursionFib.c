#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <string.h>

int n1 = 0;
int n2 = 1;
int n3; 
int counter = 0;
void fib(int amount)
{
	
	if(amount == 0)
	{
		return;
	}	
	else if(counter == 0)
	{
	    printf("0 1 ");
	    counter++;
	    fib(amount - 2);
	}
	else
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		printf("%d ",n3);
		fib(amount - 1);
	}
}
int main()
{
	int amount;
	printf("Enter how many numbers you want to go in the fibonacci sequence");
	scanf("%d",&amount);
	fib(amount);
}
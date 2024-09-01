#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

void Push(int);

char Exp[50];
int Stack[50], top = -1;

int main()
{
	int ans, i;
     
	printf("Enter the expression: ");
	scanf("%s",Exp);
     
	for(i = 0; Exp[i] != '\0'; i++)
	{
		if(isalnum(Exp[i]))
			Push(Exp[i] - '0');
		
	}
     
	return 0;
}

void Push(int inp)
{
	Stack[++top] = inp;
}

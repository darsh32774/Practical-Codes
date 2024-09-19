#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define Max 1000

char Exp[Max] = {0}, Stack[Max] = {0};
int i, top = -1;
double result;

void Evaluate();
void Push(char, char []);
void Pop(char);

int main()
{
     printf("Enter the expression: ");
     scanf("%s",Exp);

     Evaluate();
     printf("Answer: %f",result);

     return 1;
}

void Evaluate()
{
     for(i=0;Exp[i]!='\0';i++)
     {
          if(isalnum(Exp[i]))
          {
               Push(Exp[i], Stack);
          }
          else
          {
               Pop(Exp[i]);
          }
     }
}

void Push(char inp, char arr[])
{
     arr[++top] = inp;
}

void Pop(char inp)
{
     int lopt, ropt;
     char temp;

     ropt = Stack[top--] - '0';
     lopt = Stack[top--] - '0';

     switch(inp)
     {
          case '+':
               result = lopt + ropt;
               temp = result + '0';
               break;
          
          case '-':
               result = lopt - ropt;
               temp = result + '0';
               break;
          
          case '*':
               result = lopt * ropt;
               temp = result + '0';
               break;
          
          case '/':
               result = lopt / ropt;
               temp = result + '0';
               break;
          
          case '^':
               result = pow(lopt,ropt);
               temp = result + '0';
               break;
          
          case '%':
               result = lopt % ropt;
               temp = result + '0';
               break;
     }

     Push(temp, Stack);
}

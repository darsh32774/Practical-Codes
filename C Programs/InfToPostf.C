#include<stdio.h>
#include<ctype.h>
#define Max 50

void push(char, char [], int *);
void pop(char);
void OprtMngr(char);
int OprtCmp(char, char);

char Stack[Max] = {0}, Postf[Max] = {0} , Exp[Max] = {0};
int TOS = -1, TOPF = -1;

int main()
{
    int i,j;
    
    start:
    printf("Enter the expression: ");
    scanf("%s",Exp);

    for(i=0;Exp[i]!='\0';i++)
    {
        if(isalnum(Exp[i]))
        {
            push(Exp[i],Postf,&TOPF);
        }
        else if((Exp[i]=='(')||(Exp[i]=='[')||(Exp[i]=='{'))
        {
            push(Exp[i],Stack,&TOS);
        }
        else if((Exp[i]=='+')||(Exp[i]=='-')||(Exp[i]=='*')||(Exp[i]=='/')||(Exp[i]=='%')||(Exp[i]=='^'))
        {
            OprtMngr(Exp[i]);
        }
        else
        {
            switch(Exp[i])
            {
                case ')':
                {  
                   for(j=TOS;j>=0;j--)
                    {
                        if(Stack[j]=='(')
                        {
                            TOS--;
                            break;
                        }
                        pop(Stack[j]);
                    }
                    break;
                }

                case ']':
                {
                    for(j=TOS;j>=0;j--)
                    {
                        if(Stack[j]=='[')
                        {
                            TOS--;
                            break;
                        }
                        pop(Stack[j]);
                    }
                    break;
                }

                case '}':
                {
                    for(j=TOS;j>=0;j--)
                    {
                        if(Stack[j]=='{')
                        {
                            TOS--;
                            break;
                        }
                        pop(Stack[j]);
                    }
                    break;
                }
                
                default: 
                {
                    printf("Invalid expression.");
                    goto start;
                }
            }
        }
    }

    for(i=TOS;i>=0;i--)
    {
        pop(Stack[i]);
    }

    printf("\nPostfix Expression: ");
    for(i=0;i<=TOPF;i++)
    {
        printf("%c",Postf[i]);
    }
    
    return 0;
}
	
void push(char inp, char arr[], int *top)
{
    arr[++(*top)] = inp;
}

void pop(char inp)
{
    push(inp,Postf,&TOPF);
    TOS--;
}

void OprtMngr(char oprt)
{
    if((Stack[TOS]!='+')&&(Stack[TOS]!='-')&&(Stack[TOS]!='*')&&(Stack[TOS]!='/')&&(Stack[TOS]!='%')&&(Stack[TOS]!='^'))
    {
        push(oprt,Stack,&TOS);
    }
    else
    {
        if(OprtCmp(Stack[TOS],oprt))
        {
            pop(Stack[TOS]);
            push(oprt,Stack,&TOS);
        }
        else
        {
            push(oprt,Stack,&TOS);
        }
    }
}

int OprtCmp(char oprt1,char oprt2)
{
    int val1,val2;
    if((oprt1=='%')||(oprt2=='%'))
    {
        return 0;
    }
    else
    {
        if((oprt1=='+')||(oprt1=='-'))
            val1=0;
        else
            val1=1;
    
        if((oprt2=='+')||(oprt2=='-'))
            val2=0;
        else
            val2=1;
    }
    if(val1>=val2)
        return 1;
    else
        return 0;
}

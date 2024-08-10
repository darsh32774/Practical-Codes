#include<stdio.h>
int BinConv(int,int []);
int twoC(int []);
int bMulr[8] = {0}, bMuld[8] = {0}, cnt = 0;
int main()
{
	int n,i,num;
	
	printf("Enter a number: ");
	//scanf("%d",&n);
	scanf("%d",&num);
	BinConv(num,bMulr);
	//BinConv(n,bMuld);
	for(i=0;i<8;i++)
		printf("%d",bMulr[i]);
	printf("\n");
	twoC(bMulr);
	/*for(i=0;i<8;i++)
		printf("%d",bMuld[i]);*/
	for(i=0;i<8;i++)
		printf("%d",bMulr[i]);
}

int BinConv(int num, int arr[])
{
	int i;
	
	for(i=7;num>0;i--)
	{
		arr[i] = num % 2;
		num /= 2;
		cnt++;
	}
	printf("cnt = %d\n",cnt);
}

int twoC(int arr[])
{
	int carry=0,i;
	for(i=7;i>7-cnt;i--)
	{
		if(arr[i]==1)
			arr[i]=0;
		else
			arr[i]=1;
	}
	
	if(arr[7]==1)
	{
		arr[7]=0;
		carry=1;
	}
	else
		arr[7]=1;
		
		
	for(i=6;carry!=0;i--)
	{
		if(arr[i]==1)
			arr[i]=0;
		else
		{
			arr[i]=1;
			carry=0;
		}
	}
}

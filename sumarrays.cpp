#include<iostream.h>
#include<conio.h>
void SumLast3(int A[2][4],int N,int M)
{
	int sum=0;
	for(int i=0;i<M;i++)
	{	
for(int j=0;j<N;j++)
		{	
if(A[i][j]%10==3)
			sum+=A[i][j];
		}
	}
	cout<<"The sum of values ending with 3 is "<<sum;
}
void main()
{	clrscr();
	int A[2][4],M=2,N=4;
	cout<<"Enter the elemens of the array: ";
	for(int i=0;i<2;i++)
	{	
for(int j=0;j<4;j++)
		{
			cin>>A[i][j];
		}
	}
	SumLast3(A,N,M);
	getch();
}


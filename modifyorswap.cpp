#include<iostream.h>
#include<conio.h>
void SWAP2CHANGE(int P[],int N)
{	
int t;
	for(int i=0;i<N;i++)
	{	
if(P[i]%10==5||P[i]%10==0)
		{
			P[i]=t;
			P[i]=P[i+1];
			P[i+1]=t;
		}
	}
	cout<<"New array: ";
	for(int j=0;j<N;j++)
	cout<<P[j]<<'\t';
}
void main()
{	
clrscr();
	int P[10],N;
	cout<<"Enter the number of elements of array(max=10)";
	cin>>N;
	cout<<"Enter the elements of array:\n";
	for(int i=0;i<N;i++)
	cin>>P[i];
	SWAP2CHANGE(P,N);
	getch();
}

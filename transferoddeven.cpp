#include<iostream.h>
#include<conio.h>
void Get2From1(int A[],int O[],int E[],int t)
{	
int j=0,k=0;
	for(int i=0;i<t;i++)
	{	
if(i%2==0)
		{
			O[j]=A[i];
			j++;
		}
		else
		{
			E[k]=A[i];
			k++;
		}
	}
}
void main()
{	
clrscr();
	int ALL[10],ODD[5],EVEN[5],n;
	cout<<"Enter total numbers: ";
	cin>>n;
	cout<<"Enter the numbers: ";
	for(int i=0;i<n;i++)
	{
		cin>>ALL[i];
	}
	Get2From1(ALL,ODD,EVEN,n);
	cout<<"At odd position: ";
	for(i=0;i<5;i++)
	cout<<ODD[i]<<'\t';
	cout<<"\nAt even position: ";
	for(i=0;i<5;i++)
	cout<<EVEN[i]<<'\t';
	getch();
}

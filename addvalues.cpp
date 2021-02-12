#include<iostream.h>
#include<conio.h>
void EvenOdd(int T[],int C)
{	
for(int i=0;i<C;i++)
	{
		if(T[i]%2==0)
		T[i]+=2;
		else if(T[i]%2==1)
		T[i]+=1;
	}
	cout<<"New array: ";
	for(int j=0;j<C;j++)
	cout<<T[j]<<'\t';
}
void main()
{	
clrscr();
	int T[10],C;
	cout<<"Enter the size of the array: ";
	cin>>C;
	cout<<"Enter the elements of the array:\n";
	for(int i=0;i<C;i++)
	cin>>T[i];
	EvenOdd(T,C);
	getch();
}

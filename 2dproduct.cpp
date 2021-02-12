#include<iostream.h>
#include<conio.h>
void RowProduct(int A[4][3],int m,int n)
{
	int prod[4];
	for(int i=0;i<m;i++)
	{
		prod[i]=1;
		for(int j=0;j<n;j++)
		{
			prod[i]*=A[i][j];
		}
	}
	for(i=0;i<4;i++)
	{
		cout<<"Product of rows "<<i+1<<'=';
		cout<<prod[i]<<endl;
	}
}
void main()
{
	clrscr();
	int A[4][3],m=4,n=3;
	cout<<"Enter the elements of the array\n";
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	cin>>A[i][j];
	RowProduct(A,4,3);
	getch();
}

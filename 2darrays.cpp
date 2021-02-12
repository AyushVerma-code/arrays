#include<iostream.h>
#include<conio.h>
void COLSUM(int A[10][10],int M,int N)
{
	int colsum[10];
	for(int j=0,c=0;j<N,c<N;j++,c++)
	{
		colsum[c]=0;
		for(int i=0;i<M;i++)
			{
				colsum[c]+=A[i][j];
			}
		cout<<"The sum of column "<<c+1<<" is: "<<colsum[c]<<endl;
	}
}
void main()
{
	clrscr();
	int a[10][10],n,m;
	cout<<"Enter number of rows of array: ";
	cin>>m;
	cout<<"Enter number of columns of array: ";
	cin>>n;
	cout<<"Enter the elements of array: ";
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"The array is: \n";
	for(i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j]<<'\t';
		}
		cout<<endl;
	}
	COLSUM(a,m,n);
	getch();
}

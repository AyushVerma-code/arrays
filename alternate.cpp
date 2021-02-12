#include<iostream.h>
#include<conio.h>
void SKIPEACH(int H[][10],int C, int R)
{
	int disp=1;
	cout<<"Alternate elements of array: ";
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			if(disp==1)
			{
				cout<<H[i][j];
			}
			disp*=-1;
		}
	}
}
void main()
{
	clrscr();
	int A[10][10],c,r;
	cout<<"Enter number of columns in array: ";
	cin>>c;
	cout<<"Enter number of rows in array: ";
	cin>>r;
	cout<<"Enter elements of array: ";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>A[i][j];
		}
	}
	cout<<"The array is: \n";
	for(i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<A[i][j]<<'\t';
		}
		cout<<'\n';
	}
	SKIPEACH(A,c,r);
	getch();
}

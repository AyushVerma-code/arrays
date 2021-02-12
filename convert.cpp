#include<iostream.h>
#include<conio.h>
void array(int a[])
{
	int b[5][5];
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if((i+j)>=5)
			b[i][j]=0;
			else
			b[i][j]=a[j];
		}
	}
	cout<<"The 2-D array is:\n";
	for(i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<b[i][j]<<'\t';
		}
	cout<<endl;
	}
}
void main()
{
	clrscr();
	int a[5],b[5][5];
	cout<<"Enter elements of array(5):\n";
	for(int i=0;i<5;i++)
	{
cin>>a[i];
}
	array(a);
	getch();
}

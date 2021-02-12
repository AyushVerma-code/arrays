#include<iostream.h>
#include<conio.h>
void RevArray(int A[],int s)
{	
int i=0,j=s-1,tmp;
	for(;i<=j;i++,j--)
	{	
tmp=A[i];
		A[i]=A[j];
		A[j]=tmp;
	}
	cout<<"\nThe arranged array is: ";
	for(i=0;i<s;i++)
	{	
cout<<A[i]<<'\t';
	}
}
void main()
{	
clrscr();
	int a[10],size;
	cout<<"Enter size of array: ";
	cin>>size;
	cout<<"Enter elements of array: ";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	cout<<"The array is: \n";
	for(i=0;i<size;i++)
	{
		cout<<a[i]<<'\t';
	}
	RevArray(a,size);
	getch();
}

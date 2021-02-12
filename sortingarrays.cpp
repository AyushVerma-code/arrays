#include<iostream.h>
#include<conio.h>
#include<process.h>

void merge(int[],int[],int[],int,int);
void sel_sort_desc(int[],int);
void sel_sort_asc(int[],int);

void main()
{
  clrscr();

  int i,j,m,n,a[20],b[20],c[40];

  cout<<"\nEnter the no. of elements to input in first array ";
  cin>>m;

  cout<<"\nEnter the no. of elements to input in second array ";
  cin>>n;

  if(m>20 || n>20)
  {
    if(m>20)
      cout<<"\n\nSize of first array should be less than 20 ";
    else if(n>20)
      cout<<"\n\nSize of second array should be less than 20";
    getch();
    exit(0);
  }

  cout<<"\nEnter the elements in first array ";
  for(i=0;i<m;i++)
  {
    cin>>a[i];
  }

  cout<<"\nEnter the elements in second array ";
  for(j=0;j<n;j++)
  {
    cin>>b[j];
  }

  sel_sort_desc(a,m);
  sel_sort_asc(b,n);

  merge(a,b,c,m,n);

  cout<<"\n\nMerged array is descending order is ";
  for(i=0;i<m+n;i++)
  {
    cout<<c[i]<<"\n";
  }

  getch();

}

void merge(int a[],int b[],int c[],int m,int n)
{
  int i=0,j=n-1,k=0;

  while(i<m &&j>=0)
  {
    if(a[i]>b[j])
    {
      c[k++]=a[i++];
    }
    else
    {
      c[k++]=b[j--];
    }
  }
  if(i==m)
  {
    while(j>=0)
    {
      c[k++]=b[j--];
    }
  }
  if(j<0)
  {
    while(i<m)
    {
      c[k++]=a[i++];
    }
  }

}

void sel_sort_desc(int a[],int m)
{
  //to sort first array in descending order

  int t;
  for(int i=0;i<m;i++)
  {
    for(int j=i+1;j<m;j++)
    {
      if(a[i]<a[j])
      {
	t=a[i];
	a[i]=a[j];
	a[j]=t;
      }
    }
  }
}

void sel_sort_asc(int b[],int n)
{
  //to sort second array in ascending order

  int t;
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(b[i]>b[j])
      {
	t=b[i];
	b[i]=b[j];
	b[j]=t;
      }
    }
  }
}

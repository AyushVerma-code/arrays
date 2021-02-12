#include<iostream.h>
#include<conio.h>
void FixSalary (float Salary[],int N)
{
	for(int i=0;i<N;i++)
	{
		if(Salary[i]<10000)
			Salary[i]+=0.35*Salary[i];
		else if(Salary[i]>=10000&&Salary[i]<=20000)
			Salary[i]+=0.30*Salary[i];
		else if(Salary[i]>=20000)
			Salary[i]+=0.20*Salary[i];
	}
	for(i=0;i<N;i++)
	{
		cout<<Salary[i]<<'\t';
	}
}
void main()
{
	clrscr();
	float Salary[5];int N;
	cout<<"How many salaries do you want to enter: ";
	cin>>N;
	cout<<"Enter the present salaries: ";
	for(int i=0;i<N;i++)
	cin>>Salary[i];
	cout<<"New salaries are: ";
	/*for(int j=0;j<N;j++)
	cout<<Salary[j]<<'\t;*/
	FixSalary(Salary,N);
	getch();
}

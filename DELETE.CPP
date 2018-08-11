// header files
#include<iostream.h>
#include<conio.h>

void del(int[], int, int); // function prototype
void main()
{
	clrscr();
	int a[100], s, d;
	cout<<"\n enter size(max size 100) : ";
	cin>>s;  // size user want
	cout<<"\n enter the elemnts : ";
	for(int i =0;i<s;i++)
		cin>>a[i];      // enter array
	cout<<"\n enter the element : ";
	cin>>d; // element to be deleted
	del(a,s,d);   // function calling
	getch();   // get character for screen stability
}

void del(int a[], int s, int d)   // function defination
{
	int i,pos=0;

	for(i=0;i<s;i++)
	{
	   if(a[i]==d)   // element found from array
		{
			pos = i; break;     // pos return position of d
		} // end for
	 }  // end if
	 if(pos==0)
		cout<<"\n Not Found!!";

	 for(int j= pos+1; j<s ; j++)
		a[j-1] = a[j];  // overwriting the position of element which has to be deleted

	 cout<<"\n\n array : ";
	 // displaying array
	 for(i = 0;i<s-1;i++)
	 cout<<a[i]<<" " ;
}
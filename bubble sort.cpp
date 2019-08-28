#include <iostream>
using namespace std;
#define swap(x,y,t){ t=x; x=y;y=t;}
int main()
{
	int i,n,j,k,t,a[100];
	cout<<"Enter the number of elements of array\n";
	cin>>n;
	cout<<"Enter the elements of the array\n";
	for(i=0;i<n;i++)
		cin>>a[i];
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
				swap(a[j],a[j+1],t);
		}	
		cout<<"after "<<i+1<<" sorting the elements are\n";
		for(k=0;k<n;k++)
			cout<<a[k]<<" ";
		cout<<"\n \n";
	}	
	return 0;
}

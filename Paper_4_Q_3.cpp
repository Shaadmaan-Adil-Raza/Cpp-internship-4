#include <iostream>
#include <climits>
#include <cstdlib>
using namespace std;
int minmD(int a[], int n, int x, int y)
{
    int m=INT_MAX, i, prev=-1;
    for(i=0;i<n;i+=1)
	{
        if(a[i]==x || a[i]==y)
		{
            if(prev!=-1 && a[i]!=a[prev])
			{
                m=min(m, abs(i-prev));
            }
            prev=i;
        }
    }
    if(m==INT_MAX)
		return -1;
	else
		return m;
}
int main() {
	int i, x, y, n;
	cout<<"Enter array's size: ";
	cin>>n;
	int a[n];	
	cout<<"Enter the array: \n";
	for(i=0;i<n;i+=1)
	{
		cin>>a[i];
	}
	cout<<"\nEnter the pair: ";
    cin>>x>>y;
	cout<<minmD(a, n, x, y)<<endl;
}

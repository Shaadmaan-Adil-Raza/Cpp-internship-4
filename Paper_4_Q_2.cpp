#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
 
    int i, d, n;
	cout<<"Enter array's size: ";
	cin>>n;
	int a[n];	
	cout<<"Enter the array: \n";
	for(i=0;i<n;i+=1)
	{
		cin>>a[i];
	} 
    cout << "Duplicates: \n";
    for (i = 0; i < n; i+=1) 
	  {
        if (a[abs(a[i])] >= 0)
            a[abs(a[i])] = -a[abs(a[i])];
        else
            cout<<abs(a[i]) << "\n";
    }
}

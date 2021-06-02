#include <iostream>
#include <cstdlib>
using namespace std;
int compare(const void* a, const void* b)
{
	const int* x = (int*) a;
	const int* y = (int*) b;
  if (*x > *y)
		return 1;
	else if (*x < *y)
		return -1;
  return 0;
}
void sumZero(int a[], int n)
{
    int l, r , ms, s = 0, ml, mr;
    qsort(a, n, sizeof(int), compare);
    l=0; 
	r = n-1;
    ms=a[l]+a[r];
    ml=l;
    mr=r;
    while(l < r)
    {
        s = a[l] + a[r];
        if(abs(s) < abs(ms))
        {
            ms = s;
            ml = l;
            mr = r;
        }
        if(s < 0)
            l+=1;
        else
            r-=1;
    }
    cout<<"The two elements are: "<<a[ml]<<", "<<a[mr];
}

int main()
{
	int i, n;
	cout<<"Enter array's size: ";
	cin>>n;
	int a[n];	
	cout<<"Enter the array: \n";
	for(i=0;i<n;i+=1)
	{
		cin>>a[i];
	}    
	sumZero(a, n);
}

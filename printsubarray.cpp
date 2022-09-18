
#include <iostream>
using namespace std;

void printSubarrays(int arr[],int n)
{
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<arr[k]<<", ";
            }
            cout<<endl;
        }
    }
}

int main() {
	// your code goes here
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(int);
    

    printSubarrays(arr,n);

	return 0;
}


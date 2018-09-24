#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;++i)cin>>arr[i];
	    int k;
	    cin>>k;
	    if(k==1){
	        cout<<"0"<<endl;
	        continue;
	    }
	    sort(arr,arr+n);
	    int min=999999;
	    for(int i=0;i<n;++i)
	    {
	        if(k+i-1==n)break;
	        if(arr[i+k-1]-arr[i]<min)min=arr[i+k-1]-arr[i];
	    }
	    cout<<min<<endl;
	}
	return 0;
}

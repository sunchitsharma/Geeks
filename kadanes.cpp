#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin >>n;
	    vector<int>arr;
	    for(int i=0;i<n;++i)
	    {
	        int temp;
	        cin>>temp;
	        arr.push_back(temp);
	    }
	    
	    int gm=-99999;
	    int lm=0;
	    vector<int>brr;
	    
	    for(int i=0;i<n;i++)
	    {
	        lm=max(arr[i],lm+arr[i]);
	        gm=max(gm,lm);
	    }
	    
	    cout<<gm<<endl;
	}
	return 0;
}

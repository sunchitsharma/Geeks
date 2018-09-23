#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int>arr(n);
	    for(int i=0;i<n;++i)
	    {
	        cin>>arr[i];
	    }
	    int l=arr[n-1];
	    stack<int>s;
	    s.push(l);
	    for(int i=n-2;i>=0;i--)
	    {
	        if(arr[i]>=l)
	        {
	            l=arr[i];
	            s.push(l);
	        }
	    }
	    while(!s.empty())
	    {
	        cout<<s.top()<<" ";
	        s.pop();
	    }
	    cout<<endl;
	}
	return 0;
}

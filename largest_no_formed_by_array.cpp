#include <stdio.h>
#include<bits/stdc++.h>

using namespace std;

bool comp(int a,int b)
{
    string x=to_string(a)+to_string(b);
    string y=to_string(b)+to_string(a);
    if(x.compare(y)<0)return false;
    else return true;
}

int main() {
    int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int>arr(n);
	    for(int i=0;i<n;++i)cin>>arr[i];
	    
	    sort(arr.begin(),arr.end(),comp);
	    for(int i=0;i<n;++i)cout<<arr[i];
	    cout<<endl;
	}
	return 0;
}

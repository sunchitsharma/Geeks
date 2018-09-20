#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    vector<int>arr(n);
	    for(int i=0;i<n;++i)cin>>arr[i];
	    int flag=0;
	    int a=0;
	    int b=0;
	    int sum=0;
	    
	    for(int i=0;i<n;++i)
	    {
	        sum+=arr[b];
	        b++;
	        if(sum==k)
	        {
	            cout<<a+1<<" "<<b<<endl;
	            flag=1;
	            break;
	        }
	        if(sum>k)
	        {
	            while(sum>k)
	            {
	                sum-=arr[a];
	                a++;
	            }
                if(sum==k)
                {
                    cout<<a+1<<" "<<b<<endl;
                    flag=1;
                    break;
                }
	        }
	    }
	    if(flag==0)cout<<"-1"<<endl;
	}
	return 0;
}

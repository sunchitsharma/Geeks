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
	    for(int i=0;i<n;++i)cin>>arr[i];
	    
	    if(n==1)cout<<"1"<<endl;
	    else
	    {
	        int a=0;
	        int b=n-1;
	        int flag=0;
	        int sa=0;
	        int sb=0;
	        
	        while(a<b)
	        {
	            sa+=arr[a];
	            sb+=arr[b];
	            a++;
	            b--;
	            if(sa<sb)
	            {
	                while(sa<sb)
	                {
	                    sa+=arr[a];
	                    a++;
	                }
	            }
	            if(sa>sb)
	            {
	                while(sa>sb)
	                {
	                    sb+=arr[b];
	                    b--;
	                }
	            }
	            if(a==b && sa==sb)
	            {
	                cout<<a+1<<endl;
	                flag=1;
	                break;
	            }
	            
	        }
	     if(flag==0)cout<<"-1"<<endl;   
	    }
	}
	
	return 0;
}

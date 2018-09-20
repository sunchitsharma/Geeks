#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int one=0;
	    int two=0;
	    int zero=0;
	    
	    int n;
	    cin>>n;
	    for(int i=0;i<n;++i)
	    {
	        int temp;
	        cin>>temp;
	        if(temp==0)zero++;
	        else if(temp==1)one++;
	        else two++;
	    }
	    for(int i=0;i<zero;i++)cout<<"0 ";
	    for(int i=0;i<one;i++)cout<<"1 ";
	    for(int i=0;i<two;i++)cout<<"2 ";
	    
	    cout<<endl;
	}
	return 0;
}

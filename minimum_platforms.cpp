#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0;i<n;++i)cin>>a[i];
        for(int i=0;i<n;++i)cin>>b[i];
        
        multimap<int,char> mm;
        
        for(int i=0;i<n;i++)
        {
            mm.insert(make_pair(a[i],'a'));
            mm.insert(make_pair(b[i],'d'));
        }
        
        int max=0;
        int c=0;
        for(auto it=mm.begin();it!=mm.end();it++)
        {
            if((*it).second=='a')c++;
            else c--;
            
            if(c>max)max=c;
        }
        cout<<max<<endl;
    }
	return 0;
}

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int>sv;
map<int,int>mp;

bool comp(int a,int b)
{
        if(mp[a]>mp[b])return false;
        return true;
}

void fillmap()
{
    for(int i=0;i<sv.size();i++)mp.insert(make_pair(sv[i],i));
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    sv.clear();
	    mp.clear();
	    int n,m;
	    cin>>n>>m;
	    vector<int>fv(n);
	    
	    for(int i=0;i<n;++i)cin>>fv[i];
	    for(int i=0;i<m;++i)
	    {
	        int temp;
	        cin>>temp;
	        sv.push_back(temp);
	    }
	   
	    fillmap();
	    
	    vector<int>im;
	    vector<int>nim;
	    sort(fv.begin(),fv.end());
	    for(int i=0;i<n;++i)
	    {
	        if(mp.find(fv[i])!=mp.end())
	            im.push_back(fv[i]);
	        else
	            nim.push_back(fv[i]);
	    }
	    
	    sort(im.begin(),im.end(),comp);
	    
	    
	    for(int i=0;i<im.size();i++)cout<<im[i]<<" ";
	    for(int i=0;i<nim.size();i++)cout<<nim[i]<<" ";
	    cout<<endl;
	}
	return 0;
}

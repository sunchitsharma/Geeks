#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n;
	cin>>n;
	priority_queue<int>maxheap;
	priority_queue<int,vector<int>,greater<int>> minheap;
	int max_sz=0;
	int min_sz=0;
	
	int cur_med=0;
	
	while(n--)
	{
	    int var;
	    cin>>var;
	    
	    // PUSHING INTO HEAPS
	    
	    if(var>cur_med)
	    {
	        minheap.push(var);
	        min_sz++;
	    }
	    else
	    {
	        maxheap.push(var);
	        max_sz++;
	    }
	    
	    // MAKING HEAPS RIGHT
	    if(min_sz-max_sz>1)
	    {
	        int x=minheap.top();
	        minheap.pop();
	        maxheap.push(x);
	        min_sz--;
	        max_sz++;
	    }
	    else if(max_sz-min_sz>1)
	    {
	        int x=maxheap.top();
	        maxheap.pop();
	        minheap.push(x);
	        max_sz--;
	        min_sz++;
	    }
	    
	    // CALC AND PRINT MEDIAN
	    
	    if(maxheap.size() > minheap.size())
	    {
	        cur_med=maxheap.top();
	    }
	    else if(minheap.size()>maxheap.size())
	    {
	        cur_med=minheap.top();
	    }
	    else
	    {
	        cur_med=(minheap.top()+maxheap.top())/2;
	    }
	 
	    cout<<cur_med<<endl;
	    
	}
	return 0;
}

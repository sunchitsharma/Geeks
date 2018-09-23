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
	    vector<pair<int,int>>brr;
	    brr.push_back(make_pair(arr[0],arr[0]));
	    for(int i=1;i<n;++i)
	    {
	            brr.push_back(make_pair(arr[i],arr[i]));
	            for(int j=i-1;j>=0;j--)
	            {
	                if(brr[j].first<arr[i] && brr[j].second+arr[i]>brr[i].second)
	                {
	                    brr[i]=(make_pair(arr[i],arr[i]+brr[j].second));
	                }
	            }
	    }
	    int max=-9999999;
	    for(int i=0;i<n;i++)
	    {
	        //cout<<brr[i].first<<"::"<<brr[i].second<<" ";
	        if(brr[i].second>max)max=brr[i].second;
	    }
	    cout<<max<<endl;
	    
	}
	return 0;
}

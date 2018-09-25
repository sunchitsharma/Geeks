#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>fa;

bool check_pos(int arr[11][11],int row,int col,int n)
{
    for(int i=0;i<col;++i)
    {
        if(arr[row][i]==1)return false;
    }
    int j;
    for(int i=row, j=col ; i!=-1&&j!=-1 ; i--,j--)
    {
        if(arr[i][j]==1)return false;
    }
    for(int i=row, j=col ; j!=-1&&i!=n ; i++,j--)
    {
        if(arr[i][j]==1)return false;
    }
    return true;
}

void print_nq(int arr[11][11],int n)
{
    vector<int>temp;
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]==1)
            temp.push_back(j+1);
        }
    }
    fa.push_back(temp);
}

bool nqp(int arr[11][11],int col,int n)
{
    if(col==n)
    {
        print_nq(arr,n);
        return true;
    }
    bool resp = false;
    for(int i=0;i<n;++i)
    {
        if(check_pos(arr,i,col,n))
        {
            arr[i][col]=1; // set
            
            resp = nqp(arr,col+1,n) || resp;
            
            arr[i][col]=0; // unset to backtrack 
        }
        
    }
    return resp;
}

void N_Queens(int n)
{
    fa.clear();
    int m[11][11];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            m[i][j]=0;
        }
    }
    if(!nqp(m,0,n))
        cout<<"-1";
    else
    {
        sort(fa.begin(),fa.end());
        for(int i=0;i<fa.size();i++)
        {
            cout<<"[";
            for(int j=0;j<fa[i].size();j++)
            {
                cout<<fa[i][j]<<" ";
            }
            cout<<"] "; 
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        N_Queens(n);
        cout<<endl;
    }
}

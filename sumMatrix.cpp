#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> sumMatrix(vector<vector<int>> &m1, vector<vector<int>> &m2, int i, int j)
{
  if(i==m1.size())
    {
        return m1;
    }

    if(j==m1[0].size())
    {
       
       return sumMatrix(m1,m2,i+1,0);
    }
    

    m1[i][j]+=m2[i][j];
   return sumMatrix(m1,m2,i,j+1);

}
int main()
{
    
    int n,m;
    cin>>n>>m;
    vector<vector<int>> m1(n,vector<int>(m));
    vector<vector<int>> m2(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>m1[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>m2[i][j];
        }
    }
    vector<vector<int>> ans=sumMatrix(m1,m2,0,0);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
}
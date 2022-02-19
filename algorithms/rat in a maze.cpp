#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<queue>
#include<stack>
#include<math.h>
#include<set>

using namespace std;

vector<string> ans;
void findRoutes(vector<vector<int>> path, int n,int i,int j,string s,vector<vector<int>> vis)
{
    if(path[i][j]==0)
    {
        return;
    }
    if(i==n-1 && j==n-1)
    {
        ans.push_back(s);//if we reach the end just push the path to ans
        return;
    }
    if(i<n-1 && path[i+1][j]==1 && vis[i+1][j]==0)//checking whether we can go down or not
    {
        vis[i][j]=1;//mark visited
        s=s+'D';//add string to path
        findRoutes(path,n,i+1,j,s,vis);// call further recursion
        s.pop_back();//once after coming back from recursion just  pop out that
        vis[i][j]=0;//once came back just unmark the visited one
    }
    if(j>0 && path[i][j-1]==1 && vis[i][j-1]==0)//above rules applied for all other directions
    {
        vis[i][j]=1;
        s=s+'L';
        findRoutes(path,n,i,j-1,s,vis);
        s.pop_back();
        vis[i][j]=0;
    }
    if(j<n-1 && path[i][j+1]==1 && vis[i][j+1]==0)
    {
        vis[i][j]=1;
        s=s+'R';
        findRoutes(path,n,i,j+1,s,vis);
        s.pop_back();
        vis[i][j]=0;
    }
    if(i>0 && path[i-1][j]==1 && vis[i-1][j]==0)
    {
        vis[i][j]=1;
        s=s+'U';
        findRoutes(path,n,i-1,j,s,vis);
        s.pop_back();
        vis[i][j]=0;
    }
    return;
}
vector<string> findPath(vector<vector<int>> &path, int n) {
    // Your code goes here
    vector<vector<int>> vis(n,vector<int> (n, 0));
    findRoutes(path,n,0,0,"",vis);
    return ans;
}

int32_t main() {


}

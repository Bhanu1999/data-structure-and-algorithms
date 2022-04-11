#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<queue>
#include<stack>
#include<math.h>
#include<set>

using namespace std;

void print(int a[], int n) {

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void print(vector<int> a) {
    int n = a.size();
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
    k=k%(grid[0].size()*grid.size());
    vector<int> temp;
    for(int i=0;i<grid.size();i++)
    {
        for(int j=0;j<grid[0].size();j++)
        {
            temp.push_back(grid[i][j]);
        }
    }
    int p=grid.size()*grid[0].size()-k;
    vector<vector<int>> ans(grid.size(),vector<int>(grid[0].size()));
    for(int i=0;i<grid.size();i++)
    {
        for(int j=0;j<grid[0].size();j++)
        {
            if(p==grid.size()*grid[0].size())
            {
                p=0;
            }
            ans[i][j]=temp[p];
            p++;
        }
    }
    return ans;




}
int32_t main() {


}

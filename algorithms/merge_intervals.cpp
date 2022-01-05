#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<queue>
#include<stack>
#include<math.h>
#include<set>
#include <algorithm>

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
vector<vector<int>> merge(vector<vector<int>>& v) {
    sort(v.begin(),v.end());
    vector<vector<int>> ans;
    ans.push_back(v[0]);
    for(int i=1;i<v.size();i++)
    {
        if(ans[ans.size()-1][1]>v[i][0])
        {ans[ans.size()-1][1]=max(v[i][1],ans[ans.size()-1][1]);

        }
        else
        {
            ans.push_back(v[i]);
        }//
    }
    return ans;}
int32_t main() {
    vector<vector<int>> v{{1,3},{2,6},{8,10}};

    vector<vector<int>> ans=merge(v);
    for(int i=0;i<ans.size();i++)
    {
        print(ans[i]);
    }


}

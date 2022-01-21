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

int32_t main() {
    vector<string> strs={"eat","tea","tan","ate","nat","bat"};
    unordered_map<string,vector<string>> ele;
    for(int i=0;i<strs.size();i++)
    {
        string s=strs[i];
        sort(s.begin(),s.end());
        ele[s].push_back(strs[i]);
    }
    vector<vector<string>> ans;
    for(auto i:ele)
    {
        ans.push_back(i.second);//
    }
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)//
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<queue>
#include<stack>
#include<math.h>
#include<set>

using namespace std;
vector<vector<int>> ans;
set<vector<int>> ans1;
int target=7;
int count=0;
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
void combination_sum(vector<int> v,vector<int> temp,int req_sum,int i){
    count++;
    if(i==v.size() || req_sum<0)
    {
        return;
    }
    if(req_sum==0)
    {
//        ans1.insert(temp);
        ans.push_back(temp);
        return;
    }
    combination_sum(v,temp,req_sum,i+1);
    temp.push_back(v[i]);
    combination_sum(v,temp,req_sum-v[i],i);
    return;

}
int32_t main() {
    vector<int> v{2,3,6,7};
    int req_sum=7;
    vector<int> temp;
    combination_sum(v,temp,req_sum,0);
    for(auto i:ans1)
    {
        ans.push_back(i);
    }
    for(int i=0;i<ans.size();i++)
    {
        print(ans[i]);
    }
    cout<<count;


}

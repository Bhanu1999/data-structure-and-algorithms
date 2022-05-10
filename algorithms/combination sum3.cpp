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
vector<vector<int>> ans;
int sum(vector<int> v)
{
    int sum=0;
    for(int i=0;i<v.size();i++)
    {
        sum+=v[i];
    }
    return sum;
}
void helper(int k,int n,vector<int> v,vector<int> arr,int i)
{

    if(v.size()==k)
    {
        if(sum(v)==n)
        {
            ans.push_back(v);
        }
        return;
    }    if(i==arr.size())
    {
        return;
    }
 v.push_back(arr[i]);
    helper(k,n,v,arr,i+1);
    v.pop_back();
    helper(k,n,v,arr,i+1);

    return;

}
vector<vector<int>> combinationSum3(int k, int n) {
    vector<int> v;
    vector<int> arr{1,2,3,4,5,6,7,8,9};
    helper(k,n,v,arr,0);
    return ans;
}
int32_t main() {

combinationSum3(9,45);
}

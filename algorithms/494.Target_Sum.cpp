#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<queue>
#include<stack>
#include<math.h>
#include<set>

using namespace std;
int ans=0;
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

void findCombinations(int n,vector<int> v,int target,vector<int> arr)
{
    if(v.size()==n)
    {
        count++;
        int temp=0;
//        print(v);
        for(int i=0;i<v.size();i++)
        {
            count++;
            if(v[i]==0)
            {
                temp=temp+(-1*(arr[i]));
            }
            else
            {
                temp+=arr[i];
            }
        }
        if(temp==target)
        {
            ans++;
        }
        return;
    }
    v.push_back(0);
    findCombinations(n,v,target,arr);
    v.pop_back();
    v.push_back(1);
    findCombinations(n,v,target,arr);
    v.pop_back();
    return;
}
int32_t main() {
    vector<int> v;
    vector<int> arr{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1};
    findCombinations(arr.size(),v,1,arr);
    cout<<count<<endl;
    cout<<ans;

}

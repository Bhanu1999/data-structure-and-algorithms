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

int32_t main() {
    vector<int> v{1,2,3,4};
    vector<int> ans(v.size());

    ans[v.size()-1]=v[v.size()-1];
    for(int i=v.size()-2;i>=0;i--)
    {
        ans[i]=v[i]*ans[i+1];
    }
    for(int i=1;i<v.size();i++)
    {
        v[i]*=v[i-1];
    }

    int left=v[0];
    for(int i=0;i<v.size();i++)
    {
        if(i==0)
        {
            v[i]=ans[i+1];
            continue;
        }
        if(i==v.size()-1)
        {
            v[i]=left;
            continue;
        }
        int temp=v[i];
        v[i]=ans[i+1]*left;
        left=temp;

    }
   print(v);

}

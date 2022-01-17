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
    vector<int> v{2,3,-2,4};//
    int ans=v[0];
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        ans=max(ans,v[i]);
    }
    int min_ans=1;
    int max_ans=1;
    for(int i=0;i<n;i++)
    {
        if(v[i]==0)
        {
            min_ans=1;//
            max_ans=1;
            continue;
        }
        else
        {
            int temp=max_ans;
            max_ans=max(max_ans*v[i],max(min_ans*v[i],v[i]));
            min_ans=min(min_ans*v[i],min(temp*v[i],v[i]));

        }
        ans=max(ans,max_ans);
    }

    return ans;

}

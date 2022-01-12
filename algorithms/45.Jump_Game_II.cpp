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
vector<int> v{2,3,1,1,4};
    int n=v.size();
    vector<long> dp(n,INT_MAX);
    dp[0]=0;
    for(int i=0;i<n-1;i++)
    {
        int a=v[i];
        int j=i+1;
        a+=i;
        while(j<n && j<=a)
        {
            dp[j]=min(1+dp[i],dp[j]);
            j++;
        }

    }
    return dp[n-1];


}

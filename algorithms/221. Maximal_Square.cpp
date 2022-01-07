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
    vector<vector<int>>  v{};
    int m=v.size();
    int dp[m][v[0].size()];
    for(int i=0;i<v.size();i++) {
        for (int j = 0; j < v[0].size(); j++) {
            dp[i][j] = 0;
        }
    }
    int largest=0;
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[0].size();j++)
        {
            largest=max(largest,v[i][j]);
            if(i==0 || j==0)
            {
                dp[i][j]=v[i][j];
                continue;
            }
            if(v[i][j]==1) {
                dp[i][j]=1+min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1]));
            }
            if(dp[i][j]>largest)
            {
                largest=dp[i][j];
            }


        }
    }
    cout<<largest*largest;
}

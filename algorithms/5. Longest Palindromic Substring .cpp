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
string longestPalindrome(string s) {
    int dp[s.size()][s.size()];
    for(int i=0;i<s.size();i++)
    {
        for(int j=0;j<s.size();j++)
        {
            if(i==j)
            {
                dp[i][j]=1;
            }
            else
            {
                dp[i][j]=0;//
            }
        }
    }
    int ans=1;
    int fi=0;
    int fj=0;
    int n=s.size()-1;
    for(int i=n;i>=0;i--)
    {
        for(int j=n;j!=i;j--)
        {
            if(s[i]==s[j])
            {
                dp[i][j]=2+dp[i+1][j-1];
                if(dp[i][j]>ans)
                {//
                    ans=dp[i][j];
                    fi=i;
                    fj=j;
                }
            }

        }
    }

    return s.substr(fi,fj-fi+1);


}
int32_t main() {

longestPalindrome("aacabdkacaa");
}

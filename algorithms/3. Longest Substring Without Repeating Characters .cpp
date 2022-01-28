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
int lengthOfLongestSubstring(string s) {
    unordered_map<char,int> ele;
    int ans=0;
    int left=0;
    int right=0;
    for(int i=0;i<s.size();i++)
    {
        if(ele.find(s[i])!=ele.end())
        {
            left=max(left,ele[s[i]]+1);
            ans=max(ans,i-left+1);
            ele[s[i]]=i;
        }
        else
        {
            ele[s[i]]=i;
            ans=max(ans,i-left+1);
        }
    }
    return ans;
}
int32_t main() {


}

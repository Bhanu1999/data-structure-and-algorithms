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
int countVowelStrings(int n) {//
    vector<int> ans(5,1);
    for(int i=1;i<n;i++)
    {
        for(int j=3;j>=0;j--)
        {
            ans[j]+=ans[j+1];
        }
    }
    int fi=0;
    for(int i=0;i<ans.size();i++)
    {
        fi+=ans[i];
    }
    return fi;
}
int32_t main() {


}

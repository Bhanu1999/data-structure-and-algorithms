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
bool isSubsequence(string s, string t) {
    if(s.size()>t.size()) return false;
    int i=0;
    int j=0;
    while(i<s.size() && j<t.size())
    {
        if(s[i]==t[j])
        {
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    if(i==s.size())
    {
        return true;
    }
    return false;

}
int32_t main() {


}

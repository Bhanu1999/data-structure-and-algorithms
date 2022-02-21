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
    cout << endl;//
}
string getPermutation(int n, int k) {
    string s="";
    int dum=0;
    char c='1';
    while(dum!=n)
    {
        s+=c;
        c++;
        dum++;
    }
    string f=s;
    int tar=0;
    while(tar<k-1)
    {
        next_permutation(s.begin(),s.end());
        // cout<<s<<endl;
        tar++;
    }
    return s;
}
int32_t main() {


}

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
bool is_valid(string s,int i,int j)
{

    while(i<j)
    {
        if(s[i]!=s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
bool validPalindrome(string s) {//
    int i=0;
    int j=s.size()-1;
    while(i<j)
    {
        if(s[i]!=s[j])
        {
            return is_valid(s,i,j-1)|| is_valid(s,i+1,j);
        }
        i++;
        j--;
    }
    return true;
}
int32_t main() {


}

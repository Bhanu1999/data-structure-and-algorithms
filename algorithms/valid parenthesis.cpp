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
bool isValid(string s) {
    stack<char> s1;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='[' || s[i]=='{' || s[i]=='(')
        {
            s1.push(s[i]);
        }
        else if(s1.size()==0)
        {
            return false;
        }
        else{
            if(s[i]==']' && s1.top()=='[')
            {
                s1.pop();
            }
            else if(s[i]=='}' && s1.top()=='{')
            {
                s1.pop();
            }
            else if(s[i]==')' && s1.top()=='(')
            {
                s1.pop();
            }
            else
            {
                return false;
            }
        }
    }
    return s1.empty();
}
int32_t main() {


}

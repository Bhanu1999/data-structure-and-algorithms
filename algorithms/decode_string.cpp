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

void print(vector<int> a) {//
    int n = a.size();
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";//
    }
    cout << endl;
}

int32_t main() {
    string s="3[a]2[bc]";//
    stack<string> s1;
    for(int i=0;i<s.size();i++)
    {//
        if(s[i]==']')
        {
            string temp="";
            while(s1.top()!="[")
            {
                temp=s1.top()+temp;
                s1.pop();
            }
            s1.pop();
            string n="";
            while(s1.size()>0 && s1.top()>="0" &&s1.top()<="9")
            {
                n=s1.top()+n;
                s1.pop();
            }
            int k=stoi(n);
            string req="";
            while(k>0)
            {
                req=req+temp;
                k--;
            }
            s1.push(req);

        }
        else
        {
            string t="";
            t+=s[i];
            s1.push(t);
        }
    }
    string ans="";
    while(s1.size()>0)
    {
        ans=s1.top()+ ans;
        s1.pop();
    }
    cout<<ans;

}

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
string simplifyPath(string s) {
    stack<string> s1;
    int n=s.size();
    string temp="";
    int i=0;
    while(i<n)
    {
        if(s[i]=='/')
        {
            i++;
            continue;
        }
        if(s[i]=='.')
        {
            string temp2=".";
            int j=i+1;
            while(s[j]=='.')
            {
                temp2=temp2+s[j];
                j++;
            }
            if(temp2==".")
            {
                i++;
                continue;
            }
            else if(temp2=="..")
            {
                if(s1.size()>0)
                {
                    s1.pop();
                }
                i=j;
                continue;
            }
            else{
                s1.push(temp2);
                i=j;
                continue;
            }
        }
        else
        {
            int j=i;
            string temp2="";
            while(s[j]<='z' && s[j]>='a')
            {
                temp2+=s[j];
                j++;
            }
            s1.push(temp2);
            i=j+1;
        }
    }
    string ans="";
    while(s1.size()>0)
    {
        ans='/'+s1.top()+ans;
        s1.pop();
    }
    return ans;
}
int32_t main() {
cout<<simplifyPath("/home//foo/");

}

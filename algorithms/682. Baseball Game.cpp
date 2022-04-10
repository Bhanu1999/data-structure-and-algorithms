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
int calPoints(vector<string>& ops) {
    stack<int> s;
    for(int i=0;i<ops.size();i++)
    {
        if(ops[i]=="+")
        {
            int a=s.top();
            s.pop();
            int b=s.top();
            s.push(a);
            s.push(a+b);
        }
        else if(ops[i]=="D")
        {
            int a=s.top();
            s.push(a*2);
        }
        else if(ops[i]=="C")
        {

            s.pop();

        }
        else
        {
            s.push(stoi(ops[i]));
        }

    }
    int ans=0;
    while(s.size()>0)
    {
        ans+=s.top();
        s.pop();
    }
    return ans;
}
int32_t main() {


}

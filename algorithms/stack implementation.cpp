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
ic:
queue<int> q1;

MyStack() {

}

void push(int x) {
    queue<int> q2;
    q2=q1;
    q1={};
    q1.push(x);
    while(q2.size()>0)
    {
        q1.push(q2.front());
        q2.pop();
    }
}

int pop() {
    int temp=q1.front();
    q1.pop();
    return temp;
}

int top() {
    return q1.front();
}

bool empty() {
    return q1.size()==0;
}
int32_t main() {


}

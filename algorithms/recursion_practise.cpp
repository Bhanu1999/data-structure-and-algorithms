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
void rev(int* arr,int l,int r)
{
    if(l>=r)
    {

        return;
    }
    swap(arr[l],arr[r]);
    rev(arr,l+1,r-1);
    return;

}
bool palindrome(string s,int i)
{
    if(i>=s.size()/2)
    {
        return true;
    }
    if(s[i]==s[s.size()-1-i])
    {
        return palindrome(s,i+1);
    }
    else
    {
        return false;
    }
}
int fib(int n)
{
    if(n<2)
    {
        return n;
    }
    return fib(n-1)+fib(n-2);
}
void printsub(int *arr,vector<int> v,int i,int n)
{
    if(i==n)
    {
        print(v);
        return;
    }
    printsub(arr,v,i+1,n);
//    v.pop_back();
    v.push_back(arr[i]);

    printsub(arr,v,i+1,n);
    return;

}
int32_t main() {

int arr[3]={1,2,3};
int n=3;
vector<int> v;
int i=0;
printsub(arr,v,i,n);
//cout<<fib(i)<<endl;
}

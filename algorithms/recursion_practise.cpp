#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<queue>
#include<stack>
#include<math.h>
#include<set>

using namespace std;
int k=5;
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
bool check(vector<int> a,int k)
{
    int n = a.size();
    int sum=0;

    for (int i = 0; i < n; i++) {
        sum+=a[i];
    }
    if(sum==k)
    {return true;}
    return false;
}
bool printsub(int *arr,vector<int> v,int i,int n,int sum)
{
    if(i==n || sum<=0)
    {
        if(sum==0){
        print(v);
            return true;}
        return false;

    }
   if( printsub(arr,v,i+1,n,sum))
   {
       return true;
   }
    v.push_back(arr[i]);

    if(printsub(arr,v,i+1,n,sum-arr[i])){//
        return true;
    }
    return false;

}
int32_t main() {

int arr[5]={1,2,3,2};
int n=4;
vector<int> v;
int i=0;
printsub(arr,v,0,n,5);

}

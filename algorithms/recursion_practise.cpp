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
int32_t main() {

int arr[5]={1,2,3,4,5};
int n=5;
string s="boob";
cout<<palindrome(s,0);
//print(arr,n);

rev(arr,0,4);
//    print(arr,n);//

}

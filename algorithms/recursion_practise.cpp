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
void sum1(int i,int n,int arr[],int sum)
{
    if(i==n)
    {
        cout<<sum;
        return;
    }
    sum1(i+1,n,arr,sum+arr[i]);
    return;
}
int32_t main() {

int arr[5]={1,2,3,4,5};
int n=5;
int sum=0;
sum1(0,5,arr,sum);
c
}

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
public int[][] generateMatrix(int n) {
    // const int temp=n;
    int arr[][]=new  int[n][n];
    int start=1;
    int rs=0;
    int re=n-1;
    int cs=0;
    int ce=n-1;
    while(start<=n*n)
    {
        for(int i=cs;i<=ce;i++)
        {
            arr[rs][i]=start;
            start++;
        }
        rs++;
        for(int i=rs;i<=re;i++)
        {
            arr[i][ce]=start;
            start++;
        }
        ce--;
        for(int i=ce;i>=cs;i--)
        {
            arr[re][i]=start;
            start++;
        }
        re--;
        for(int i=re;i>=rs;i--)
        {
            arr[i][cs]=start;
            start++;
        }
        cs++;
    }
    return arr;
}
int32_t main() {


}

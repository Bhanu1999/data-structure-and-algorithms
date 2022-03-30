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
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int i=matrix.size()-1;
    int j=matrix[0].size()-1;
    while(i>=0 && j>=0)
    {
        if(matrix[i][j]==target)
        {
            return true;
        }

        if(i==0)
        {
            j--;
            continue;
        }
        if(j==0)
        {
            i--;
            continue;
        }
        if(matrix[i-1][j]<matrix[i][j-1] && matrix[i-1][j]>=target)
        {
            i--;
        }
        else
        {
            j--;
        }

    }
    return false;
}
int32_t main() {


}

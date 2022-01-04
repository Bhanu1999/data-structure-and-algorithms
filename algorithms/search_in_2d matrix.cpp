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
bool searchMatrix(vector<vector<int>>& v, int target) {
    int r=0;
    int c=v[0].size()-1;//start from right corner
    while(r>-1 && r<v.size() && c>=0 && c<v[0].size())
    {
        if(v[r][c]==target)
        {
            return true;
        }
        else if(v[r][c]<target)
        {
            r++;
        }
        else
        {
            c--;
        }
    }
    return false;}
int32_t main() {

    vector<vector<int>> v;
    int target;
    searchMatrix(v, target);

}

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
int findDuplicate(vector<int>& v) {
    for(int i=0;i<v.size();i++)
    {
        if(v[abs(v[i])-1]<0)
        {
            return abs(v[i]);
        }
        v[abs(v[i])-1]*=(-1);
    }
    return 0;
}

int32_t main() {


}

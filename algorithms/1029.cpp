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
static bool compare(vector<int> a,vector<int> b)
{
    return a[1]-a[0]>b[1]-b[0];
}
int twoCitySchedCost(vector<vector<int>>& costs) {
    int ans=0;
    sort(costs.begin(),costs.end(),compare);
    for(int i=0;i<costs.size();i++)
    {
        if(i<costs.size()/2)
        {
            ans+=costs[i][0];
        }
        else
        {
            ans+=costs[i][1];
        }
    }
    return ans;
}
int32_t main() {


}

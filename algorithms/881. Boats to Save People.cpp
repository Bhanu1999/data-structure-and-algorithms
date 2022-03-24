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
int numRescueBoats(vector<int>& people, int limit) {
    int i=0;
    int j=people.size()-1;
    int ans=0;
    sort(people.begin(),people.end());
    while(i<=j)
    {
        ans++;
        if(people[i]+people[j]<=limit)
        {


            i++;

        }
        j--;
    }
    return ans;
}

int32_t main() {


}

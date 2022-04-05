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
int maxArea(vector<int>& height) {
    int i=0;
    int j=height.size()-1;
    int ans=INT_MIN;
    while(i!=j)
    {
        ans=max(ans,min(height[i],height[j])*abs(j-i));
        if(height[i]>=height[j])
        {
            j--;
        }
        else{
            i++;
        }
    }
    return ans;
}

int32_t main() {


}

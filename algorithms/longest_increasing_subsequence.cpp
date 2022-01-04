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

int32_t main() {
    vector<int> nums{1,2,4,5,2,5};
    vector<int> lis(nums.size(),1);
    for(int i=0;i<nums.size();i++)
    {
        for(int j=0;j<i;j++)
        {
            if(nums[i]>nums[j])
            {
                lis[i]=max(lis[i],1+lis[j]);
            }
        }
    }
    int ans=0;
    for(int i=0;i<lis.size();i++)
    {
        ans=max(ans,lis[i]);
    }
    return ans;


}

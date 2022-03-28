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
bool helper(vector<int>& nums, int target,int low,int high)
{
    if(high<low)
    {
        return false;
    }
    int mid=low+high;
    mid/=2;
    if(nums[mid]==target)
        return true;
    bool x=false;
    bool y=false;
    bool z=false;
    bool a=false;
    if(nums[low]<=nums[mid])
    {
        if(nums[low]<=target && nums[mid]>=target)
        {
            x=helper(nums,target,low,mid-1);
        }
        else
        {
            y=helper(nums,target,mid+1,high);
        }
    }
    if(nums[mid]<=nums[high])
    {
        if(nums[mid]<=target && nums[high]>=target)
        {
            z=helper(nums,target,mid+1,high);
        }
        else
        {
            a=helper(nums,target,low,mid-1);
        }
    }
    return a||z||y||x;
}
bool search(vector<int>& nums, int target) {
    return helper(nums,target,0,nums.size()-1);
}
int32_t main() {


}

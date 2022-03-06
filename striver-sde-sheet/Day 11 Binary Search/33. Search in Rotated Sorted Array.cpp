#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<queue>
#include<stack>
#include<math.h>
#include<set>

using namespace std;
int search(vector<int>& nums, int target) {
    //basic intuition behind this ,when we find a mid element as per our observation atleast there will be one increasing sequence from starting to mid or mid to end
    int left=0;
    int right=nums.size()-1;
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(nums[mid]==target) {return mid;}//if we find our target element
        else if(nums[left]<=nums[mid])//we check whether the left sequence is increasing
        {
            if(target>=nums[left] && target <=nums[mid])//if increasing we check whether our target is in left seq
            {
                right=mid-1;
            }
            else {left=mid+1;}
        }
        else //we check whether the right sequence is increasing
        {
            if(target<=nums[right] && target>=nums[mid])//if yes we check whether our target is in right sequence
            {
                left=mid+1;
            }
            else
            {
                right=mid-1;
            }
        }
    }
    return -1;
}

int32_t main() {


}

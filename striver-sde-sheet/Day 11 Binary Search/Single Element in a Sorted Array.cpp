#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<queue>
#include<stack>
#include<math.h>
#include<set>

using namespace std;

int min(int a,int b)
{
    if(a>b)
    {
        return b;
    }
    return a;
}
int singleNonDuplicate(vector<int>& nums) {
    //in our approch where there is a element which occurs only once the array to left has a property (the first occurance of the element is on even index) and right property (first occurance of each element to right of it has its first index at odd position)
    int low=0;
    int high=nums.size()-1;
    if(nums.size()==1) return nums[0];//if the array size is 1 then it the only element occuring twice
    if(nums[0]!=nums[1])
    {
        return nums[0];//boundary condition if an element is present only once and that too in the beginning
    }
    if(nums[nums.size()-1]!=nums[nums.size()-2]) return nums[nums.size()-1];//boundary condition if an element is present only once and that too in the end
    while(low<=high)
    {
        int mid=(low+high)/2;

        if(nums[mid-1]==nums[mid])//if element and previous are same we are checking whether it is left side or right side
        {
            if(mid%2==1)
            {
                low=mid+1;//if left we move to right
            }
            else
            {
                high=mid-1;//else we move to left
            }
        }
        else if(nums[mid]==nums[mid+1])
        {
            if(mid%2==0)
            {
                low=mid+1;//if left we move to right
            }
            else
            {
                high=mid-1;//move to left
            }
        }
        else
        {
            return nums[mid];//if element at mid not equal to left and right it means it is the only element occuring once so return//
        }

    }
    return 0;
}
int32_t main() {


}

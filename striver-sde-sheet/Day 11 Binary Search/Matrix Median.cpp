#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<queue>
#include<stack>
#include<math.h>
#include<set>

using namespace std;

int counterlessthanN(vector<int> v,int value)
{
    int low=0;
    int high=v.size()-1;
    while(low<=high)// do binary search in an array to find how many integers are lesser or equal to the given value
    {
        int mid=low+high;
        mid/=2;
        if(v[mid]<=value)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return low;//basically we are returning the index of the number which is immediate next to the given value
}
int getMedian(vector<vector<int>> &matrix)
{
    // Write your code here.
    int n=matrix.size();
    int m=matrix[0].size();
    long high=1e5;//start binary search from 1 to 1e5 because we find answer in this range
    long low=1;//start from one
    while(low<=high)//do binary search till we find a break point (break poing is something  we find a median when low crosses high
    {
        int mid=(low+high)/2;
        int cnt=0;//this cnt hold no of integers lesser than mid in the given matrix
        for(int i=0;i<n;i++)
        {
            cnt=cnt+counterlessthanN(matrix[i],mid);//pass an array to a function which return no of integers lesser than or equal to the given number
        }
        if(cnt>(n*m)/2)//if no of integers lesser or equal to mid it mean we need to move pointer to left
        {
            high=mid-1;
        }
        else{
            low=mid+1;//else right
        }
    }
    return low;//return the break point
}
int32_t main() {
vector<vector<int>> v={{2,6,9},{1,5,11},{3,7,8}};
cout<<getMedian(v);

}

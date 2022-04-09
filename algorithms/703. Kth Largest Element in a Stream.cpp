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
priority_queue <int, vector<int>, greater<int> > pq;
KthLargest(int k, vector<int>& nums) {
    for(int i=0;i<nums.size();i++)
    {
        if(pq.size()==k)
        {
            if(pq.top()<nums[i])
            {
                pq.pop();
                pq.push(nums[i]);
            }
        }
        else
        {
            pq.push(nums[i]);
        }
    }
    int mini=(-10001);
    if(pq.size()<k)
    {
        while(pq.size()!=k)
        {
            pq.push(mini);
        }
    }//comment
}

int add(int val) {

    if(pq.top()<val)
    {
        pq.pop();
        pq.push(val);
    }
    return pq.top();

}
int32_t main() {


}

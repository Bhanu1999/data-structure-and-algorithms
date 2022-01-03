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
    vector<int> nums{0,3,7,2,5,8,4,6,0,1};
    int count=0;
    unordered_map<int,int> ele;
    for(int i=0;i<nums.size();i++)
    {
        ele[nums[i]]++;
    }
    int ans=0;
    for(auto i:ele)
    {
        count++;
        int temp_ans=1;
        int cur=i.first;
        int next=cur+1;
        int prev=cur-1;
        while(1)
        {
            if(ele.find(next)==ele.end())
            {
                break;
            }
            count++;
            temp_ans++;
            ele.erase(next);
            next++;
        }
        while(1)
        {
            if(ele.find(prev)==ele.end())
            {
                break;
            }
            count++;
            temp_ans++;
            ele.erase(prev);
            prev--;
        }
        ans=max(ans,temp_ans);
    }
    cout<<ans<<endl;
    cout<<count<<endl;

}

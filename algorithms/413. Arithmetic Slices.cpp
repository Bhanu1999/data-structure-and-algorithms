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
int numberOfArithmeticSlices(vector<int>& nums) {
    vector<int> diff;
    for(int i=1;i<nums.size();i++)
    {
        diff.push_back(nums[i]-nums[i-1]);
    }
    int value=1;
    int ans=0;
    for(int i=1;i<diff.size();i++)
    {
        if(diff[i]==diff[i-1])
        {
            value++;
        }
        else
        {
            value--;
//            cout<<value<<endl;
            ans=ans+(value*(value+1))/2;
            value=1;
        }
    }
    if(value>1){value--;ans=ans+(value*(value+1))/2;}
    cout<<value-1<<endl;
    return ans;
}
int32_t main() {
vector<int> v{1,2,3};

    cout<<numberOfArithmeticSlices(v);
}

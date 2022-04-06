#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<queue>
#include<stack>
#include<math.h>
#include<set>
#include<algorithm>

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

int threeSumMulti(vector<int>& arr, int target) {
    int ans=0;

    for(int i=0;i<arr.size();i++)
    {
        int count[101]={0};
        for(int j=i+1;j<arr.size();j++)
        {

            int temp=target-arr[i]-arr[j];
            if(temp>=0 && temp<=100 && count[temp]>0)
            {
                ans=ans+count[temp];
                ans%=(1000000007);
            }
            count[arr[j]]++;
        }
    }
    return ans;
}
int32_t main() {
    vector<int> v{1,1,2,2,3,3,4,4,5,5};
cout<<threeSumMulti(v,8);

}

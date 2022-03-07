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
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int a=nums1.size()+nums2.size();
    int b=a/2;
    int i=0;
    int j=0;
    vector<int> ans;
    while(1)
    {
        if(i==nums1.size() ||j==nums2.size()) break;
        if(nums1[i]<nums2[j])
        {
            ans.push_back(nums1[i]);
            i++;
        }
        else
        {
            ans.push_back(nums2[j]);
            j++;
        }

    }
    while(i!=nums1.size())
    {
        ans.push_back(nums1[i]);
        i++;
    }


    while(j!=nums2.size())
    {
        ans.push_back(nums2[j]);
        j++;
    }

    if(ans.size()%2==0)
    {
        double ans1=ans[ans.size()/2]+ans[(ans.size()/2)-1];
        ans1/=2;
        return ans1;
    }
    else{
        double ans1=ans[(ans.size()/2)];
        return ans1;
    }
    return 1.0000;
}
int32_t main() {


}

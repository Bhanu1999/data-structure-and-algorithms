#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<queue>
#include<stack>
#include<math.h>
#include<set>

using namespace std;
#define int long long
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

long long calc(long long a,long long b1)
{
    if(b1==0) return 0;
    long long b=a+b1-1;
    long long ret=b*(b+1)/2;
    ret=ret-a*(a-1)/2;
    return ret;
}
long long min(long long a,long long b)
{
    if(a<b)
    {
        return a;
    }
    return b;
}
long long max(long long a,long long b)
{
    if(a>b)
    {
        return a;
    }
    return b;
}
long long minimalKSum(vector<int>& nums, int k) {
    map<int,int> ele;
    long long mini=nums[0];
    for(int i=0;i<nums.size();i++){
        if(nums[i]<mini){
            mini=nums[i];
        }
        ele[nums[i]]++;}
    long long ans=0;
    for(auto i=ele.begin();i!=ele.end();i++)
    {
        if(k==0) break;
        if(i->first==mini)
        {
            auto iter=ele.begin();
            int temp=max(0,min((iter->first)-1,k));
            ans+=calc(1,temp);
            k-=(max(0,min(i->first-1,k)));

        }
        else
        {
            auto it=i;
            auto it1=it;
            it1--;
            ans+=calc(it1->first+1,min(k,it->first-it1->first-1));
            k-=min(k,it->first-it1->first-1);
        }
    }
    if(k>0)
    {
        auto it=ele.end();
        it--;
        ans+=(calc(it->first+1,k));
    }
    return ans;
}
int32_t main() {
    vector<long long > v{5,6};
cout<<minimalKSum(v,6);
}

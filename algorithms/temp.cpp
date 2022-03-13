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
vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
    vector<int> ans;
    map<int,int> ele;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==key)
        {
            ele[i]=1;
        }
    }
    auto it=ele.begin();
    auto it1=ele.begin();
    it1++;
    for(int i=0;i<nums.size();i++)
    {
        if(it!=ele.end())
        {
            if(it1!=ele.end())
            {
                int temp1=abs(it->first-i);
                int temp2=abs(it1->first-i);
                if(abs(it->first-i)<=abs(it1->first-i))
                {
                    if(abs(it->first-i)<=k)
                    {
                        ans.push_back(i);
                    }

                }
                else if(abs(it->first-i)>abs(it1->first-i))
                {
                    if(abs(it1->first-i)<=k)
                    {
                        ans.push_back(i);
                    }
                    it=it1;
                    it1++;
                }
            }
            else
            {
                if(abs(it->first-i)<=k)
                {
                    ans.push_back(i);
                }
            }
        }

    }
    return ans;
}  int digArtifacts(int n, vector<vector<int>>& artifacts, vector<vector<int>>& dig) {
    const int b=n;
    int arr[2][2]={-1};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[i][j]=-1;
        }
    }
    int counter=1;
    for(int i=0;i<artifacts.size();i++)
    {
        vector<int> temp=artifacts[i];
        for(int j=temp[0];j<=temp[2];j++)
        {
            for(int k=temp[1];k<=temp[3];k++)
            {
                arr[j][k]=counter;
            }
        }
        counter++;
    }
    for(int i=0;i<2;i++)
    {
        print(arr[i],2);
    }
    for(int i=0;i<dig.size();i++)
    {
        arr[dig[i][0]][dig[i][1]]=-1;
    }
    unordered_map<int,int> ele;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]!=-1)
            {
                ele[arr[i][j]]++;
            }
        }
    }

    return counter-ele.size()-1;

}
int maximumTop(vector<int>& nums, int k) {
    map<int,vector<int>> ele;
    for(int i=nums.size()-1;i>=0;i--)
    {
        ele[nums[i]].push_back(i);
    }
    auto it=ele.end();
    it--;
    while(1)
    {
        vector<int> temp=it->second;
        for(int i=0;i<temp.size();i++)
        {
            if(temp[i]>k)
            {
                continue;
            }
            else if(temp[i]<k)
            {
                return it->first;
            }
        }

        if(it==ele.begin())
        {
            break;
        }
        it--;

    }
    return -1;
}
int32_t main() {
   vector<int> v{2};
    cout<<maximumTop(v,1);
}

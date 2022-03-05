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

vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
    int time=0;
    unordered_map<int,int> mapi;
    map<int,vector<int>> actual_value;
    for(int i=0;i<mapping.size();i++)
    {
        mapi[i]=mapping[i];
    }
    vector<int> result;
    for(int i=0;i<nums.size();i++)
    {
        int temp=nums[i];
        string s=to_string(temp);
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            char c=s[i];
            int temp1=c-'0';
            string a=to_string(mapi[temp1]);
            ans=ans+a;
            time++;
        }
        actual_value[stoi(ans)].push_back(nums[i]);


    }
    cout<<time<<endl;
    for(auto i:actual_value)
    {
        vector<int> temp=i.second;
        for(int j=0;j<temp.size();j++)
        {
            result.push_back(temp[j]);
        }
    }

    return result;}

int32_t main() {
    vector<int> v{8,9,4,0,2,1,3,5,7,6};
    vector<int> n(30000,123456789);
//    print(sortJumbled(v, n));
}

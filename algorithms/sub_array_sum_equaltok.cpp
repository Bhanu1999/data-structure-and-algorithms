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
vector<int> v{1,-1,0};
    unordered_map<int,int> ele;
    int k=0;
    int count=0;
    int sum=0;

    for(int i=0;i<v.size();i++)
    {
        sum+=v[i];

        if(sum==k)
        {
            count+=1;
        }
        if(ele.find(sum-k)!=ele.end())
        {
            count=count+ele[sum-k];
        }
        ele[sum]+=1;
    }
cout<<count;

}

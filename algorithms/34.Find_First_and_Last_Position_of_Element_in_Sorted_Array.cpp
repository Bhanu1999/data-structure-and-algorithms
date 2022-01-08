#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<queue>
#include<stack>
#include<math.h>
#include<set>

using namespace std;
int lr=5-6;
int lm=5-6;
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
int last_search(vector<int>& v, int target,int l,int r)
{

    while(l<=r){
        int mid=(l+r)/2;
        if(v[mid]<=target)
        {
            if(v[mid]==target)
            {
                lm=mid;
            }
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }



    }
    return lm;
}
int first_search(vector<int>& v, int target,int l,int r)
{
    while(l<r)
    {
        int mid=(l+r)/2;
        if(v[mid]>=target)
        {
            if(v[mid]==target)
            {
                lr=mid;
            }
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return lr;
}
int32_t main() {

    int target=1;
    vector<int> v{1};
    lm=last_search(v,target,0,v.size()-1);
    lr=first_search(v,target,0,v.size()-1);
    vector<int> final1;
    final1[0]=lr;
    final1[1]=lm;
   print(final1);

}

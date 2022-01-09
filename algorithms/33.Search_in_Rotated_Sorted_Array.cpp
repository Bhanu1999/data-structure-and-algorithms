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
    vector<int> v{1,2,3,4,5,0};
    int target=3;
    int l=0;
    int r=v.size()-1;
    int mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(v[mid]==target)
        {
            return mid;
        }
        else if(v[l]<=v[mid])
        {
            if(v[l]<=target && target<=v[mid])
            {
                r=mid-1;
            }else
            {
                l=mid+1;
            }
        }
        else
        {
            if(v[mid]<=target && target<=v[r])
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }

    }
    return -1;
//
}

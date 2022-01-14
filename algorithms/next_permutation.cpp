#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<queue>
#include<stack>
#include<math.h>
#include<set>
#include <algorithm>

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
vector<int> v{1,2,3,5};

    int n=v.size();
    int ind1=n-1;
    int i=ind1;
    while(i>0)
    {
        if(v[i]>v[i-1])
        {
            ind1=i-1;
            break;
        }
        i--;
    }
    if(i==0)
    {
        reverse(v.begin(),v.end());
        return 0;
    }
    int ind2=n-1;
    int a=v[ind1];
    while(ind2>=0)
    {
        if(v[ind2]>a)
        {
            break;
        }
        ind2--;

    }
    swap(v[ind1],v[ind2]);
    reverse(v.begin()+ind1+1,v.end());


}

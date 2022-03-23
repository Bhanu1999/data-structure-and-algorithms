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
public int brokenCalc(int x, int y) {
    if(x>=y)
    {
        return x-y;//if target is lesser than current we need to minus 1 that till we reach the target
    }
    if(y%2==0)//check we whether we can break that number into half so that we can reach the cur from target faster
    {
        return 1+brokenCalc(x,y/2);
    }
    else
    {
        return 1+brokenCalc(x,y+1);//make that number even so that we can break that and reach easily
    }
}
int32_t main() {


}

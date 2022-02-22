#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<queue>
#include<stack>
#include<math.h>
#include<set>
using namespace std;
double multiply(double number, int n) {
    double ans = 1.0;
    for(int i = 1;i<=n;i++) {
        ans = ans * number;
    }
    return ans;
}
double findNthRootOfM(int n,double m) {
    // Write your code here.
    double low=1;//initialize low as 1 and high as 'm'because we know answer lies somewhere b/w 1 and m
    double high=m;
    double precision=1e-7;//this is because we need to find precised ans upto 6 decimal places
    while(high-low>precision)//narrow range till we receive a very small range
    {
        double mid=(low+high)/2.0;
        double temp=multiply(mid,n);//caluclate n *mid so that we can know whether to decrease or increase the range
        if(temp>=m)
        {
            high=mid;//decrease range by decreasing high
        }
        else{
            low=mid;//decrease range by increasing low
        }
    }
    return low;

}
int32_t main() {
cout<<findNthRootOfM(2.0,16.0);

}

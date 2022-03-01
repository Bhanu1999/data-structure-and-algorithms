#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<queue>
#include<stack>
#include<math.h>
#include<set>

using namespace std;

vector<int> ans;
vector<int> countBits(int n) {
    for(int i=0;i<=n;i++){
        int temp=i;
        int push=0;
        while(temp>0)
        {
            if(temp%2==1)
            {
                push++;
            }
            temp/=2;
        }
        ans.push_back(push);
    }
    return ans;
}

int32_t main() {


}

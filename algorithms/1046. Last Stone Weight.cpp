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
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int i=0;i<stones.size();i++)
        {
            pq.push(stones[i]);
        }
        while(pq.size()>0)
        {
            if(pq.size()==1)
            {
                return pq.top();
            }
            int k1=pq.top();
            pq.pop();
            int k2=pq.top() ;
            pq.pop();
            if(k1==k2)
            {
                continue;
            }
            else
            {
                pq.push(max(k1-k2,k2-k1));
            }
        }
        return 0;
    }
};
int32_t main() {


}

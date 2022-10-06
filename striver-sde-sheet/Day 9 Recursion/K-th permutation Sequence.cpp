#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<queue>
#include<stack>
#include<math.h>
#include<set>

using namespace std;

string getPermutation(int n, int k) {
    vector<int> nums;
    int fact=1;
    for(int i=1;i<n;i++)
    {
        fact*=i;//caluclate (n-1) factorial
        nums.push_back(i);//push all numbers from 1-n into that vector
    }
    nums.push_back(n);
    string ans="";
    k--;//we are using 0 based indexing so for finding 17th permutation we need to find 16th one
    while(true)//
    {
        ans=ans+to_string(nums[k/fact]);//add string at that position
        nums.erase(nums.begin()+(k/fact));//after adding particular character remove that one from list
        if(nums.size()==0) break;
        k=k%fact;/*after adding that character k gets reduced ,for example for 4!=24 we need to find 17th             permutation we will search that in sub groups of 6 and then after fixing one character we need to             find in subgroups of 2 then in 1 and so on.*/

        fact=fact/nums.size();/*reduce that factorial because initially we have 3! in our hand while searching for sub groups of 6 then we have 2! while searching in groups and so on*/
    }
    return ans;//

}
int32_t main() {


}

#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<queue>
#include<stack>
#include<math.h>
#include<set>

using namespace std;

vector<vector<string>> ans;
void findPartitions(string s,int ind,vector<string> temp)
{
    if(ind==s.size())
    {
        ans.push_back(temp);
        return;
    }
    for(int i=ind;i<s.size();i++)
    {
        if(is(s.substr(ind,i-ind+1)))
        {
            temp.push_back(s.substr(ind,i-ind+1));
            findPartitions(s,i+1,temp);//
            temp.pop_back();
        }
    }
    return;
}
bool is(string s)
{
    int i=0;
    int j=s.size()-1;
    while(i<j)
    {
        if(s[i]!=s[j])
            return false;
        i++;
        j--;
    }
    return true;
}
vector<vector<string>> partition(string s) {
    vector<string> temp;
    findPartitions(s,0,temp);
    return ans;
}

int32_t main() {


}

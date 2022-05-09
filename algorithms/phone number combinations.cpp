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
vector<vector<char>> combos{{},{},{'a','b','c'},{'d','e','f'},{'g','h','i'},{'j','k','l'},{'m','n','o'},{'p','q','r','s'},{'t','u','v'},{'w','x','y','z'}};
vector<string> letterCombinations(string digits) {
    vector<string> ans;

    for(int i=0;i<digits.size();i++)
    {
        vector<char> letters;
        if(ans.size()==0)
        {
            ans.push_back("");
        }
        letters=combos[digits[i]-'0'];
        vector<string> newans;
        for(int k=0;k<ans.size();k++){
            for(int j=0;j<letters.size();j++)
            {
                newans.push_back(ans[k]+letters[j]);
            }

        }

        ans=newans;
        if(ans.size()==letters.size()+1)
        {
            ans.erase(ans.begin());
        }
    }
    return ans;
}

int32_t main() {

    vector<string> ans=letterCombinations("23");
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i];
    }
}

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
    string s="bhanahanahanahan";
    int count=s.size();
    int n=s.size();
    for(int i=1;i<n-1;i++)
    {
        int j=i-1;
        int k=i+1;
        while(j>=0 && k<n && s[j]==s[k])
        {
            j--;
            k++;
            count++;

        }
    }
    for(int i=0;i<n-1;i++)
    {
        int j=i+1;
        int k=i;
        while(k>=0 && j<n && s[j]==s[k])
        {
            k--;
            j++;
            count++;
        }
    }

    return count;

}

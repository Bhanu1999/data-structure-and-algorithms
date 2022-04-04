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
bool is_valid(string s,int i,int j)
{

    while(i<j)
    {
        if(s[i]!=s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
bool validPalindrome(string s) {
    int i=0;
    int j=s.size()-1;
    while(i<j)
    {
        if(s[i]!=s[j])
        {
            return is_valid(s,i,j-1)|| is_valid(s,i+1,j);
        }
        i++;
        j--;
    }
    return true;
}
int convertTime(string current, string correct) {
    int h1=((current[0]-'0')*10+(current[1]-'0'));
    int h2=((correct[0]-'0')*10+(correct[1]-'0'));
    int m1=((current[3]-'0')*10+(current[4]-'0'));
    int m2=((correct[3]-'0')*10+(correct[4]-'0'));

    int total1=h1*60+m1;
    int total2=h2*60+m2;
    cout<<total1<<total2;
    int ans=0;
    while(total2-total1>=60)
    {
        ans++;
        h1+=60;
    }
    while(total2-total1>=15)
    {
        ans++;
        h1+=15;
    }
    while(total2-total1>=5)
    {
        ans++;
        h1+=5;
    }
    while(total2-total1>1)
    {
        ans++;
        h1+=1;
    }

    return ans;

}
int32_t main() {


}

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
map<int,int> ele;

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



void deposit(vector<int> v) {
    ele[500]+=v[4];
    ele[200]+=v[3];
    ele[100]+=v[2];
    ele[50]+=v[1];
    ele[20]+=v[0];
}

vector<int> withdraw(int amount) {
    if(ele.size()==0)
    {
        cout<<"he";
        vector<int> v{-1};
        return v;
    }
    auto it=ele.end();
    it--;
    vector<int> v(5,0);
    int temp=amount;
    while(ele.size()>=0)
    {
        int val=it->first;

        int temp2=min(amount/val,ele[val]);
        amount=amount-temp2*val;
        ele[val]-=temp2;
        if(ele[val]==0)
        {
            ele.erase(val);
        }
        if(val==500)
        {
            v[4]=temp2;
        }
        else if(val==200)
        {
            v[3]=temp2;
        }
        else if(val==100)
        {
            v[2]=temp2;
        }
        else if(val==50)
        {
            v[1]=temp2;
        }
        else if(val==20)
        {
            v[0]=temp2;
        }

        if(it==ele.begin())
        {
            break;
        }
        it--;
    }
    int temp3=v[0]*20+v[1]*50+v[2]*100+v[3]*200+v[4]*500;
    cout<<temp3<<endl;;
    cout<<temp;
    if(temp3==temp)
    {

        return v;
    }
    else
    {
        ele[500]+=v[4];
        ele[200]+=v[3];
        ele[100]+=v[2];
        ele[50]+=v[1];
        ele[20]+=v[0];
        vector<int> res{-1};
        cout<<"hell";
        return res;
    }



}
int main() {
    vector<int> nums{0,10,0,3,0};
    deposit(nums);
   print( withdraw(500));


}


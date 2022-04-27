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
int countLatticePoints(vector<vector<int>>& circles) {
    set<pair<int,int>> ans;
    for(int i=0;i<circles.size();i++)
    {
        vector<int> temp=circles[i];
        int dist=temp[2];
        int temp_dist=1;
        int le=temp[0]-temp[2];
        int re=temp[0]+temp[2];
        while(le<=re)
        {
            ans.insert(make_pair(le,temp[1]));
            le++;
        }
        le=temp[1]-temp[2];
        re=temp[1]+temp[2];
        while(le<=re)
        {
            ans.insert(make_pair(temp[1],le));
            le++;
        }
        int ind1=temp[0];
        int ind2=temp[i];
        while(temp_dist<dist)
        {
            ind1--;
            ind2--;
            ans.insert(make_pair(ind1,ind2));
            temp_dist++;
        }
        temp_dist=1;
        while(temp_dist<dist)
        {
            ind1++;
            ind2--;
            ans.insert(make_pair(ind1,ind2));
            temp_dist++;
        }
        temp_dist=1;
        while(temp_dist<dist)
        {
            ind1++;
            ind2++;
            ans.insert(make_pair(ind1,ind2));
            temp_dist++;
        }
        temp_dist=1;
        while(temp_dist<dist)
        {
            ind1--;
            ind2++;
            ans.insert(make_pair(ind1,ind2));
            temp_dist++;
        }



    }
    for(auto i:ans)
    {
        cout<<i.first<<" "<<i.second<<endl;//
    }
    return ans.size();
}

int main() {



}


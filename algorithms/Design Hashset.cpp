#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<queue>
#include<stack>
#include<math.h>
#include<set>

using namespace std;
vector<int> v;
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
void add(int key) {
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==key)
        {
            return;
        }
    }
    v.push_back(key);

}

void remove(int key) {
    vector<int> nv;
    for(int i=0;i<v.size();i++)
    {

        if(v[i]==key)
        {
            continue;
        }
        else
        {
            nv.push_back(v[i]);
        }
    }
    v=nv;


}

bool contains(int key) {
    for(int i=0;i<v.size();i++)
    {

        if(v[i]==key)
        {
            return true;
        }

    }
    return false;
}
int32_t main() {


}

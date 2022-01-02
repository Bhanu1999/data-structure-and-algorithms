#include<iostream>
#include <vector>
#include <queue>
using namespace std;
#define int long long
#define vi vector<int>

//int b[100];
void read(vector<int> &a) {
    int n = a.size();
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void read(int a[], int n) {

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void print(int a[], int n) {

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int sumarr(int a[], int n) {

    int temp = 0;
    for (int i = 0; i < n; i++) {
        temp += a[i];
    }
//    cout<<endl;
    return temp;
}

void printrev(int a[], int n) {

    for (int i = n - 1; i >= 0; i--) {
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

void push(vector<int> &v, int value) {
    v.push_back(value);
    int i = v.size() - 1;
    while (i > 0 && v[(i / 2) + (i % 2) - 1] < v[i]) {
        swap(v[(i / 2) + (i % 2) - 1], v[i]);
        i = (i / 2) + (i % 2) - 1;
    }
}
void heapify(vector<int>& v,int i)
{
    int l=2*i+1;
    int r=2*i+2;
    int largest=i;
    if(l<v.size() && v[l]>v[i])
    {
        largest=l;
    }
    if(r<v.size() && v[r]>v[largest])
    {
        largest=r;
    }
    if(largest!=i)
    {
        swap(v[largest],v[i]);
        heapify(v,largest);
        return;
    }
    return;//
}
void build_heap(vector<int> &v)
{
    int i=(v.size()/2)-1;
    for(;i>=0;i--)
    {
        heapify(v,i);
    }

}

int32_t main() {
    vector<int> v{3,2,1,5,6,4};
    priority_queue<int> pq(v.begin(),v.end());
    int k=2;
    while(k>1)
    {
        pq.pop();
        k--;
    }
    cout<< pq.top();

}
#include<iostream>
#include<vector>
#include<stack>
#include <math.h>

using namespace std;
//#define int long long
#define vi vector<int>

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

void solve() {

}

void heapify(vector<int> &v, int i) {
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    int largest = i;
    if (l < v.size() && v[l] > v[i]) {
        largest = l;
    }
    if (r < v.size() && v[largest] < v[r]) {
        largest = r;
    }
    if (largest != i) {
        swap(v[i], v[largest]);
        heapify(v, largest);
    }
    return;
}

int extract_max(vector<int> &v) {
    int max = v[0];
    v[0] = v[v.size() - 1];
    v.pop_back();
    heapify(v, 0);
    return max;
}

void increase_key(vector<int> &v, int i, int value) {
    if (v[i] >= value) {
        return;//value is less than actual
    }
    v[i] = value;
    while (i > 0 && v[(i/2)+(i%2) - 1] < v[i]) {
        swap(v[i], v[(i/2)+(i%2) - 1]);//swap parent and child until parent is greater than child
        i = (i/2)+(i%2) - 1;
    }
}

void decrease_key(vector<int> &v, int i, int value) {
    if (v[i] <= value) {
        return;
    }
    v[i] = value;
    heapify(v, i);
}

void insert_element_heap(vector<int> &v, int value) {
    v.push_back(value);
    int i = v.size()-1;
    while (i > 0 && v[(i/2)+(i%2) - 1] < v[i]) {
        swap(v[i], v[(i/2)+(i%2) - 1]);//swap parent and child until parent is greater than child

        i =(i/2)+(i%2) - 1;

    }

}

int32_t main() {
    vector<int> v{7, 5, 1, 3, 2};
//    heapify(v,0);
    print(v);
//    cout<<extract_max(v)<<endl;
//    decrease_key(v,0,0);
    insert_element_heap(v,100);
    print(v);


}
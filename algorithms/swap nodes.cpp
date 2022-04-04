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
ListNode* swapNodes(ListNode* head, int k) {
    int len=0;
    ListNode* dummy=head;
    while(dummy!=nullptr)
    {
        len++;
        dummy=dummy->next;
    }
    int value1;
    int value2;
    dummy=head;
    int k1=len-k;
    int i=0;
    while(dummy!=nullptr)
    {
        if(i==k-1)
        {
            value1=dummy->val;
        }
        if(i==k1)
        {
            value2=dummy->val;
        }
        i++;
        dummy=dummy->next;
    }
    dummy=head;
    i=0;
    while(dummy!=nullptr)
    {
        if(i==k-1)
        {
            dummy->val=value2;
        }
        if(i==k1)
        {
            dummy->val=value1;
        }
        i++;
        dummy=dummy->next;
    }
    return head;
}

int32_t main() {


}

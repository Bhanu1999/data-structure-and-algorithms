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
ListNode* rotateRight(ListNode* head, int k) {
    int len=0;
    ListNode *dummy=head;
    ListNode *dummy1=head;

    while(dummy!=nullptr){
        len++;
        dummy=dummy->next;
    }
    if(k==0 || len==1 || len==0 || k%len==0)
    {
        return head;
    }
    if(len!=0)
        k=k%len;
    cout<<len;
    int dup=len-k;
    dummy=head;
    while(dup>0){
        dup--;
        dummy=dummy->next;
    }
    ListNode *ans=dummy;//
    dummy=head;
    dup=len-k;
    len--;
    while(len>0)
    {
        len--;
        dummy1=dummy1->next;
    }
    while(dup>0)
    {
        dup--;
        ListNode *node=new ListNode(dummy->val);
        dummy1->next=node;
        dummy1=dummy1->next;
        dummy=dummy->next;
    }
    return ans;
}
int32_t main() {


}

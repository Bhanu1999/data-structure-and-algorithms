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

 // Definition for singly-linked list.
  class ListNode {
      int val;
      ListNode  next;
      ListNode() {}
      ListNode(int val) { this.val = val; }
      ListNode(int val, ListNode next) { this.val = val; this.next = next; }
  };
public ListNode deleteDuplicates(ListNode head) {
    ListNode newNode=new ListNode(-1);
    ListNode ans=newNode;
    ListNode temp=ans;
    while(head!=null)
    {
        int cur=head.val;
        int cnt=0;
        ListNode dummy=head.next;
        while(dummy!=null && dummy.val==cur)
        {
            dummy=dummy.next;
            cnt++;
        }
        if(cnt==0)
        {
            ListNode newNode1=new ListNode(cur);
            temp.next=newNode1;
            temp=temp.next;
            head=head.next;


        }
        else{
            head=dummy;
        }

    }
    return ans.next;
}
int32_t main() {


}

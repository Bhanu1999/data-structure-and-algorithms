#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<queue>
#include<stack>
#include<math.h>
#include<set>

using namespace std;
class ListNode {
    int val;
    ListNode  next;
    ListNode() {}
    ListNode(int val) { this.val = val; }
    ListNode(int val, ListNode next) { this.val = val; this.next = next; }
};
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode *ans=new ListNode(-1);
    ListNode *dummy=ans;
    int car=0;
    int sum=0;
    while(l1!=nullptr || l2!=nullptr)
    {
        sum=0;
        sum+=car;
        if(l1)
        {
            sum+=(l1->val);
            l1=l1->next;
        }
        if(l2)
        {
            sum+=(l2->val);
            l2=l2->next;
        }
        car=sum/10;
        sum=sum%10;
        ListNode *temp=new ListNode(sum);
        dummy->next=temp;
        dummy=dummy->next;
    }
    if(car>0)
    {
        ListNode *temp=new ListNode(car);
        dummy->next=temp;
    }
    return ans->next;
}

int32_t main() {


}

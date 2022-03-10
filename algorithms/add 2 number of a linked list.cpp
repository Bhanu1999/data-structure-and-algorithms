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
    ListNode *ans=new ListNode(-1);//ans linked list node
    ListNode *dummy=ans;//pointer to be moved
    int car=0;
    int sum=0;
    while(l1!=nullptr || l2!=nullptr)
    {
        sum=0;//reset sum to 2 each time
        sum+=car;//add previous carry
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
        ListNode *temp=new ListNode(sum);//make node which has the sum
        dummy->next=temp;//point the newly created node to dummy list
        dummy=dummy->next;//movie dummy pointer
    }
    if(car>0)//if still carry greater than 0;
    {
        ListNode *temp=new ListNode(car);
        dummy->next=temp;
    }
    return ans->next;
}

int32_t main() {


}

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
int count=0;
int ans=100;
void kthSmallest1(TreeNode* root, int k) {
    if(root==nullptr)
    {
        return;
    }

    kthSmallest1(root->left,k);
    count++;
    if(count==k)
    {
        ans=root->val;
        return;
    }
    kthSmallest1(root->right,k);

}
int kthSmallest(TreeNode* root, int k) {
    kthSmallest1(root,k);
    return ans;
}
int32_t main() {


}

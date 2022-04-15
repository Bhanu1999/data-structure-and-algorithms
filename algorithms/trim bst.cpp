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
TreeNode* trimBST(TreeNode* root, int low, int high) {
    if(root==nullptr)
    {
        return nullptr;//we reached end of the tree;
    }
    if(root->val>high)
    {
        return trimBST(root->left,low,high);//if current root is above the high there is a possibility that its left might be under high
    }
    if(root->val<low)
    {
        return trimBST(root->right,low,high);//same as above just a opposite case
    }
    root->left=trimBST(root->left,low,high);//if root is in correct range apply trim on left and check
    root->right=trimBST(root->right,low,high);//apply trim on right
    return root;//return root if all goes well
}
int32_t main() {


}

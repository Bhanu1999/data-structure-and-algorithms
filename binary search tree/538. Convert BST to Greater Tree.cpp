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
int sum=0;
TreeNode* convertBST(TreeNode* root) {
    if(root==nullptr) return nullptr;
    convertBST(root->right);
    sum+=root->val;
    root->val=sum;
    convertBST(root->left);
    return root;
}
int32_t main() {


}

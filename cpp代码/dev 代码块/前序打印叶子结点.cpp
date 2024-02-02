#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    char val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(char x) : val(x), left(NULL), right(NULL) {}
};

vector<char> preorder_leaves(TreeNode* root) {
    if (root == NULL) {
        return vector<char>();
    }
    if (root->left == NULL && root->right == NULL) {
        return vector<char>(1, root->val);
    }
    vector<char> left_leaves = preorder_leaves(root->left);
    vector<char> right_leaves = preorder_leaves(root->right);
    left_leaves.insert(left_leaves.end(), right_leaves.begin(), right_leaves.end());
    return left_leaves;
}

TreeNode* build_tree(string& preorder, int& index) {
    if (index == preorder.size()) {
        return NULL;
    }
    char val = preorder[index++];
    if (val == '#') {
        return NULL;
    }
    TreeNode* root = new TreeNode(val);
    root->left = build_tree(preorder, index);
    root->right = build_tree(preorder, index);
    return root;
}

int main() {
    string preorder;
    cin >> preorder;
    int index = 0;
    TreeNode* root = build_tree(preorder, index);
    vector<char> leaves = preorder_leaves(root);
    for (int i = 0; i < leaves.size(); ++i) {
        cout << leaves[i] << " ";
    }
    cout << endl;
    return 0;
}


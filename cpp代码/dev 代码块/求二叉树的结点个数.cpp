// 求二叉树的结点个数 

#include <iostream>

using namespace std;

struct TreeNode {
    char val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(char x) : val(x), left(NULL), right(NULL) {}
};

int count_nodes(TreeNode* root) {
    if (root == NULL) {
        return 0;
    }
    return 1 + count_nodes(root->left) + count_nodes(root->right);
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
    int node_count = count_nodes(root);
    cout << node_count << endl;
    return 0;
}



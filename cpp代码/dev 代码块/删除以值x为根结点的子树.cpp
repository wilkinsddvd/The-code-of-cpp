#include <bits/stdc++.h>

using namespace std;

struct TreeNode {
    char val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(char x) : val(x), left(NULL), right(NULL) {}
};

void delete_tree(TreeNode* root) {
    if (root == NULL) {
        return;
    }
    delete_tree(root->left);
    delete_tree(root->right);
    delete root;
}
void delete_subtree(TreeNode* root, char x) {
    if (root == NULL) {
        return;
    }
    if (root->left != NULL && root->left->val == x) {
        delete_tree(root->left);
        root->left = NULL;
    }
    if (root->right != NULL && root->right->val == x) {
        delete_tree(root->right);
        root->right = NULL;
    }
    delete_subtree(root->left, x);
    delete_subtree(root->right, x);
}



void inorder_traversal(TreeNode* root) {
    if (root == NULL) {
        return;
    }
    inorder_traversal(root->left);
    cout << root->val << " ";
    inorder_traversal(root->right);
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
    char x;
    cin >> x;
    delete_subtree(root, x);
    if (root == NULL) {
        cout << "Empty" << endl;
    } else {
        inorder_traversal(root);
        cout << endl;
    }
    delete_tree(root);
    return 0;
}


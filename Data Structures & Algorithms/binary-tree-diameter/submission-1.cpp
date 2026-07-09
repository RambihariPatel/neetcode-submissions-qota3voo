class Solution {
public:
    int diameter = 0;

    int height(TreeNode* root) {

        if (root == NULL) {
            return 0;
        }

        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        // Current node se pass hone wala diameter
        diameter = max(diameter, leftHeight + rightHeight);

        // Current node ki height return karo
        return 1 + max(leftHeight, rightHeight);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return diameter;
    }
};
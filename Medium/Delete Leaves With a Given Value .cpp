/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr, right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        if (!root) return nullptr;
        root->left = removeLeafNodes(root->left, target);
        root->right = removeLeafNodes(root->right, target);
        if (!root->left && !root->right && root->val == target)
            return nullptr;
        return root;
    }
};

Visual Understanding: 

Initial Tree:
        1
      /   \
     2     3
    /     / \
   2     2   4
   
Step-by-Step Deletion:
1. Traverse to [2 (leaf with value = 2)], delete.
        1
      /   \
     2     3
    /     / \
  null   2   4

2. Now, [2 (leaf with value = 2)], delete.
        1
      /   \
     2     3
    /     / \
  null  null  4

3. Finally, [2 (leaf with value = 2)], delete.
        1
      /    \
  null     3
         /   \
       null   4

Final Tree:
   1
    \
     3
      \
       4

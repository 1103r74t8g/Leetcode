class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> nums1;
        vector<int> nums2;
        leaf(root1, nums1);
        leaf(root2, nums2);
        
        return nums1 == nums2;
    }
    void leaf(TreeNode* root, vector<int>& nums){
        if(root == nullptr)return;

        if(root->left == nullptr && root->right == nullptr){
            nums.push_back(root->val);
            return;
        }
        leaf(root->left, nums);
        leaf(root->right, nums);
    }
};

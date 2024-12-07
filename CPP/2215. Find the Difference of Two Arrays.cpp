class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans;
        unordered_set<int> n1(nums1.begin(), nums1.end());
        unordered_set<int> n2(nums2.begin(), nums2.end());
        vector<int> ans1;
        vector<int> ans2;
        for(auto i : n1){
            if(n2.count(i) == 0){
                ans1.push_back(i);
            }else{
                n2.erase(i);
            }
        }

        for(auto i : n2){
            ans2.push_back(i);
       }
       ans.push_back(ans1);
       ans.push_back(ans2);
       return ans;
    }
};

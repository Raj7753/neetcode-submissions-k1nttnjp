class Solution {
public:

    void solve(int idx,
               vector<int>& nums,
               int target,
               vector<int>& path,
               vector<vector<int>>& ans) {

        // valid combination
        if(target == 0) {
            ans.push_back(path);
            return;
        }

        // invalid cases
        if(idx >= nums.size() || target < 0) {
            return;
        }

        // TAKE current element
        path.push_back(nums[idx]);

        // stay at same index
        solve(idx, nums, target - nums[idx], path, ans);

        path.pop_back();

        // SKIP current element
        solve(idx + 1, nums, target, path, ans);
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {

        vector<vector<int>> ans;
        vector<int> path;

        solve(0, nums, target, path, ans);

        return ans;
    }
};
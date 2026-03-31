// Problem: Concatenation of Array
// Link: https://leetcode.com/problems/concatenation-of-array/
// Difficulty: Easy
// Language: C++

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans = nums;
        for(int i = 0; i < nums.size(); i++){
            ans.push_back(nums[i]);
        }
        return ans;
    }
};

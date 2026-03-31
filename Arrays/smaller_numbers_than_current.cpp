// Problem: How Many Numbers Are Smaller Than the Current Number
// Link: https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
// Difficulty: Easy
// Language: C++

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            int count = 0;
            for(int j = 0; j < n; j++){

                if(nums[i] > nums[j]){
                    count++;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};

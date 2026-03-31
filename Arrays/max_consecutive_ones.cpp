// Problem: Max Consecutive Ones
// Link: https://leetcode.com/problems/max-consecutive-ones/
// Difficulty: Easy
// Language: C++

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int current = 0;
        int result = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                current++;
            }
            else{
                current = 0;
            }
            result = max(result, current);
        }
        return result;
    }
};

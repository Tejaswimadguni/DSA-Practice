// Problem: Can Make Arithmetic Progression From Sequence
// Link: https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/
// Difficulty: Easy
// Language: C++

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {

        vector<int> copy = arr;

        sort(copy.begin(), copy.end());

        int diff = copy[1] - copy[0];

        for(int i = 0; i < copy.size() - 1; i++){
            if(copy[i+1] - copy[i] != diff){
                return false;
            }
        }

        return true;
    }
};

// Problem: Check if Numbers Are Ascending in a Sentence
// Link: https://leetcode.com/problems/check-if-numbers-are-ascending-in-a-sentence/
// Difficulty: Easy
// Language: C++

class Solution {
public:
    bool areNumbersAscending(string s) {

        vector<int> nums;

        for(int i=0;i<s.length();i++){

            if(s[i]>='0' && s[i]<='9'){

                int num=0;

                while(i<s.length() && s[i]>='0' && s[i]<='9'){
                    num=num*10+(s[i]-'0');
                    i++;
                }

                nums.push_back(num);
            }
        }

        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>=nums[i+1]){
                return false;
            }
        }

        return true;
    }
};

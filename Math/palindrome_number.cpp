// Problem: Palindrome Number
// Link: https://leetcode.com/problems/palindrome-number/
// Difficulty: Easy
// Language: C++

class Solution {
public:
    bool isPalindrome(int n) {
        if(n<0) return false;
        long long reversed=0;
        int original=n;
        while(n!=0){
           int digit=n%10;
            reversed=reversed*10+digit;
            n=n/10;
        }
        return reversed==original;
    }
};

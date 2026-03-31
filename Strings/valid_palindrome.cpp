// Problem: Valid Palindrome
// Link: https://leetcode.com/problems/valid-palindrome/
// Difficulty: Medium
// Language: C++

class Solution {
private:
    char lowercase(char ch){
        if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')){
            return ch;
        }
        return ch - 'A' + 'a';
    }
    bool valid(char ch){
        if((ch >= 'a' && ch <= 'z') ||
           (ch >= '0' && ch <= '9') ||
           (ch >= 'A' && ch <= 'Z')){
            return true;
        }
        return false;
    }
public:
    bool isPalindrome(string s){
        string temp = "";
        for(int i = 0; i < s.length(); i++){
            if(valid(s[i])){
                temp.push_back(s[i]);
            }
        }
        for(int i = 0; i < temp.length(); i++){
            temp[i] = lowercase(temp[i]);
        }
        string rev = temp;
        reverse(rev.begin(), rev.end());
        return rev == temp;
    }
};

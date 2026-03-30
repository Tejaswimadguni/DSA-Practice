// Problem: Find the Pivot Integer
// Link: https://leetcode.com/problems/find-the-pivot-integer/
// Difficulty: Easy
// Language: C++

class Solution {
public:
    int pivotInteger(int n) {
        int temp=0;
        int s=(n*(n+1))/2;
        for(int i=n;i>0;i--){
            temp+=i;
            int x=s-temp+i;
            if(x==temp){
                return i;
            }
        }
        return -1;
    }
};

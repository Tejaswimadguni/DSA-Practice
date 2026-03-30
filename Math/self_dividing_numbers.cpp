// Problem: Self Dividing Numbers
// Link: https://leetcode.com/problems/self-dividing-numbers/
// Difficulty: Easy
// Language: C++

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {

        vector<int> ans;

        for(int i=left;i<=right;i++){
            int n=i;
            bool divisible=true;
            while(n>0){
                int digit=n%10;
                if(digit==0 || i%digit!=0){
                    divisible=false;
                    break;
                }
                n=n/10;
            }
            if(divisible){
                ans.push_back(i);
            }
        }
        return ans;
    }
};

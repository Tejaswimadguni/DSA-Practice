// Problem: Build an Array With Stack Operations
// Link: https://leetcode.com/problems/build-an-array-with-stack-operations/
// Difficulty: Medium
// Language: C++

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {

        vector<string> ans;

        string push="Push";
        string pop="Pop";

        int m=0;

        for(int i=1;i<=n;i++){

            ans.push_back(push);

            if(i==target[m]){
                m++;

                if(m==target.size()){
                    break;
                }
            }
            else{
                ans.push_back(pop);
            }
        }

        return ans;
    }
};

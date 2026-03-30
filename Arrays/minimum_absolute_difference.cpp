// Problem: Minimum Absolute Difference Between Two Values
// Language: C++

class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int ans=INT_MAX;
       int ones=-1;
        int twos=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                ones=i;
                if(twos!=-1){
                    ans=min(ans,abs(ones-twos));
                }
            }
            if(nums[i]==2){
                twos=i;
                if(ones!=-1){
                    ans=min(ans,abs(ones-twos));
                }
            }
        }

        if(ans==INT_MAX) return -1;
        return ans;
    }
};

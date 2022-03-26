class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=0;
        int ans=0;
        int m=nums.size();
        for(int i=0;i<m;i++){
            if(c==0){
                ans=nums[i];
            }
            if(ans==nums[i+1]){
                c++;}
            else{
                c-=1;
            }
        }   return ans;
        }
};
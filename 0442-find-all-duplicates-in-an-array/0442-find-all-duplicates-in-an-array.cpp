class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
          if(nums.empty())
          return {};
        vector<int>ans;
        int n=nums.size();
        for(int i=0; i<n; i++){
            int val= abs(nums[i]);
            if(nums[val-1]<0){
                ans.push_back(val);
            }
            else{
                nums[val-1] *= -1;
            }
        }
        return ans;
    }
};
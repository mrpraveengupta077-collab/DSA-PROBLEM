class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int>temp;
        int cnt = 0;
        int j =0;
        for(int i =0;i<n;i++){
            if(nums[i]!=0){
                temp.push_back(nums[i]);
            }else{
                cnt++;
            }
        }
        for(int i =0;i<cnt;i++){
            temp.push_back(0);
        }
        nums=temp;
    }
};
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count = NULL;
        int maj = 0;
        
        for(int i=0;i<n;i++){
            if(nums[i] == maj){
                count++;
            }
            else if(count == 0){
                maj = nums[i];
                count = 1;
            }
            else{
                count--;
            }
        }
        return maj;
    }
};
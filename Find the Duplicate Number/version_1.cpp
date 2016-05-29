class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size()-1;  
        int low = 1, high= n;  
        int mid = 0;  
        while(low<high) {  
            mid = low + (high-low)/2;  
            int c= count(nums, mid); //count #numbers less than mid.  
            if(c<=mid) {  
                low = mid+1;  
            } else {  
                high = mid;  
            }  
        }  
        return low;  
    }  
      
    int count(vector<int>& nums, int mid) {  
        int c =0;  
        for(int i=0; i<nums.size(); i++) {  
            if(nums[i]<=mid) c++;  
        }  
        return c;  
    }  
    
};
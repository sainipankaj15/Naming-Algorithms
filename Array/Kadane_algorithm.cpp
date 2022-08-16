// https://leetcode.com/problems/maximum-subarray/


// Kadane Algorithms
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maximum_sum= INT_MIN ;
        
        
        for(auto it : nums){
            sum+=it;
            maximum_sum = max(maximum_sum,sum);
            
            if(sum<0)
            { 
                
                // yadi sum less than zero ho jaata h tho sum ko reset kar dege 
                sum = 0;
            }
        }
        
        
        return maximum_sum;
    }
};
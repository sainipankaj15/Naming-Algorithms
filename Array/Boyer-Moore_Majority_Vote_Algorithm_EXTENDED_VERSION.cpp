//https://leetcode.com/problems/majority-element-ii/
// Extended version of Boyer-Moore Majority Vote Algorithm

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
   
        int count1=0, count2=0,num1=-1,num2=-1;
        
        
        for(auto it : nums){
            if(it==num1){
                count1++;
            }
            else if(it==num2){
                count2++;
            }
            else if(count1==0){
                num1 = it;
                count1 = 1;
            }
           else if(count2==0){
                num2 = it;
                count2 = 1;
            }
            else{
                count1--;
                count2--;
            }
        }
        
        // still we are not confirm that they are majority elements or not so we will check again
        
        int para = nums.size()/3;
        
        count1 = 0;
        count2 = 0;
        
        for(auto it : nums){
            if(it==num1)
                count1++;
            
            if(it==num2)
                count2++;
        }
        
         if(num1==num2)
            return {num1};
        
        
        vector<int> ans;
               
        if(count1>para)
            ans.push_back(num1);
            
        if(count2>para)
             ans.push_back(num2);
        
        //otherwise
        return ans;        
        
    }
};
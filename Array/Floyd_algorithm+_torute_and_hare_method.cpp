// https://leetcode.com/problems/find-the-duplicate-number/
// Floyd's Cycle Algorithm  = Tortois and Hare method
// https://www.geeksforgeeks.org/floyds-cycle-finding-algorithm/
// Here we will assume every element in array as a Node of Linked list


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        // we will use tortoise and hare method       
        int slow =  nums[0];
        int fast = nums[0];
        
        // slow will move by 1 and fast will move by 2
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
            
        }while(slow!=fast);
        
            
        // till now both has meet 
        // so now we will set a new pointer to first position which is also type of slow 
        // and from here we will move this slow pointer 
        // where they will meet it is our answer
            
        fast = nums[0];
        
        while(fast!=slow){
            fast = nums[fast];
            slow = nums[slow];
        }
        
        // now slow and fast are equal return anyone
        return slow;
    }
};
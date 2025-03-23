//https://leetcode.com/problems/sort-colors/
// dutch national flag algorithm

class Solution {
    public:
        void sortColors(vector<int>& nums) {
            
            // This called Dutch National Flag Algorithm
            int len = nums.size();
    
            // low will handle zero number
            int low = 0;
            // mid will handle 1 number
            int mid = 0;
            // high will handle 2 number
            int high = len-1;
    
            while(mid <= high){
                // if 0 comes 
                if (nums[mid]==0){
                    // low and mid dono ++; and also swapped the value
                    swap(nums[low],nums[mid]);
                    low++;
                    mid++;
                }
    
                // if 1 comes
                else if (nums[mid]==1){
                    mid++;
                }
    
                // if 2 comes
                else{
                    // high--; and also swappped the value
                    swap(nums[mid],nums[high]);
                    high--;
                }
            }
    
        }
    };
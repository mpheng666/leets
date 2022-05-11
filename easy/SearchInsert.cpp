class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        

        int left=0;
        int right=nums.size() - 1;
        int mid;
        
        while(left<=right)
        {
            mid = (right + left)/2;
            
            if(nums[mid] == target)
            {
                // std::cout << "nums[i] eq " << nums[mid] << " at " << mid << std::endl;
                return mid;
            }
            else if(nums[mid] < target)
            {
                // std::cout << "nums[i] ls " << nums[mid] << " at " << mid << std::endl;
                left = mid + 1;
            }
            else if(nums[mid] > target)
            {
                // std::cout << "nums[i] gt " << nums[mid] << " at " << mid << std::endl;
                right = mid - 1;
            }
        }

        return left;
        
    }
};
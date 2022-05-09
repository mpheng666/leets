class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        auto it = std::unique(nums.begin(), nums.end());
        nums.erase(it, nums.end());
        // std::fill(it, nums.end(), 0);
        
//         for(auto& num : nums)
//         {
//             std::cout << "num: " << num << std::endl;
//         }
        
        return nums.size();
    }
};
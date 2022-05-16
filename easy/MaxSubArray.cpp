// BRUTE FORCE
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int tmp_sum;
        int max_sum = std::numeric_limits<int>::min();
        
        for(int p=0; p<nums.size(); ++p)
        {
            int tmp_sum = 0;
            
            for(int j=p; j<nums.size(); ++j)
            {
                tmp_sum = tmp_sum + nums[j];
                for(int k=p; k<=j ; ++k)
                {
                    std::cout << nums[k] << " ";
                }

                std::cout << "tmp_sum: " << tmp_sum << std::endl;
                
                if(tmp_sum > max_sum)
                {
                    max_sum = tmp_sum;
                }
            }
            
            std::cout << std::endl;
            
            std::cout << "max sum: " << max_sum << std::endl;
        }
        
        return max_sum;
    }
};

// DIVIDE AND CONQUOR
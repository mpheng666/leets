// BRUTE FORCE, N^2
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

// LINEAR, N
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int sum_current = 0;
        int sum_max = INT_MIN;
        
        for(int i=0; i<nums.size(); ++i)
        {
            sum_current = sum_current + nums[i];
            
            if(sum_current > sum_max)
            {
                sum_max = sum_current;
            }
            
            if(sum_current < 0)
            {
                sum_current = 0;
            }
        }
        
        return sum_max;
    }
};

// DIVIDE AND CONQUOR, N*LOG(N)
class Solution {
public:
    int max(int x, int y) {return x > y ? x : y;}
    
    int maxSubArray_sub(vector<int>& nums, int left, int right)
    {
        
        // for case nums.size() = 0 or 1
        if(left >= right) {return nums[left];}

        int mid = (left+right)/2;
        int sum = 0;
        int max_left = INT_MIN/2;
        int max_right = INT_MIN/2;

        for(int i=mid; i>=left; --i)
        {
            sum +=nums[i];
            if(sum > max_left)
            {
                max_left = sum;
            }
        }

        sum = 0;
        for(int i=mid+1; i<=right; ++i)
        {
            sum += nums[i];
            if(sum > max_right)
            {
                max_right = sum;
            }
        }

        int left_right_max = max(maxSubArray_sub(nums, left, mid),
                                 maxSubArray_sub(nums, mid+1, right));

        return max(left_right_max, max_left + max_right);
    }
    
    int maxSubArray(vector<int>& nums) 
    {
        return maxSubArray_sub(nums, 0, nums.size()-1);
    }
};
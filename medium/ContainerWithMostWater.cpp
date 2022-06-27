// Brute force
class Solution {
public:
    int maxArea(vector<int>& height) {
        int current_area = 0;
        int max_area = 0;
        int size = height.size();
        
        for(int i=0; i<size; ++i)
        {
            for(int j=i; j<size; ++j)
            {
                int min_h = std::min(height[i], height[j]);
                current_area = min_h * (j-i);
                if(current_area > max_area)
                {
                    max_area = current_area;                    
                }
            }
        }
        
        return max_area;
    }
};

// Index shifting position 
class Solution {
public:
    int maxArea(vector<int>& height) {
        int size = height.size();
        int left_idx = 0;
        int right_idx = size-1;
        int area_max = 0;
        
        while(left_idx < right_idx)
        {
        //     std::cout << "l: " << left_idx << " r: " << right_idx << std::endl;
        //     std::cout << "hl: " << height[left_idx] << " hr: " << height[right_idx] << std::endl;
            area_max = max(area_max, (min(height[left_idx], height[right_idx]) * (right_idx - left_idx)));
            
            // std::cout << "area max: " << area_max << std::endl;
            
            if(height[left_idx] > height[right_idx])
            {
               right_idx--;
            }
           else
           {
                left_idx++;
           }
        }
        
        return area_max;
    }
};
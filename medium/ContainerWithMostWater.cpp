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
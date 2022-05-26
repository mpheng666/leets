class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        double median = 0;
        int s1 = nums1.size();
        int s2 = nums2.size();
        int total_len = s1 + s2;
        int half_len = total_len/2;
        int position_counter = 0;
        int ptr1 = 0;
        int ptr2 = 0;
        double last1 = 0;
        double last2 = 0;
        
        while(position_counter <= half_len)
        {
            // std::cout << "ptr1a: " << ptr1 << "\t";      
            // std::cout << "ptr2a: " << ptr2 << "\t";
            
            last2 = last1;
            
            if(ptr1 == s1)
            {
                last1 = nums2[ptr2];
                ptr2++;
            }
            else if(ptr2 == s2)
            {
                last1 = nums1[ptr1];
                ptr1++;
            }
            else
            {
                if(nums1[ptr1] > nums2[ptr2])
                {
                    // if(ptr2 != nums2.size())
                    // {
                        last1 = nums2[ptr2];
                        ptr2++;
                    // }
                }
                else
                {
                    // if(ptr1 != nums1.size())
                    // {
                        last1 = nums1[ptr1];
                        ptr1++;
                    // }
                }
            }

            position_counter++;
            
            // std::cout << "ptr1b: " << ptr1 << "\t";      
            // std::cout << "ptr2b: " << ptr2 << "\t";      
            // std::cout << "count: " << position_counter << std::endl;      
        }
        
        // std::cout << "last1: " << last1 << std::endl;      
        // std::cout << "last2: " << last2 << std::endl;      
        
        if(total_len%2 == 0)
        {
            median = (last1+last2) / 2.0;
        }
        else
        {
            median = last1;
        }
        
        // std::cout << "median: " << median << std::endl;      
        
        return median;
    }
};
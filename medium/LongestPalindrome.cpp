class Solution {
public:
    string longestPalindrome(string s) {

        if(s.size() == 1) return s;
        
        // std::cout << "size: " << s.size() << std::endl; 
        
        int res = 1;
        int index = 0;
        int max_index = 0;
        int seed = 0;
        int max_seed = 0;
        
        for(int i=0; i<s.size()-res; ++i)
        {
            if(s[i]==s[i+res])
            {
                index = 0;
                seed = i;
                // std::cout << "s: " << seed << std::endl;
                
                while((seed-index) >= 0 && (seed+res+index) != (s.size()))
                {
                    // if(!((seed-index) >= 0))
                    // {
                    //     // std::cout << "begin out" << std::endl;
                    // }
                    // if(!((seed+res+index) != (s.size())))
                    // {
                    //     // std::cout << "end out" << std::endl;
                    // }
                    
                    if(s[seed-index] == s[seed+res+index])
                    {
                        index++;
                        // std::cout << "i: " << index << std::endl;
                    }
                    else
                    {
                        break;
                    }
                }
                
                if(index>max_index)
                {
                    max_index = index;
                    max_seed = seed;
                    // std::cout << "max seed: " << max_seed << std::endl;
                    // std::cout << "max_index: " << max_index << std::endl;
                }
            }
        }
        
        std::string s1 (s.begin()+(max_seed-max_index+1), s.begin()+(max_seed+res+max_index));
        
        res = 2;
        max_index = 0;
        max_seed = 0;
        
        for(int i=0; i<s.size()-res; ++i)
        {
            if(s[i]==s[i+res])
            {
                index = 0;
                seed = i;
                // std::cout << "s: " << seed << std::endl;
                // std::cout << "b1: " << ((seed-index) >= 0) << std::endl;
                // std::cout << "b2: " << ((seed+res+index) == (s.size())) << std::endl;
                
                while((seed-index) >= 0 && (seed+res+index) != (s.size()))
                {
                    // if(!((seed-index) >= 0))
                    // {
                    //     // std::cout << "begin out" << std::endl;
                    // }
                    // if(!((seed+res+index) != (s.size())))
                    // {
                    //     // std::cout << "end out" << std::endl;
                    // }
                    
                    if(s[seed-index] == s[seed+res+index])
                    {
                        index++;
                        // std::cout << "i: " << index << std::endl;
                    }
                    else
                    {
                        break;
                    }
                }
                
                if(index>max_index)
                {
                    max_index = index;
                    max_seed = seed;
                    // std::cout << "max seed: " << max_seed << std::endl;
                    // std::cout << "max_index: " << max_index << std::endl;
                }
            }
        }
        
        std::string s2 (s.begin()+(max_seed-max_index+1), s.begin()+(max_seed+res+max_index));
        
        // std::cout << "s1: " << s1 << std::endl;
        // std::cout << "s2: " << s2 << std::endl;
        
        s1.size() > s2.size() ? s1=s1 : s1=s2 ;
        return s1;
        
    }
};
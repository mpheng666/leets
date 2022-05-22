// dynamic programming method
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        std::string max;
        std::string curr;
        
        for(auto& c : s)
        {
            // std::cout << "current char: " << c << std::endl;
            size_t found = curr.find(c);
            
            if(found == std::string::npos)
            {
                curr.push_back(c);
                
            }
            else
            {
                // if(c == curr[curr.size()-1])
                // {
                //     std::string tmp = curr;
                //     std::cout << "size is 1" << std::endl;
                //     std::cout<< "tmp: ";
                //     for(const auto& t : tmp)
                //     {
                //         std::cout << t;
                //     }
                //     std::cout << "\n";
                //     std::cout << "found at the back";
                //     curr = tmp;
                // }
                // else
                // {
                    std::string tmp(curr.begin()+found+1, curr.end());
                    tmp.push_back(c);
                    curr = tmp;
                // }
                
                // std::cout << "curr: ";
                // for(const auto& u: curr)
                // {
                //     std::cout << u;
                // }
                // std::cout << std::endl;
                    
            }
            
            if(curr.size() > max.size())
            {
                max = curr;
                // std::cout << "max: ";
                // for(const auto& m : max)
                // {
                //     std::cout << m;
                // }
                // std::cout << std::endl;
            }
        }

        
        return max.size();
    }
};

// optimised version
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        std::string max;
        std::string curr;
        
        for(const auto& c : s)
        {
            size_t found = curr.find(c);
            
            if(found == std::string::npos)
            {
                curr.push_back(c);
            }
            else
            {
                curr.push_back(c);
                curr.erase(0, found+1);
            }
            
            if(curr.size() > max.size())
            {
                max = curr;
            }
        }

        return max.size();
    }
};
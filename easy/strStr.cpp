class Solution {
public:
    int strStr(string haystack, string needle) {
        
        if(needle.size()==0)
        {
            return 0;
        }
        
        std::size_t found = haystack.find(needle);
        
        if (found!=std::string::npos)
        {
            return found;
        }
        else
        {
            return -1;
        }
    }
};
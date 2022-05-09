class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        std::sort(strs.begin(), strs.end(), 
                  [](const std::string &first, const std::string &second)
                  { return first.size() < second.size(); });
        
        std::string result = "";

        if(strs.size() <= 1)
        {
            return strs[0];
        } 
        else
        {
            for(int i=0 ; i<strs[0].size(); ++i)
            {
                for(auto &s : strs)
                {
                    if(s[i] != strs[0][i])
                    {
                        return result;
                    }
                }
                result += strs[0][i];
            }
        }
        return result;
    }
};
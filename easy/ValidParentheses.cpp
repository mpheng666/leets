class Solution {
public:
    bool isValid(string s) {
        
        std::stack<char> s1;
        
        // if(s.length()%2!=0) return false;
        
        for(size_t i=0; i<s.length() ; i+=1)
        {
            
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                s1.push(s[i]);
            }
            
            else if (s[i] == ')')
            {
                if(s1.empty())
                {
                    return false;
                }
                // std::cout << "case )" << std::endl;
                if(s1.top() != '(')
                {
                    return false;
                }
                else
                {
                    s1.pop();
                }
            }
            
            else if (s[i] == ']')
            {
                if(s1.empty())
                {
                    return false;
                }
                // std::cout << "case ]" << std::endl;
                if(s1.top() != '[')
                {
                    return false;
                }
                else
                {
                    s1.pop();
                }
            }
            
            else if (s[i] == '}')
            {
                if(s1.empty())
                {
                    return false;
                }
                // std::cout << "case }" << std::endl;
                if(s1.top() != '{')
                {
                    return false;
                }
                else
                {
                    s1.pop();
                }
            }
                
        }
        
        if(s1.empty())
            return true;
        else
            return false;
        
    }
};
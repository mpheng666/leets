class Solution {
public:
    int romanToInt(string s) {
        
        int result = 0;
        // s = "XXVII";
        std::vector<char> vector_roman(s.begin(), s.end());
        
        for(auto i = vector_roman.begin(); i != vector_roman.end(); ++i)
        {
            switch(*i){
                case 'I':
                    {
                        // if()
                        result = result + 1;
                    }
                    break;
                case 'V':                    
                    {
                        result = result + 5;
                    }
                    break;
                case 'X':                    
                    {
                        result = result + 10;
                    }
                    break;
                case 'L':                    
                    {
                        result = result + 50;
                    }
                    break;
                case 'C':                    
                    {
                        result = result + 100;
                    }
                    break;
                case 'D':                    
                    {
                        result = result + 500;
                    }
                    break;
                case 'M':                    
                    {
                        result = result + 1000;
                    }
                    break;
            }            
            std::cout << "*i: " << *i << std::endl;
            // std::cout << "*(i+1): " << *(i+1) << std::endl;
            std::cout << "result: " << result << std::endl;
        }
        
        return result;
    }
};
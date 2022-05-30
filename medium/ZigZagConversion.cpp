// Matrix method
class Solution {
public:
    string convert(string s, int numRows) {
        
        int str_size = s.size();
        if(str_size == 1 || str_size == numRows || numRows == 1) return s;
        int numCols = str_size;
        std::vector<std::vector<char>> mat(numRows, std::vector<char>(numCols));
        std::string str_zz;
        
        // std::cout << "Row size: " << mat.size() << std::endl;
        // std::cout << "Col size: " << mat[0].size() << std::endl;
            
        int c=0;
        while(c<str_size)
        {
        
            for(int i=0; i<numCols; ++i)
            {
                for(int j=0;(j<numRows && c<str_size); ++j)
                {
                    // std::cout << "c: " << c << " " << "c==str? " << (c==str_size) << " ";
                    // std::cout << "s: " << s[c] << " " << "col: " << i << " " << "row: " << j << " ";
                    // std::cout << "logic: " << (i%(numRows-1))%(numRows) << " ";

                    if( ((i%(numRows-1))%(numRows)) == 0 )
                    {
                        // std::cout << "yes" << std::endl;
                        mat[j][i] = s[c];
                        c++;
                    }
                    else
                    {
                        // std::cout << "no" << " j: " << j << " l: " << (numRows-1-i) << std::endl;
                        mat[numRows - ((i%(numRows-1))%(numRows)) - 1][i] = s[c];
                        c++;
                        break;
                    }
                }
            }
        }        
        
        
        for(int j=0; j<numRows; ++j)
        {
            for(int i=0; i<numCols; ++i)
            {
                // std::cout << "col: " << i << " " << "row: " << j << " ";
                // std::cout << "char: " << mat[j][i] << std::endl;
                if(mat[j][i] != '\0')
                {
                    str_zz += mat[j][i];
                }
            }
        }
        
        return str_zz;
    }
};
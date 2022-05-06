class Solution {
public:
    bool isPalindrome(int x) 
    {
        
        if(x < 0)
        {
            // std::cout << "Less than zero";
            return false;
        }
        else
        {
            

            deque<int> x_deque;

            while(x!=0)
            {
                int r = x % 10;
                x = x/10;
                x_deque.push_back(r);
                // std::cout << "r: " << r << "\t";
                // std::cout << "x: " << x << "\t";
            }

            std::cout << "\n";

            // for(auto i : x_deque)
            // {
            //     std::cout << "i: " << i << "\n";
            // }

            if(!x_deque.empty())
            {
                while(x_deque.size() != 1)
                {
                    // std::cout << "front: " << x_deque.front() << "\n";
                    // std::cout << "back: " << x_deque.back() << "\n";

                    if(x_deque.front() != x_deque.back())
                    {
                        return false;
                    }
                    else
                    {
                        if(!x_deque.empty()) 
                        {
                            x_deque.pop_back();
                            x_deque.pop_front();
                        } else
                        {
                            return true;
                        }
                    }
                }
            }
        }
        
        return true;
    }
};
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        
        // if(l1->val == 0 && l2->val == 0)
        // {
        //     ListNode* l3 = new ListNode();
        //     return l3;
        // }

        int sum = 0;
        bool sum_flag = false;
        
        ListNode* l3 = NULL;
        std::stack<int> s3;
        
        while(l1!=NULL || l2!=NULL || sum_flag == true)
        {
            if(l1==NULL)
            {
                // std::cout << "tmp1" << std::endl;
                ListNode * tmp1 = new ListNode(0);
                tmp1->next = l1;
                l1 = tmp1;
            }
            
            if(l2==NULL)
            {
                // std::cout << "tmp2" << std::endl;
                ListNode * tmp2 = new ListNode(0);
                tmp2->next = l2;
                l2 = tmp2;
            }
            
            if(sum_flag)
            {
                sum = l1->val + l2->val + 1; 
            }
            else
            {
                sum = l1->val + l2->val; 
            }
            
            sum_flag = false;
            
            if(sum >= 10)
            {
                sum_flag = true;
                sum = sum%10;
            }
            
            // std::cout << "sum: " << sum << std::endl;
            s3.push(sum);
            
            l1 = l1->next;
            l2 = l2->next;

        }
        
        while(!s3.empty())
        {
            // std::cout << "top: " << s3.top() << "\t";
            ListNode* tmp = new ListNode(s3.top());
            tmp->next = l3;
            l3 = tmp;
            s3.pop();
        }
        
        return l3;
    }
};
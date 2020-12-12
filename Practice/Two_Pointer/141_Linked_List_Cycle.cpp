//
//  main.cpp
//  Practice
//
//  Created by Zijian Zeng on 2020/12/12.
//


#include <iostream>
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    bool hasCycle(ListNode *head){
        if (head == NULL || head->next == NULL)
            return false;
        
        ListNode* fast = head;
        ListNode* slow = head;
        while( fast->next && fast->next->next){
            fast = fast->next->next;
            slow = slow->next;
            
            if(slow==fast){
                return true;
            }
        }
        
        return false;
    }
};


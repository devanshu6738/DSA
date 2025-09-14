/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *first=headA;
        ListNode *second=headB;
        int count1=0;
        int count2=0;
        int diff;
        while(first!=NULL){
            count1++;
            first=first->next;
        }
        while(second!=NULL){
            count2++;
            second=second->next;
        }
        first=headA;
        second=headB;
        if(count1>count2){
            diff=count1-count2;
            while(diff){
                first=first->next;
                diff--;
            }
        }else{
            diff=count2-count1;
             while(diff){
                second=second->next;
                diff--;
            }
        }
        while (first && second) {
            if (first == second) return first;
            first = first->next;
            second = second->next;
        }
        return NULL;

    }
};
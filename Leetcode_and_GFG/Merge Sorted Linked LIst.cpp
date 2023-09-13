#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp = new ListNode(0);
        ListNode* ans = temp;
        ListNode* l1 = list1;
        ListNode* l2 = list2;
        while(l1 && l2){
            if(l1->val > l2->val){
                temp->next = new ListNode(l2->val);
                l2 = l2->next;
            }
            else{
                temp->next = new ListNode(l1->val);
                l1 = l1->next;
            }
            temp = temp->next;
        }
        while(l1){
            temp->next = new ListNode(l1->val);
            l1 = l1->next;
            temp = temp->next;
        }
        while(l2){
            temp->next = new ListNode(l2->val);
            l2 = l2->next;
            temp = temp->next;
        }
        return ans->next;
    }
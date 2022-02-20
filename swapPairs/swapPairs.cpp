/*
URL: https://leetcode.com/problems/swap-nodes-in-pairs/
Given a linked list, swap every two adjacent nodes and return its head. You must solve the problem without modifying the values in the list's nodes (i.e., only nodes themselves may be changed.)

Example 1:

Input: head = [1,2,3,4]
Output: [2,1,4,3]
*/

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
#include<bits/stdc++.h>
using namespace std;

class Solution {
    
public:
    struct ListNode {
        int val=0;
        ListNode *next;
    };
                 
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL){return NULL;}

        if(head->next==NULL){return head;}

        ListNode* curr= head;
        ListNode* next=curr->next;
        curr->next= swapPairs(next->next);
        next->next= curr;
        return next;
    }

}
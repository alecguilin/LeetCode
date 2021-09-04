#include<iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {

        ListNode* dummy = new ListNode(-1);
        ListNode* head = dummy;

        while (l1 != nullptr && l2 != nullptr)
        {
            if (l1->val < l2->val) {
                dummy->next = l1;
                l1 = l1->next;
            }
            else {
                dummy->next = l2;
                l2 = l2->next;
            }
            dummy = dummy->next;
        }
        
        if(l1!=nullptr) {
            dummy->next = l1;
        }
        else {
            dummy->next = l2;
        }

        return head->next;
    }
};

void printList(ListNode*);

int main () {

    Solution* obj = new Solution;

    ListNode* l1 = new ListNode(1);
    l1->next = new ListNode(2);
    l1->next->next = new ListNode(4);

    cout << "printing l1: ";
    printList(l1);

    ListNode* l2 = new ListNode(1);
    l2->next = new ListNode(3);
    l2->next->next = new ListNode(4);

    cout << "printing l2: ";
    printList(l2);

    cout << "merging lists...\n";
    ListNode* mergedList = obj->mergeTwoLists(l1,l2);
    cout << "result: ";
    printList(mergedList);
}

void printList(ListNode* current) {
    while (current != nullptr) {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;
}
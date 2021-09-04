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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr != nullptr)
        {
            ListNode* nextTemp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextTemp;
        }
        
        return prev;
    }

    ListNode* reverseListRecursive(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;
        ListNode* p = reverseListRecursive(head->next);
        head->next->next = head;
        head->next = nullptr;
        return p;
    }

};

void print(ListNode*);

int main () {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);

    print(head);

    Solution* obj;
    print(obj->reverseListRecursive(head));
    
}

//print linked list
void print(ListNode *curr)
{
    while (curr != nullptr)
    {
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << endl;
}

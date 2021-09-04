#include<iostream>
#include<map>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    // slow method
    // bool hasCycle(ListNode *head) {
    //     map<ListNode*, int> myMap;
    //     if(head==nullptr) return false;
    //     while (head != nullptr)
    //     {
    //         // if next in map, cycle detected, return true
    //         if (myMap.count(head)) {
    //             return true;
    //         }
    //         // if next is not in map, then add to map
    //         else {
    //             myMap[head];
    //             head = head->next;
    //         }
    //     }
    //     return false;
    // }

    // fast method
    bool hasCycle(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return false;

        ListNode* slow = head;
        ListNode* fast = head->next;

        while (slow != fast) 
        {
            if (fast == nullptr || fast->next == nullptr) return false;
            slow = slow->next;
            fast = fast->next->next;
        }
        return true;
        
    }
};

int main () {
    ListNode* temp;
    ListNode* head = new ListNode(1);


    Solution* obj;
    cout << obj->hasCycle(head);
}
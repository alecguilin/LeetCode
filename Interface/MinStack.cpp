/*

Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

push(x) -- Push element x onto stack.
pop() -- Removes the element on top of the stack.
top() -- Get the top element.
getMin() -- Retrieve the minimum element in the stack.

Constraints: Methods pop, top and getMin operations will always be called on non-empty stacks.

*/

#include<iostream>
#include<stack>
using namespace std;

class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> s;
    stack<int> mini;
    MinStack() {}
    
    void push(int x) {
        s.push(x);
        if (s.size() > 1 ){
            mini.push(min(mini.top(),x));
        }
        else{
            mini.push(x);
        }
    }
    
    void pop() {
        s.pop();
        mini.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return mini.top();
    }
};

int main() {
    MinStack* stack = new MinStack();
    stack->push(1);
    stack->push(3);
    stack->push(-6);
    stack->push(9);
    stack->push(0);

    cout << "top element is: " << stack->top() << endl;
    
    stack->pop();

    cout << "top element is: " << stack->top() << endl;

    cout << "min element is: " << stack->getMin() << endl;

}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */






/*
Alternate Solution using created Node instead of Stack that is already defined

class MinStack {

    class Node {
        int val;
        int min;
        Node next;
        
        public Node(int val, int min, Node next) {
            this.val = val;
            this.min = min;
            this.next = next;
        }
    }
    
    private Node head;
    
    public MinStack() {
        head = null;
    }
    
    public void push(int x) { 
        head = head == null ? new Node(x, x, null) : new Node(x, Math.min(x, head.min), head);
    }
    
    public void pop() {
        head = head.next;
    }
    
    public int top() {
        return head.val;
    }
    
    public int getMin() {
        return head.min;
    }
}

*/
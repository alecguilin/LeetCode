public class ListNode {
    public int val;
    public ListNode next;
    public ListNode (int val = 0, ListNode next = null)
    {
        this.val = val;
        this.next = next;
    }
}

public class Solution {
    public static ListNode MergeTwoLists(ListNode l1, ListNode l2) {
        ListNode tempL;
        ListNode newL;
        ListNode prev, current, currentT;
        
        if (l1 == null || l2 == null)
        {
            if (l1 == null && l2 == null)
            {
                return l1;
            }
            if (l1 == null && l2 != null)
            {
                return l2;
            }
            if (l1 != null && l2 == null)
            {
                return l1;
            }
            if (l1 == null && l2 == null)
            {
                return l1;
            }
        }

        if (l1.val <= l2.val)
        {
            newL = l1;
            tempL = l2;
        }
        else
        {
            newL = l2;
            tempL = l1;
        }

        prev = newL;
        current = newL.next;
        currentT = tempL;
        while (currentT != null)
        {
            if (current == null)
            {
                //add rest of tempL to newL, then return newL
                prev.next = currentT;
                return newL;
            }
            else if (currentT.val <= current.val)
            {
                //insert bewtween prev and current
                prev.next = currentT;
                tempL = currentT.next;
                currentT.next = current;
                prev = currentT;
                currentT = tempL;
            }
            else
            {
                prev = current;
                current = current.next;
            }
        }

        return newL;
    }

    public static void PrintLL(ListNode head)
    {
        ListNode current = head;
        while (current != null)
        {
            Console.Write(current.val+" ");
            current = current.next;
        }
        Console.WriteLine();
    }

    public static void Main(string[] args)
    {
        ListNode head = new ListNode();
        ListNode head2 = new ListNode();

        //populate linked list
        ListNode current = head;
        for (int i = 1; i < 2; i++)
        {
            current.next = new ListNode();
            current.next.val = i;
            current = current.next;
        }

        //populate linked list 2
        ListNode current2 = head2;
        for (int i = 1; i < 3; i++)
        {
            current2.next = new ListNode();
            current2.next.val = i;
            current2 = current2.next;
        }

        //print lists
        PrintLL(head);
        PrintLL(head2);

        //merge two sorted lists
        ListNode mergedList = MergeTwoLists(head, head2);

        //print new merged list
        PrintLL(mergedList);
    }
}

Solution.Main(null);
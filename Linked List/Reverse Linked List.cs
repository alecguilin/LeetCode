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
    public static ListNode ReverseList(ListNode head) {
        ListNode prev = null;
        ListNode curr = head;
        while (curr != null) {
            ListNode nextTemp = curr.next;
            curr.next = prev;
            prev = curr;
            curr = nextTemp;
        }
        return prev;
    }

    public static void PrintLL(ListNode head)
    {
        ListNode current = head;
        while (current != null)
        {
            Console.Write(current.val+" ");
            //Console.Write(&current+" ");
            current = current.next;
        }
        Console.WriteLine();
    }

    public static void Main(string[] args)
    {
        ListNode head = new ListNode();

        //populate linked list
        ListNode current = head;
        for (int i = 1; i < 6; i++)
        {
            current.next = new ListNode();
            current.next.val = i;
            current = current.next;
        }

        //print list
        PrintLL(head);

        //reverse linked list
        ListNode revList = ReverseList(head);

        //print list
        PrintLL(revList);
    }
}

Solution.Main(null);
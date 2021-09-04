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
    public static bool HasCycle(ListNode head) {
        var map = new Dictionary<ListNode, int>();
        while (head!=null)
        {
            if (!map.ContainsKey(head))
            {
                map.Add(head, 0);
                map[head]++;
            }
            else
            {
                return true;
            }
            head = head.next;
        }
        return false;
    }

    public static bool SlowFast(ListNode head)
    {
        ListNode slow = head;
        ListNode fast = head.next;

        while (slow != fast)
        {
            if (fast == null || fast.next == null)
            {
                return false;
            }
            slow = slow.next;
            fast = fast.next.next;
        }

        return true;
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
        ListNode start = new ListNode();
        start.next = head;

        //populate linked list
        ListNode current = head;
        for (int i = 1; i < 6; i++)
        {
            current.next = new ListNode();
            current.next.val = i;
            current = current.next;
        }
        current.next = head; //creating cycle

        if (SlowFast(head))
        {
            Console.WriteLine("has cycle");
        }
        else
        {
            Console.WriteLine("no cycle");
        }
    }
}

Solution.Main(null);
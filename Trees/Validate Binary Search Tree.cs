public class TreeNode {
    public int val;
    public TreeNode left;
    public TreeNode right;
    public TreeNode (int val = 0, TreeNode left=null, TreeNode right=null) {
        this.val = val;
        this.left = left;
        this.right = right;
    }
}

public class Solution {
    public static bool IsValidBST(TreeNode root) {
        Stack<TreeNode> myStack = new Stack<TreeNode>();
        double leftChildVal = - Double.MaxValue;

        while (myStack.Count != 0 || root != null)
        {
            while (root != null)
            {
                Console.WriteLine("pushing {0}",root.val);
                myStack.Push(root);
                root = root.left;
            }

            //Console.WriteLine("popping {0}", root.val);
            root = myStack.Pop();
            Console.WriteLine("popping {0}", root.val);
            Console.WriteLine("is {0} <= {1} ?", root.val, leftChildVal);
            if (root.val <= leftChildVal) return false;
            leftChildVal = root.val;
            root = root.right;
            if (root!=null) Console.WriteLine("root is now root.right : {0}", root.val);
            else Console.WriteLine("root is null");
        }
        return true;
    }

    public static void Main(string[] args)
    {
        TreeNode root = new TreeNode(5);
        root.left = new TreeNode(1);
        root.right = new TreeNode(9);
        root.right.left = new TreeNode(7);
        root.right.right = new TreeNode(10);
        Console.WriteLine(IsValidBST(root));
    }
}

Solution.Main(null);
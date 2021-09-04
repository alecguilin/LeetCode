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
    public static int MaxDepth(TreeNode root) {

        //if root is null it means tree does not exist, return 0
        if (root == null) {
            return 0;
        }

        //traverse through left side of tree, then right side of tree
        int leftDepth = MaxDepth(root.left);
        int rightDepth = MaxDepth(root.right);

        //compare both sides and return the larger value
        if (leftDepth > rightDepth) {
            return leftDepth + 1;
        }
        else {
            return rightDepth + 1;
        }
    }

    public static void Main(string[] args)
    {
        TreeNode root = new TreeNode();
        root.left = new TreeNode();
        root.right = new TreeNode();
        root.right.right = new TreeNode();
        root.right.right.left = new TreeNode();
        Console.WriteLine("The maximum depth is {0}.", MaxDepth(root));
    }
}

Solution.Main(null);
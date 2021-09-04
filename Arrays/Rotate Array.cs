public class Solution {
    public static void Rotate(int[] nums, int k) {
        List<int> list = new List<int>();
        List<int> list2 = new List<int>();
        // handle if k > n meaning that for whole number whole thing will be rotated
        if(k > nums.Length) {
            k = k % nums.Length;
        }
        for (int i = nums.Length-k; i < nums.Length; i++)
        {
            list.Add(nums[i]);
        }
        for (int i = 0; i < nums.Length-k; i++)
        {
            list2.Add(nums[i]);
        }

        for (int i = 0; i < list2.Count; i++)
        {
            list.Add(list2[i]);
        }
        
        

        
        
        list.ToArray();

        for (int i = 0; i < nums.Length; i++)
        {
            nums[i]=list[i];
        }

        //print array
        for (int i = 0; i < nums.Length; i++)
        {
            Console.Write(nums[i]+" ");
        }

    }

    public static void Main(string[] args)
    {
        int[] a1 = {-1, -100, 3, 99};
        Rotate(a1, 2); //should change array

        
    }
}

Solution.Main(null);
public class Solution {
    public static int[] TwoSum(int[] nums, int target) {
        int [] newArray = new int [2];

        for (int i = 0; i < nums.Length; i++)
        {
            Console.WriteLine("Selected: "+nums[i]);
            for (int j = i+1; j < nums.Length; j++)
            {
                Console.WriteLine("Scanning: "+nums[j]);
                if (nums[i] + nums[j] == target)
                {
                    Console.WriteLine("found");
                    newArray[0]=i;
                    newArray[1]=j;
                    return newArray;
                }
            }
        }

        return newArray;
    }

    public static void Main(string[] args)
    {
        int[] nums = {2,7,11,15};
        int[] ansr = TwoSum(nums, 9);

        for (int i = 0; i < ansr.Length; i++)
        {
            Console.WriteLine(ansr[i]);
        }
    }
}

Solution.Main(null);
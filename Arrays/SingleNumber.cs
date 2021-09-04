public class Solution {
    public static int SingleNumber(int[] nums) {

        var map = new Dictionary<int, int>();

        for (int i = 0; i < nums.Length; i++)
        {
            if (!map.ContainsKey(nums[i]))
            {
                map.Add(nums[i],0);
            }
            map[nums[i]]++;
        }

        foreach (var item in map)
        {
            if(item.Value==1){
                return item.Key;
            }

        }
        return 0;
    }
    
    public static void Main(string[] args)
    {       
        int[] a1 = {2,2,1};
        int[] a2 = {4,1,2,1,2};
        Console.WriteLine(SingleNumber(a2));

    }
}
Solution.Main(null);
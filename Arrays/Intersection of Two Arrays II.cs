public class Solution {
    public static int[] Intersect(int[] nums1, int[] nums2) {

        
        List<int> newList = new List<int>();
        List<int> nums2List = new List<int>();

        for (int i = 0; i < nums2.Length; i++)
        {
            nums2List.Add(nums2[i]);
        }

        bool found = false;
        for (int i = 0; i < nums1.Length && nums2List.Any(); i++)
        {
            found=false;
            //Console.WriteLine("selected: "+nums1[i]);
            for (int j=0; j<nums2List.Count&&!found;j++)
            {
                //Console.WriteLine("scanning: "+nums2List[j]);
                if (nums1[i] == nums2List[j])
                {
                    //found
                    newList.Add(nums1[i]);
                    //Console.WriteLine("removing: "+nums2List[j]);
                    nums2List.RemoveAt(j);
                    found = true;
                    
                    
                }
            }
        }
        return newList.ToArray();
    }

    public static void Main(string[] args)
    {
        int[] nums1 = {4, 9, 5}, nums2 = {9,4,9,8,4};
        int[] newArray = Intersect(nums1, nums2);
        
        for (int i = 0; i < newArray.Length; i++)
        {
            Console.WriteLine(newArray[i]+" ");
        }

    }
}

Solution.Main(null);
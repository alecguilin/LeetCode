public class Solution {
    //remove static for leetcode
    public static int[] RelativeSortArray(int[] arr1, int[] arr2) {
        
        if(arr1 == null || arr1.Length == 0)
        {
            return new int[0];
        }
        
        //arr2 converted to hashset
        var hashset = new HashSet<int>(arr2); 
        
        //elements left over
        var list = new List<int>(); 
        
        //created dictionary to store elements for relativedSorted
        var map = new Dictionary<int, int>(); 
        
        for(int i = 0; i < arr1.Length; i++)
        {
            var current = arr1[i]; 
            if(!hashset.Contains(current))
            {
                list.Add(current); 
            }
            else 
            {
                Console.WriteLine("adding"+current);
                if(!map.ContainsKey(current))
                {
                    map.Add(current, 0); 
                }
                
                Console.WriteLine(map[current]++); 
            }
        }
        
        var relativedSorted = new List<int>();
        
        for(int i = 0; i < arr2.Length; i++ )
        {
            var visit = arr2[i];
            var count = map[visit];
            
            for(int j = 0; j < count; j++)
            {
                relativedSorted.Add(visit); 
            }
        }
        
        list.Sort(); 
        foreach(var item in list)
        {
            relativedSorted.Add(item); 
        }
        
        return relativedSorted.ToArray();
    }

    //prints array for debugging purposes
    public static void PrintArray(int[] array)
    {
        Console.WriteLine("printing array...");
        Console.Write("[");
        for (int i = 0; i < array.Length; i++)
        {
            if (array[i] != 0)
            {
                Console.Write(array[i]+",");
            }
        }
        Console.WriteLine("]");
    }
    
    public static void Main(string[] args)
    {       
        int[] a1 = {2,3,1,3,2,4,6,7,9,2,19};
        int[] a2 = {2,1,4,3,9,6};
        PrintArray(RelativeSortArray(a1, a2)); // expected output: [2,2,2,1,4,3,3,9,6,7,19]
    }
}

Solution.Main(null);
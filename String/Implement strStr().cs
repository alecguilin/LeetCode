public class Solution {
    public static int StrStr(string haystack, string needle) {
        int flag = -1;
        bool found = false;

        // if needle string is empty, return 0 (consistent with StrStr method)
        if (String.IsNullOrEmpty(needle))
        {
            return 0;
        }

        // if needle is bigger than haystack, return -1 because it is impossible to be in haystack
        if (needle.Length > haystack.Length)
        {
            return -1;
        }

        // if needle and haystack are both one char long, check if it is the same
        if (needle.Length == 1 && haystack.Length == 1)
        {
            if (needle[0] == haystack[0])
            {
                return 0;
            }
            else
            {
                return -1;
            }
        }

        //start traversing through haystack
        for (int j = 0; j < haystack.Length && !found; j++)
        {
            Console.WriteLine("traversing through haystack...");
            Console.WriteLine("is {0} == {1}?", needle[0], haystack[j]);
            if (needle[0] == haystack[j])
            {
                Console.WriteLine("{0} matches {1}", needle[0], haystack[j]);
                if (j != haystack.Length-1){
                    found = true;
                }
                flag = j;
                Console.WriteLine("traversing through needle...");
                for (int i = 1, k = j+1; i < needle.Length && k < haystack.Length; i++, k++)
                {
                    Console.WriteLine("{0} != {1}?", needle[i], haystack[k]);
                    if (needle[i] != haystack[k])
                    {
                        Console.WriteLine("{0} did not match {1}. found set to false", needle[i], haystack[k]);
                        //j++;
                        found = false;
                        break;
                    }
                    Console.WriteLine("{0} match {1}", needle[i], haystack[k]);
                }
                //return flag;
            }
        }
        if (needle.Length > haystack.Length-flag)
        {
            found = false;
        }


        if (found)
        {
            return flag;
        }
        else
        {
            return -1;
        }

    }

    public static void Main(string[] args)
    {
        Console.WriteLine(StrStr("mississippi", "issi"));
    }
}

Solution.Main(null);
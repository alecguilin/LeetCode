public class Solution {
    public static int FirstUniqChar(string s) {

        var map = new Dictionary<char, int>();
        bool found=false;

        //if string length is 1, return 0 index
        if (s.Length ==1)
        {
            return 0;
        }

        //start traversing through string
        for (int i = 0; i < s.Length; i++)
        {
            Console.WriteLine("Selected: "+s[i]);

            //if character is already mapped, skip to next character
            if (!map.ContainsKey(s[i]))
            {
                //start scanning characters to compare with selected
                for (int j = i+1; j < s.Length && !found; j++)
                {
                    Console.WriteLine("Scanning: "+s[j]);

                    //found matching character if true
                    if (s[i]==s[j])
                    {
                        Console.WriteLine("Found a match, adding {0} to map...", s[i]);
                        if (!map.ContainsKey(s[i]))
                        {
                            map.Add(s[i],0);
                        }
                        Console.WriteLine(map[s[i]]++);
                        found = true;
                    }
                }
                if(!found)
                {
                    if (map.ContainsKey(s[i]))
                    {
                        if (map[s[i]] < 1)
                        {
                            return i;
                        }
                    }
                    else
                    {
                        return i;
                    }
                }
                //set found back to false for next loop iteration
                found = false;
            }
        }

        //if no unique characters were found, return -1
        return -1;
    }

    public static void Main(string[] args)
    {
        string s = "dddccdbba", s2 = "az";
        Console.WriteLine("First unique character is (index): "+FirstUniqChar(s));
    }
}

Solution.Main(null);
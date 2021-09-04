public class Solution {
    public static int MyAtoi(string str) {
        List<char> charList = new List<char>();
        int start = 0;
        int operatorCount = 0;

        //eliminate initial whitespaces
        for (int index = 0; index < str.Length; index++)
        {
            if (str[index]==' ')
            {
                start++;
            }
            else
            {
                break;
            }
        }
        
        //start traversing through list from start index (after whitespaces eliminated)
        for (int i=start; i < str.Length; i++)
        {
            Console.WriteLine("SELECTED: "+str[i]);
            //if invalid character, break out of loop
            if (str[i] != '+' && str[i] != '-' && (str[i] < '0' || str[i] > '9'))
            {
                Console.WriteLine("invalid token detected... exiting for loop...");
                break;
            }
            else
            {
                if (str[i] == '+' || str[i] == '-')
                {
                    if (operatorCount>1 || charList.Count > 0)
                    {
                        break;
                    }
                    operatorCount++;
                    if (str[i] == '-')
                    {
                        Console.WriteLine("- detected... ");
                        ////add str[i] to list (-)
                        charList.Add(str[i]);
                    }
                }
                else
                {
                    Console.WriteLine("adding... "+str[i]);
                    //add str[i] to list (number)
                    charList.Add(str[i]);
                }              
            }
        }

        if (charList.Count > 0 && operatorCount<2)
        {
            if(charList.Count == 1 && (charList[0] == '-' || charList[0] == '+'))
            {
                return 0;
            }
            string myString = new string(charList.ToArray());
            if (double.Parse(myString) < -2147483648)
            {
                return Int32.MinValue;
            }
            else if (double.Parse(myString) > 2147483647)
            {
                return Int32.MaxValue;
            }
            else
            {
                Console.WriteLine("returning number....");
                return int.Parse(myString);
            }

        }
        else
        {
            return 0;
        }
        
    }

    public static void Main(string[] args)
    {
        Console.WriteLine(MyAtoi("0-1"));
    }
}

Solution.Main(null);
public class Solution {
    public void ReverseString(char[] s) {
        char temp;

        for (int i = 0; i < s.Length/2; i++)
        {
            temp = s[i];
            s[i] = s[s.Length-(i+1)];
            s[s.Length-(i+1)] = temp;
        }
    }
}
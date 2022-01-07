class Solution
{
    String colName (long n)
    {
        String ans = "";
        while(n > 0){
            char a =((char)((n-1)%26));
            int d = a+'A';
            char c = (char)d;
            ans  = Character.valueOf(c).toString() + ans;
            n = (n-1)/26;
        }
        return ans;
    }
}

// Had to copy the array as sort comparator doesn't support primitive objects

class Solution {
    void matchPairs(char nuts[], char bolts[], int n) {
        Character []chars = new Character[n];
        for(int i=0;i<n;i++)
        {
            chars[i] = new Character(nuts[i]);
        }
        Arrays.sort(chars,new Comparator<Character>(){
            String s = "!#$%&*@^~";
            public int compare(Character c1,Character c2){
                return s.indexOf(c1)-s.indexOf(c2);
            }
            
        });
        for(int i=0;i<n;i++)
        {
            nuts[i] = bolts[i] = chars[i].charValue();
        }
    }
}

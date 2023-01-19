class Solution {
    public int strStr(String haystack, String needle) {
        if(haystack==null || needle==null || needle.length()>haystack.length())
            return -1;
        if(needle.length()==0)
            return 0;
        for(int i=0;i<haystack.length()-needle.length()+1;i++)
        {
            if(haystack.charAt(i)==needle.charAt(0))
            {
                if(haystack.substring(i,needle.length()+i).equals(needle))
                    return i;
            }
        }
        return -1;
    }
}
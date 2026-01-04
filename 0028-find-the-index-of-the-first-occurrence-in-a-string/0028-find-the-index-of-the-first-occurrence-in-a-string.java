class Solution {
    public int strStr(String h, String n) {
        if(h.contains(n)) {
            return h.indexOf(n);
        }
        return -1;
    }
}
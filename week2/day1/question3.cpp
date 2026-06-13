class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int a[26]={0};
        for (char c: magazine){
            a[c-'a']++;
        }
        for (char h:ransomNote){
            a[h-'a']--;
            if (a[h-'a']<0) return false;
         }
        return true; 
    }
};

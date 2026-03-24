// Given two strings s1 and s2 in lowercase, the task is to make them anagrams. The only allowed operation is to remove a character from any string. Find the minimum number of characters to be deleted to make both the strings anagram. Two strings are called anagrams of each other if one of them can be converted into another by rearranging its letters.

// Examples:

// Input: s1 = "bcadeh", s2 = "hea"
// Output: 3
// Explanation: We need to remove b, c and d from s1.
// Input: s1 = "cddgk", s2 = "gcd"
// Output: 2
// Explanation: We need to remove d and k from s1.

class Solution {
  public:
    int remAnagram(string &str1, string &str2) {
    int arr1[26]={0};
    int arr2[26]={0};
    int n1=str1.size();
    int n2=str2.size();
    for(int i=0;i<n1;i++){
        arr1[str1[i]-'a']++;
    }
    for(int i=0;i<n2;i++){
        arr2[str2[i]-'a']++;
    }
    int count=0;
    for(int i=0;i<26;i++){
        if((arr1[i]>0) && (arr2[i]>0)){
            if(arr1[i]>arr2[i]){
                count+=arr1[i]-arr2[i];
            }
            if(arr1[i]<arr2[i]){
                count+=arr2[i]-arr1[i];
            }
        }else if(arr1[i]>0 && arr2[i]==0){
            count+=arr1[i];
        }else{
            count+=arr2[i];
        }
    }
    return count;
        
    }
};
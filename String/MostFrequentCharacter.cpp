// Given a string s of lowercase alphabets. The task is to find the maximum occurring character in the string s. If more than one character occurs the maximum number of times then print the lexicographically smaller character.

// Examples:

// Input: s = "testsample"
// Output: 'e'
// Explanation: 'e' is the character which is having the highest frequency.
// Input: s = "output"
// Output: 't'
// Explanation: 't' and 'u' are the characters with the same frequency, but 't' is lexicographically smaller.

#include<iostream>
#include<cstring>
using namespace std;

char getMaxOccuringChar(char* str) {
    int arr[26]={0};
    int n=strlen(str)-1;
    for(int i=0;i<=n;i++){
        arr[str[i]-'a']++;
    }
    int max=0;
    char min='a';
    for(int i=0;i<26;i++){
        if(arr[i]>max){
            max=arr[i];
            min='a'+i;
        }
        if(arr[i]==max){
            if(min>('a'+i)){
                min='a'+i;
            }
        }
    }
    return min;
    
}

int main(){
    char str[]="Devanshuuuuuuaaaaa";
    char s=getMaxOccuringChar(str);
    cout<<s;
}
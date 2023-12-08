#include <iostream>
#include<string>
#include <map>
using namespace std;
int main(){
    string s = "aaabbbcAABZZ";
    int length = s.length();
    cout<<s;
    // int large[52]={0};
    // //int small[26]={0};
    // for(int i=0;i<length;i++){
    //     if(s[i]>= 'A' && s[i]<= 'Z' ){
    //         int value = s[i]-'A';
    //         large[value+26]++;
    //     }
    //     else{
    //         int value = s[i]-'a';
    //         large[value]++;
    //     }
    // }
    // for(int i=0;i<52;i++){
    //     if(large[i]!=0 && i >= 0 && i<=25){
    //     cout<<(char)(i+'a')<<" ";
    //     cout<<large[i]<<"\n";
    //     }else if(large[i]!=0){
    //         cout<<(char)((i+'A'))<<" ";
    //         cout<<large[i]<<"\n";
    //     }
    // }
    // for(int i=0;i<26;i++){
    //     if(large[i]!=0){
    //     cout<<(char)(i+'A')<<" ";
    //     cout<<large[i]<<"\n";
    //     }
    // }
    
    // for(int i=0;i<52;i++){
    //     if(i<26 && large[i]){
    //         cout<<char(i+'a')<<" "<<large[i]<<"\n";
    //     } else if(large[i]){
    //         cout<<char(i+'A'-26)<<" "<<large[i]<<"\n";
    //     }
    // }
    
    return 0;
}

#include <iostream>
#include <string>
using namespace std;
bool isSame(int f1[],int f2[]){
    for(int i=0;i<26;i++){
        if(f1[i]!=f2[i]){
            return false;
        }
    }
    return true;
}
bool checkInclusion(string s1, string s2) {
    int freq[26]={0},windLen=s1.length();
    for(int i=0;i<s1.length();i++){
        freq[s1[i]-'a']++;
    }
    for(int j=0;j<s2.length();j++){
        int winIdex=0,idx=j,winFreq[26]={0};
        while(winIdex<windLen && idx<s2.length()){
            winFreq[s2[idx]-'a']++;
            winIdex++,idx++;
        }
        if(isSame(freq,winFreq)==true){
            return true;
        }
    }
    return false;

    
}
int main(){
    string s1="ab";
    string s2="obdooeiba";
    cout<<checkInclusion(s1,s2);

    return 0;
}
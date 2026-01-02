//reverse word in string

// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;
// string reverseWords(string s) {
//     reverse(s.begin(),s.end());
//     string ans="";
//     for(int i=0;i<s.length();i++){
//         string word="";
//         while(s[i]!=' ' && i<s.length()){
//             word+=s[i];
//             i++;
//         }
//         if(word.length()>0){
//             reverse(word.begin(),word.end());
//             ans=ans+' '+word;
//         }
//     }
//     return ans.substr(1);

// }
// int main(){
//     string s="pen is red";
//     cout<<reverseWords(s);
//     return 0;
// }
// find if a string is palindrome or not

// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;
// bool non_alphaNumeric(char str){
//     if((str>='0' && str<='9') || (tolower(str)>='a' && tolower(str)<='z')){
//         return true;
//     }else{
//         return false;
//     }

// }
// bool isPalindrome(string s){
//     int st=0,end=s.length()-1;
//     while(st<end){
//         bool check = non_alphaNumeric(s[st]);
//         bool ch= non_alphaNumeric(s[end]);
//         if(check==true && ch==true){
//             if(tolower(s[st])==tolower(s[end])){
//                 st++,end--;
//             }else{
//                 return false;
//             }
//         }else{
//             if(check==false){
//                 st++;
//             }
//             if(ch==false){
//                 end--;
//             }
//         }
//     }
//     return true;
// }
// int main(){
//     string s;
//     cout<<"enter a str: ";
//     getline(cin,s);
//     bool ans=isPalindrome(s);
//     if(ans==true){
//         cout<<"it is palindrome";
//     }else{
//         cout<<"it is not palindrome";
//     }
//     return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;
// string removeOccurrences(string s, string part) {
//     while(s.length()>0 && s.find(part)<s.length()){
//         s.erase(s.find(part),part.length());
//     }   
//     return s;
// }
// int main(){
//     string s="abcabcabcb";
//     string part="abc";
//     cout<<removeOccurrences(s,part);
//     return 0;
// }
// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;
// int compress(vector<char> &chars) {
//     int idx=0,n=chars.size();
//     for(int i=0;i<n;i++){
//         char ch=chars[i];
//         int count=0;
        
//         while(i<n && ch==chars[i]){
//             count++;
//             i++;
//         }
//         if(count==1){
//             chars[idx++]=ch;
//         }else{
//             chars[idx++]=ch;
//             string s=to_string(count);
//             for(char dig:s){
//                 chars[idx++]=dig;
//             }
//         }
//         i--;
//     }
//     chars.resize(idx);
//     return chars.size();

// }

// int main(){
//     vector<char>chars={'a','a','b','b','c','c','c'};
//     cout<<compress(chars);
//     return 0;
// }
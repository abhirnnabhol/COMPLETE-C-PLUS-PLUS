// character array

// #include <iostream>
// #include <cstring>
// using namespace std;
// int main(){
//     char str[]={'a','b','h','i','r','n','n','a','\0'};
//     char college[]="vit";
//     cout<<str<<endl;
//     cout<<college<<endl;
//     cout<< strlen(str)<<endl;
//     cout<< strlen(college)<<endl;
//     return 0;
// }

// #include <iostream>
// #include <cstring>
// using namespace std;
// int main(){
//     char str[100];
//     cout<<"enter a name : ";
//     cin.getline(str,100,'.');
//     cout<<str<<endl;
//     return 0;
// }

// #include <iostream>
// #include <cstring>
// using namespace std;
// int main(){
//     int len=0;
//     char str[]="abhirnna is a good boy";
//     for(char ch:str){
//         cout<<ch<<" ";
//     }
//     cout<<endl;
//     for(int i=0;str[i]!='\0';i++){
//         len++;
//     }
//     cout<<len<<endl;
//     return 0;

// }

//string in c++

// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     string name="abhirnna";
//     string surname="bhol";
//     string full_name=name+surname;// concatenation
//     cout<<name.length()<<endl;
//     cout<<name<<endl;
//     cout<<surname<<endl;
//     cout<<full_name<<endl;
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     string name;
//     cout<<"enter a name: ";
//     getline(cin,name);
//     cout<<name<<endl;
//     return 0;
// }

//loop

// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     string name="abhirnna bhol";
//     for(int i=0;i<name.length();i++){
//         cout<<name[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     string name="abhirnna bhol";
//     for(char ch:name){
//         cout<<ch<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

//reverse a string

// #include <iostream>
// #include <vector>
// using namespace std;
// void reverseString(vector<char>& s) {
//     int st=0,end=s.size()-1;
//     while(st<end){
//         swap(s[st],s[end]);
//         st++,end--;

//     }
//     for(char i:s){
//         cout<<i;
//     }
//     cout<<endl;
        
// }
// int main(){
//     vector<char>s={'h','e','l','l','o'};
//     reverseString(s);
//     return 0;
// }  

// #include <iostream>
// #include <algorithm>
// #include <string>
// using namespace std;
// int main(){
//     string name ="abhirnna bhol";
//     reverse(name.begin(),name.end());
//     cout<<name<<endl;
//     return 0;
// }  

// find if a string is palindrome or not

// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;
// bool isPalindrome(string corr_str){
//     string rev_str=corr_str;
//     reverse(rev_str.begin(),rev_str.end());
//     if(corr_str==rev_str){
//         return true;
//     }else{
//         return false;
//     }
// }
// int main(){
//     string str;
//     cout<<"enter a str: ";
//     getline(cin,str);
//     bool ans=isPalindrome(str);
//     if(ans==true){
//         cout<<"it is palindrome";
//     }else{
//         cout<<"it is not palindrome";
//     }
//     return 0;
// }
//prime number

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number: ";
//     cin>>n;
//     bool isPrime=true;
//     for(int i=2;i*i<=n;i++){
//         if(n%i==0){
//             isPrime=false;
//             break;
//         }
//     }
//     if(isPrime==true){
//         cout<<"prime number. ";
//     }else{
//         cout<<"not prime number. ";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// void Prime(int n){
//     bool isPrime=true;
//     for(int i=2;i*i<=n;i++){
//         if(n%i==0){
//             isPrime=false;
//             break;
//         }
//     }
//     if(isPrime==true){
//         cout<<n<<" ";
//     }
// }
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     for(int i=2;i<=n;i++){
//         Prime(i);
//     }
//     return 0;
// }

//sieve of eratosthenes

// #include <iostream>
// #include <vector>
// using namespace std;
// int countPrimes(int n){
//     vector<bool>isPrime(n+1,true);
//     int count=0;
//     for(int i=2;i<n;i++){
//         if(isPrime[i]==true){
//             count++;
//         }
//         for(int j=i*2;j<n;j=j+i){
//             isPrime[j]=false;
//         }
//     }
//     return count;
// }
// int main(){
//     int n;
//     cout<<"enter a number: ";
//     cin>>n;
//     cout<<countPrimes(n);
//     return 0;
// }

//digits in a number
//return the same digit

// #include <iostream>
// using namespace std;
// int sumDigit(int n){
//     int sum=0,power=1;
//     while(n>0){
//         int lastDigit=n%10;
//         sum=sum+(power*lastDigit);
//         power=power*10;
//         n=n/10;
//     }
//     return sum;
// }
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     cout<<sumDigit(n)<<endl;
//     return 0;
// }

//sum
// #include <iostream>
// using namespace std;
// int sumDigit(int n){
//     int sum=0;
//     while(n>0){
//         int lastDigit=n%10;
//         sum=sum+lastDigit;
//         n=n/10;
//     }
//     return sum;
// }
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     cout<<sumDigit(n)<<endl;
//     return 0;
// }

//count

// #include <iostream>
// using namespace std;
// int sumDigit(int n){
//     int sum=0,count=0;
//     while(n>0){
//         int lastDigit=n%10;
//         count++;
//         n=n/10;
//     }
//     return count;
// }
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     cout<<sumDigit(n)<<endl;
//     return 0;
// }

//armstrong  153-->153

// #include <iostream>
// #include <cmath>
// using namespace std;
// void armstrong(int n){
//     int count=0,sum=0;
//     int a=n,b=n;
//     while(a>0){
//         int lastDigit=a%10;
//         count++;
//         a=a/10;
//     }
//     while(b>0){
//         int lastDigit=b%10;
//         sum=sum+round(pow(lastDigit,count));
//         b=b/10;
//     }
//     if(sum==n){
//         cout<<n<<" ,it is a armstrong"<<endl;
//     }else{
//         cout<<n<<" ,it is not a armstrong"<<endl;
//     }
// }
// int main(){
//     int n;
//     cout<<"enter a number: ";
//     cin>>n;
//     armstrong(n);
//     return 0;
// }

//GCD/HCF

// #include <iostream>
// using namespace std;
// int greatestCommonFactor(int n,int m){
//     int gcd=1;
//     if(n==0){
//         return m;
//     }
//     if(m==0){
//         return n;
//     }
//     for(int i=2;i<=min(n,m);i++){
//         if(n%i==0 && m%i==0){
//             gcd=i;
//         }
//     }
//     return gcd;
// }
// int main(){
//     int n,m;
//     cout<<"enter n: ";
//     cin>>n;
//     cout<<"enter m: ";
//     cin>>m;
//     cout<<greatestCommonFactor(n,m)<<endl;
//     return 0;
// }

//GCD---> euclid's algorithm

// #include <iostream>
// using namespace std;
// int greatestCommonFactor(int a,int b){
//     while(a>0 && b>0){
//         if(a>b){
//             a=a%b;
//         }else{
//             b=b%a;
//         }
//     }
//     if(a==0){
//         return b;
//     }
//     return a;
// }
// int main(){
//     int n,m;
//     cout<<"enter n: ";
//     cin>>n;
//     cout<<"enter m: ";
//     cin>>m;
//     cout<<greatestCommonFactor(n,m)<<endl;
//     return 0;
// }

//lcm

// #include <iostream>
// using namespace std;
// int greatestCommonFactor(int a,int b){
//     while(a>0 && b>0){
//         if(a>b){
//             a=a%b;
//         }else{
//             b=b%a;
//         }
//     }
//     if(a==0){
//         return -b;
//     }
//     return a;
// }
// int main(){
//     int n,m;
//     cout<<"enter n: ";
//     cin>>n;
//     cout<<"enter m: ";
//     cin>>m;
//     cout<<(n*m)/greatestCommonFactor(n,m)<<endl;
//     return 0;
// }

//reverse a number

// #include <iostream>
// using namespace std;
// int reverse(int n){
//     int revNum=0;    
//     while(n>0){
//         int lastDigit=n%10;
//         if(revNum>INT_MAX/10 || revNum<INT_MIN/10 ){
//             return 0;
//         }
//         revNum=(revNum*10)+lastDigit;
//         n=n/10;
//     }
//     return revNum;
// }
// int main(){
//     int n;
//     cout<<"enter a n: ";
//     cin>>n;
//     cout<<reverse(n);
//     return 0;
// }

//palindrome string

// #include <iostream>
// using namespace std;
// bool isAlphaNumeric(char n){
//     if(('0'<=n &&'9'>=n ) ||(tolower(n)>='a' && tolower(n)<='z')){
//         return true;
//     }
//     return false;
// }
// bool palindrome(string str){
//     int st=0,end=str.length()-1;
//     while(st<=end){
//         bool start= isAlphaNumeric(str[st]);
//         bool last= isAlphaNumeric(str[end]);
//         if(start==true && last==true){
//             st++,end--;
//         }else{
//             return false;
//         }
//         if(start==true && last==false){
//             end--;
//         }else if(start==false && last==true){
//             st++;
//         }else{
//             end--,st++;
//         }
//     }
//     return true;
// }
// int main(){
//     string st="Ac3?e3c&a";
//     bool val=palindrome(st);
//     if(val==true){
//         cout<<"it is a palindrome. ";
//     }else{
//         cout<<"it is not palindrome. ";
//     }
//     return 0;
// }

//palindrome number

// #include <iostream>
// using namespace std;
// bool palindrome(int n){
//     int r=n,rev_num=0;
//     while(r>0){
//         int lastDigit=r%10;
//         if(rev_num<INT_MIN/10 || rev_num>INT_MAX/10){
//             return false;
//         }
//         rev_num=(rev_num*10)+lastDigit;
//         r=r/10;
//     }
//     if(rev_num==n){
//         return true;
//     }else{
//         return false;
//     }
// }
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     bool val=palindrome(n);
//     if(val==true){
//         cout<<"it is a palindrome. ";
//     }else{
//         cout<<"it is not palindrome. ";
//     }
//     return 0;
// }
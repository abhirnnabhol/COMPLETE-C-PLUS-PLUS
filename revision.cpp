// FIND SUM OF TWO NUMBER A AND B

// #include <iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cout<<"enter a : ";
//     cin>>a;
//     cout<<"enter b : ";
//     cin>>b;
//     c=a+b;
//     cout<<c<<endl;
//     return 0;
    
// }

//AREA OF SQUARE

// #include <iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"enter a :";
//     cin>>a;
//     cout<<a*a<<endl;
//     return 0;
// }

//MIN OF TWO NUMBER

// #include <iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"enter a: ";
//     cin>>a;
//     cout<<"enter b: ";
//     cin>>b;
//     if(a>b){
//         cout<<"b is min "<<b<<endl;
//     }else{
//         cout<<"a is min "<<a<<endl;
//     }
//     return 0;
// }

// NUMBER IS ODD OR EVEN

// #include <iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"enter a :";
//     cin>>a;
//     if(a%2==0){
//         cout<<"it is a even number."<<endl;
//     }else{
//         cout<<"it is a odd number."<<endl;
//     }
//     return 0;
// }

//Sum of numbers from 1 to N

// #include <iostream>
// using namespace std;
// int main(){
//     int N,sum=0;
//     cout<<"enter N from which you need a sum from it : ";
//     cin>>N;
//     for(int i=0;i<=N;i++){
//         sum=sum+i;
//     }
//     cout<<sum<<endl;
//     return 0;
// }

//IS NUMBER IS A PRIME OR NOT

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number: ";
//     cin>>n;
//     bool isPrime=true;
//     for(int i=2;i*i<n;i++){
//         if(n%i==0){
//             isPrime=false;
//             break;
//         }
//     }
//     if(isPrime==true){
//         cout<<"it is a prime number "<<n<<endl;
//     }else{
//         cout<<"it is not a prime number "<<n<<endl;
//     }
//     return 0;
// }

//Calculate simple interest P,R,T

// #include <iostream>
// using namespace std;
// int main(){
//     int P,R,T;
//     cout<<"enter principal: ";
//     cin>>P;
//     cout<<"enter rate: ";
//     cin>>R;
//     cout<<"enter time: ";
//     cin>>T;
//     cout<<P*R*T<<endl;
//     return 0;
// }

//Calculate Max of two number

// #include <iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"enter a: ";
//     cin>>a;
//     cout<<"enter b: ";
//     cin>>b;
//     if(a>b){
//         cout<<"a is greater than b "<<a<<endl;
//     }else{
//         cout<<"b is greater than a "<<b<<endl;
//     }
//     return 0;
// }

//FACTORIAL OF A NUMBER

// #include <iostream>
// using namespace std;
// int main(){
//     int fact=1,n;
//     cout<<"enter n : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     cout<<fact<<endl;
//     return 0;
// }

//Driving license eligiblty criteria

// #include <iostream>
// using namespace std;
// int main(){
//     int age;
//     cout<<"enter a age : ";
//     cin>>age;
//     if(age>=18){
//         cout<<"you are eligible for driving license"<<endl;
//     }else{
//         cout<<"you are not eligible for driving licnese"<<endl;
//     }
//     return 0;
// }

// DATA TYPE

// #include <iostream>
// using namespace std;
// int main(){
//     int a=5;
//     char word='a';
//     bool cond=true;
//     float PI=3.14f;
//     double dec=45.67;
//     cout<<sizeof(a)<<","<<word<<","<<cond<<","<<PI<<","<<dec<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     char abc = 'a';
//     int num=abc;
//     cout<<num<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int abc=97;
//     char word=char(abc);
//     cout<<word<<endl;
//     return 0;
// }

//operator 

// #include <iostream>
// using namespace std;
// int calculator(int a,int b,char op){
//     if(op=='+'){
//         cout<<(a+b)<<endl;
//     }
//     else if(op=='-'){
//         cout<<(a-b)<<endl;
//     }
//     else if(op=='*'){
//         cout<<(a*b)<<endl;
//     }
//     else if(op=='/'){
//         cout<<(a/b)<<endl;
//     }
//     else{
//         cout<<(a%b)<<endl;
//     }
//     return 0;
// }
// int main(){
//     int a,b;
//     char op;
//     cout<<"enter a: ";
//     cin>>a;
//     cout<<"enter b: ";
//     cin>>b;
//     cout<<"enter op: ";
//     cin>>op;
//     calculator(a,b,op);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"enter a: ";
//     cin>>a;
//     cout<<"enter b: ";
//     cin>>b;
//     cout<<(a>b)<<endl;
//     cout<<(a<b)<<endl;
//     cout<<(a<=b)<<endl;
//     cout<<(a>=b)<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int a,b,c,d;
//     cout<<"enter a: ";
//     cin>>a;
//     cout<<"enter b: ";
//     cin>>b;
//     cout<<"enter c: ";
//     cin>>c;
//     cout<<"enter d: ";
//     cin>>d;
//     cout<<((a>b)&&(c>d))<<endl;
//     cout<<((a>b)||(c<d))<<endl;
//     cout<<!((a==b)&&(c>d))<<endl;
//     cout<<((a>b)&&(c>d))<<endl;
//     cout<<((a>b)||(c>d))<<endl;
//     cout<<(!(a>b)&&(c>d))<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int a=10;
//     cout<<a<<endl;//10
//     int b=a++;
//     cout<<b<<endl;//10
//     cout<<a<<endl;//11
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int a=10;
//     cout<<a<<endl;//10
//     int b=++a;
//     cout<<b<<endl;//11
//     cout<<a<<endl;//11
//     return 0;
// }

//check whether number is positive or negative

// #include <iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"enter num: ";
//     cin>>num;
//     if(num>=0){
//         cout<<"it is a positive number..";
//     }else{
//         cout<<"it is a negative number..";
//     }
//     return 0;
// }

// check whether user is eligible to give a vote or not

// #include <iostream>
// using namespace std;
// int main(){
//     int age;
//     cout<<"enter your age: ";
//     cin>>age;
//     if(age>=18){
//         cout<<"you can vote";
//     }else{
//         cout<<"you can't vote";
//     }
//     return 0;
// }

// grade of students

// #include <iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"enter num: ";
//     cin>>num;
//     if((100>=num) && (num>90)){
//         cout<<"A";
//     }else if((90>=num) && (num>80)){
//         cout<<"B";
//     }else if((80>=num) && (num>70)){
//         cout<<"C";
//     }else if((70>=num) && (num>60)){
//         cout<<"D";
//     }else if((60>=num) && (num>50)){
//         cout<<"E";
//     }else{
//         cout<<"F";
//     }
//     return 0;
// }

// check whether charcter is lowercase and uppercase

// #include <iostream>
// using namespace std;
// int main(){
//     char ch;
//     cout<<"enter ch: ";
//     cin>>ch;
//     if((ch>='a') && (ch<='z')){
//         cout<<"it is a lowercase"<<endl;
//     }else{
//         cout<<"it is a uppercase"<<endl;
//     }
//     return 0;
// }

//TERNARY STATEMENTS

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     n>=18?cout<<"you can vote":cout<<"you can't vote";
//     return 0;
// }

//print number from 1 to 5

// #include <iostream>
// using namespace std;
// int main(){
//     int n=1;
//     while(n<=5){
//         cout<<n<<endl;
//         n++;
//     }
//     return 0;
// }

//sum of number from 1 to n

// #include <iostream>
// using namespace std;
// int main(){
//     int sum=0;
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     for(int i=0;i<=n;i++){
//         sum=sum+i;
//     }
//     cout<<sum<<endl;
//     return 0;
// }

// sum of odd number from 1 to n

// #include <iostream>
// using namespace std;
// int main(){
//     int sum=0,n;
//     cout<<"enter n : ";
//     cin>>n;
//     for(int i=0;i<=n;i++){
//         if(i%2!=0){
//             sum=sum+i;
//         }
//     }
//     cout<<sum<<endl;
//     return 0;
// }

//sum of all even number from 1 to n using while loop

// #include <iostream>
// using namespace std;
// int main(){
//     int n,sum=0,i=1;
//     cout<<"enter n: ";
//     cin>>n;
//     while(i<=n){
//         if(i%2==0){
//             sum=sum+i;
//         }
//         i++;
//     }
//     cout<<sum<<endl;
//     return 0;
// }

//patten problem intro

//****
//**** 
//**** 
//**** 

// #include <iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cout<<"enter n(no of rows) : ";
//     cin>>n;
//     cout<<"enter m(no of columns) : ";
//     cin>>m;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//sum of all numbers from 1 to n that is divisible by 3

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     int sum=0;
//     cout<<"enter n: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         if(i%3==0){
//             sum=sum+i;
//         }
//     }
//     cout<<sum;
//     return 0;
// }

// fibonacci of a numbers 0,1,1,2,3,5,8,13,.....

// #include <iostream>
// using namespace std;
// int main(){
//     int a=0,b=1,c,n;
//     cout<<"enter nth term: ";
//     cin>>n;
//     cout<<0<<endl;
//     cout<<1<<endl;
//     for(int i=0;i<n-2;i++){
//         c=a+b;
//         cout<<c<<endl;
//         a=b;
//         b=c;
//     }
//     return 0;
// }

//patterns //213 //364
//1234
//1234
//1234
//1234

// #include <iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cout<<"enter n(no of rows): ";
//     cin>>n;
//     cout<<"enter m(no of columns): ";
//     cin>>m;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<j+1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//ABCD
//ABCD
//ABCD
//ABCD

// #include <iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cout<<"enter n : ";
//     cin>>n;
//     cout<<"enter m : ";
//     cin>>m;
//     for(int i=0;i<n;i++){
//         char ch='A';
//         for(int j=0;j<m;j++){
//             cout<<ch;
//             ch=ch+1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//123
//456
//789

// #include <iostream>
// using namespace std;
// int main(){
//     int n,m,num=1;
//     cout<<"enter n(no of rows) : ";
//     cin>>n;
//     cout<<"enter m(no of columns) : ";
//     cin>>m;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<num;
//             num=num+1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//ABC
//DEF
//GHI

// #include <iostream>
// using namespace std;
// int main(){
//     int n,m;
//     char ch='A';
//     cout<<"enter n: ";
//     cin>>n;
//     cout<<"enter m: ";
//     cin>>m;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<ch;
//             ch=ch+1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//*
//** 
//*** 
//****

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//1
//22
//333
//4444

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<i+1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//A
//BB
//CCC
//DDDD

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<char(i+65);
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//1
//12
//123
//1234

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n : ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<j+1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//5
//4
//3
//2
//1

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     for(int i=n;i>0;i--){
//         cout<<i<<endl;
//     }
//     return 0;
// }

//1
//21
//321
//4321

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n : ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j>0;j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//1
//23
//456
//78910

// #include <iostream>
// using namespace std;
// int main(){
//     int n,num=1;
//     cout<<"enter n: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<num;
//             num++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//A
//BC
//DEF
//GHIJ

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     char ch='A';
//     cout<<"enter n: ";
//     cin>>n;
//     for (int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<ch;
//             ch=ch+1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//A
//BA
//CBA
//DCBA

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=i;j>=0;j--){
//             char ch=j+65;
//             cout<<ch;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//1111
// 222
//  33
//   4

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         for(int j=n-i;j>0;j--){
//             cout<<i+1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//AAAA
// BBB
//  CC
//   D

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n :";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         char ch=65+i;
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         for(int j=n-i;j>0;j--){
//             cout<<ch;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//   1
//  12     1
// 123     21
//1234     321

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<=i;j++){
//             cout<<j+1;
//         }
//         for(int j=i;j>0;j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//   *
//  * *
// *   *
//*     *
// *   *
//  * *
//   *

// #include <iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cout<<"enter n: ";
//     cin>>n;
//     cout<<"enter m: ";
//     cin>>m;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         cout<<"*";
//         if(i!=0){
//             for(int j=0;j<(2*i)-1;j++){
//                 cout<<" ";
//             }
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<=i;j++){
//             cout<<" ";
//         }
//         cout<<"*";
//         if(i!=2){
//             for(int j=0;j<(2*(2-i))-1;j++){
//                 cout<<" ";
//             }
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;

// }

//*      * 6
//**    ** 4
//***  *** 2
//******** 0
//******** 0
//***  *** 2
//**    ** 4 
//*      * 6

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n : ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<"*";
//         }
//         for(int j=0;j<2*(3-i);j++){
//             cout<<" ";
//         }
//         for(int j=0;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i;j++){
//             cout<<"*";
//         }
//         for(int j=0;j<2*i;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<n-i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }

//void function

// #include <iostream>
// using namespace std;
// void hello(){
//     cout<<"hello";
// }
// int main(){
//     hello();
//     return 0;
// }

//sum of two numbers

// #include <iostream>
// using namespace std;
// int sum(int a,int b){
//     return a+b;
// }
// int main(){
//     int a,b;
//     cout<<"enter a : ";
//     cin>>a;
//     cout<<"enter b : ";
//     cin>>b;
//     cout<<sum(a,b);
//     return 0;
// }

//min of two numbers

// #include <iostream>
// using namespace std;
// int min(int a,int b){
//     if(a>b){
//         return b;
//     }else{
//         return a;
//     }
// }
// int main(){
//     int a,b;
//     cout<<"enter a : ";
//     cin>>a;
//     cout<<"enter b : ";
//     cin>>b;
//     cout<<min(a,b);
//     return 0;
// }

//calculate the sum of numbers from 1 to n

// #include <iostream>
// using namespace std;
// int sum(int n){
//     int s=0;
//     for(int i=1;i<=n;i++){
//         s=s+i;
//     }
//     return s;
// }
// int main(){
//     int n;
//     cout<<"enter n : ";
//     cin>>n;
//     cout<<sum(n);
//     return 0;
// }

//caculate N factorial


// #include <iostream>
// using namespace std;
// int fact(int n){
//     int factorial=1;
//     for(int i=1;i<=n;i++){
//         factorial=factorial*i;
//     }
//     return factorial;
// }
// int main(){
//     int n;
//     cout<<"enter n : ";
//     cin>>n;
//     cout<<fact(n);

// }

//pass by value

// #include <iostream>
// using namespace std;
// void changeX(int a){
//     a=a+5;
//     cout<<"in function: "<<a<<endl;
// }
// int main(){
//     int a=5;
//     changeX(a);
//     cout<<"main function: "<<a;
//     return 0;
// }

//cal sum of digit of a numbers. 123

// #include <iostream>
// using namespace std;
// int digitSum(int n){
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
//     cout<<"enter number : ";
//     cin>>n;
//     cout<<digitSum(n);
//     return 0;
// }

// calculate ncr for binary coefficients 

// #include <iostream>
// using namespace std;
// int factorial(int a){
//     int fact=1;
//     for(int i=1;i<=a;i++){
//         fact=i*fact;
//     }
//     return fact;
// }
// int binaryCoefficient(int n,int r){
//     int a= factorial(n);
//     int b = factorial(r);
//     int c = factorial(n-r);
//     int d=a/(b*c);
//     return d;
// }
// int main(){
//     int n,r;
//     cout<<"enter n: ";
//     cin>>n;
//     cout<<"enter r: ";
//     cin>>r;
//     cout<<binaryCoefficient(n,r);
//     return 0;
// }

//WAP TO CHECK IF A NUMBER IS PRIME OR NOT

// #include <iostream>
// using namespace std;
// void prime(int n){
//     bool isPrime=true;
//     for(int i=2;i*i<=n;i++){
//         if(n%2==0){
//             isPrime=false;
//             break;
//         }
//     }
//     if(isPrime==true){
//         cout<<"prime number."<<endl;
//     }else{
//         cout<<"non prime number."<<endl;
//     }
// }
// int main(){
//     int n;
//     cout<<"enter n : ";
//     cin>>n;
//     prime(n);
//     return 0;
// }

//WAP TO PRINT ALL THE PRIME NUMBER 2 TO N.

// #include <iostream>
// using namespace std;
// void prime(int n){
//     bool isPrime=true;
//     for(int i=2;i<n;i++){
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
//     cout<<"enter n :";
//     cin>>n;
//     for(int i=2;i<=n;i++){
//         prime(i);
//     }
//     return 0;
// }

//WAF TO PRINT A FIBONACCI SERIES 0,1,1,2,3,5,8,13....

// #include <iostream>
// using namespace std;
// void fibonacci(int n){
//     int a=0,b=1;
//     cout<<0<<endl;
//     cout<<1<<endl;
//     for(int i=0;i<n-2;i++){
//         int c=a+b;
//         cout<<c<<endl;
//         a=b;
//         b=c;
//     }
// }
// int main(){
//     int n;
//     cout<<"enter nth term: ";
//     cin>>n;
//     fibonacci(n);
//     return 0;
// }

//num to bin
//42 ----101010

// #include <iostream>
// using namespace std;
// int numToBin(int n){
//     int power=1,sum=0;
//     while(n>0){
//         int remainder=n%2;
//         sum=sum+(power*remainder);
//         power=power*10;
//         n=n/2;
//     }
//     return sum;
// }
// int main(){
//     int n;
//     cout<<"enter n : ";
//     cin>>n;
//     cout<<numToBin(n);
//     return 0;
// }

//1 to 10

// #include <iostream>
// using namespace std;
// int numToBin(int a){
//     int power=1,sum=0;
//     while(a>0){
//         int remainder=a%2;
//         sum=sum+(power*remainder);
//         power=power*10;
//         a=a/2;
//     }
//     return sum;
// }
// int main(){
//     for(int i=0;i<=10;i++){
//         cout<<numToBin(i);
//         cout<<endl;
//     }
//     return 0;
// }

//bin to num
//101010

// #include <iostream>
// using namespace std;
// int binToNum(int n){
//     int power=1,sum=0;
//     while(n>0){
//         int lastDigit=n%10;
//         sum=sum+(power*lastDigit);
//         power=power*2;
//         n=n/10;
//     }
//     return sum;
// }
// int main(){
//     int n;
//     cout<<"enter n :";
//     cin>>n;
//     cout<<binToNum(n);
//     return 0;
// }

// &,|,^,<<,>>

// #include <iostream>
// using namespace std;
// int main(){
//     int a=4,b=5;
//     cout<<(4&5)<<endl;//4
//     cout<<(4|5)<<endl;//5
//     cout<<(4^5)<<endl;//1
//     cout<<(4<<2)<<endl;//16
//     cout<<(4>>2)<<endl;//1
//     return 0;
// }

// long,long long, short

// #include <iostream>
// using namespace std;
// int main(){
//     cout<<sizeof(long int)<<endl;//4>
//     cout<<sizeof(long long int)<<endl;//8
//     cout<<sizeof(short int)<<endl;//2
//     return 0;
// }

// signed,unsigned

// signed ---> -2^31 to 2^31-1
// unsigned ---> 2^32-1

//figure out how to find if a number is power of 2 or not(loop /bits) --2,4,8,16,32

// #include <iostream>
// using namespace std;
// int check(int n){
//     int power=2;
//     while(power<=n){
//         if(power==n){
//             cout<<"yes"<<endl;
//             return 0;
//         }else{
//             power=power*2;
//         }
//     }
//     cout<<"no"<<endl;
//     return -1;
// }
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     check(n);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int a,power=2;
//     bool isPower=false;
//     cout<<"enter a: ";
//     cin>>a;
//     while(power<=a){
//         if(power==a){
//             isPower=true;
//             break;
//         }else{
//             power=power<<1;
//         }
//     }
//     if (isPower==true){
//         cout<<"power of 2 "<<endl;
//     }else{
//         cout<<"not power of 2"<<endl;
//     }
//     return 0;
// }

//reverse a number

// #include <iostream>
// using namespace std;
// int main(){
//     int n,sum=0,power=1;
//     cout<<"enter n : ";
//     cin>>n;
//     while(n>0){
//         int lastDigit=n%10;
//         cout<<lastDigit;
//         n=n/10;

//     }
//     return 0;
// }


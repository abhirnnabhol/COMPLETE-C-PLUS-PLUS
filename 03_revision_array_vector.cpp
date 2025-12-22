//store 5 marks and access 3rd marks and print 3rd marks

// #include <iostream>
// using namespace std;
// int main(){
//     int size=5;
//     int arr[5]={99,98,97,96,95};
//     cout<<arr[2]<<endl;
//     return 0;

// }

//loops in arrays

// #include <iostream>
// using namespace std;
// int main(){
//     int size=5;
//     int marks[5]={98,99,100,97,96};
//     for(int i=0;i<size;i++){
//         cout<<marks[i]<<endl;
//     }
//     return 0;
// }

//find smallest number in an array {5,15,22,1,-15,24}

// #include <iostream>
// using namespace std;
// int main(){
//     int size=6;
//     int arr[6]={5,15,22,1,-15,24};
//     int smallest=INT_MAX;
//     for(int i=0;i<size;i++){
//         if(smallest>=arr[i]){
//             smallest=arr[i];
//         }
//     }
//     cout<<smallest<<endl;
//     return 0;
// }

//FIND LARGEST NUMBER IN ARRAY

// #include <iostream>
// using namespace std;
// int main(){
//     int size=6;
//     int arr[6]={5,15,22,1,-15,24};
//     int largest=INT_MIN;
//     for(int i=0;i<size;i++){
//         if(largest<=arr[i]){
//             largest=arr[i];
//         }
//     }
//     cout<<largest<<endl;
//     return 0;
// }

//find the index of smallest and largest in an array {5,15,22,1,-15,-24}

// #include <iostream>
// using namespace std;
// int find(int largest,int smallest,int arr[],int size){
//     for(int i=0;i<size;i++){
//         if(arr[i]==largest){
//             cout<<i<<" largest index"<<endl;
//         }
//         if(arr[i]==smallest){
//             cout<<i<<" smallest index"<<endl;
//         }
//     }
//     return 0;
// }
// int main(){
//     int size=6;
//     int arr[size]={5,15,22,1,-15,-24};
//     int largest=INT_MIN,smallest=INT_MAX;
//     for(int i=0;i<size;i++){
//         largest=max(largest,arr[i]);
//         smallest=min(smallest,arr[i]);
//     }
//     find(largest,smallest,arr,size);
//     return 0;
// }

//arr[]={4,2,7,8,1,2,5} target=8 if find target print its index number or not find print -1

// #include <iostream>
// using namespace std;
// int find(int arr[],int size,int target){
//     for(int i=0;i<size;i++){
//         if(target==arr[i]){
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     int size=7;
//     int arr[size]={4,2,7,8,1,2,5};
//     int target=8;
//     cout<<find(arr,size,target);
//     return 0;

// }

// reverse an  array ={4,2,7,8,1,2,5}

// #include <iostream>
// using namespace std;
// int main(){
//     int size=7,i=0,j=size-1;
//     int arr[size]={4,2,7,8,1,2,5};
//     while(i<j){
//         swap(arr[i],arr[j]);
//         i++;
//         j--;
//     }
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<endl;
//     }
//     return 0;

// }

//WAF TO CALCULATE SUM AND PRODUCT OF ALL NUMBERS IN AN ARRAY

// #include <iostream>
// using namespace std;
// int calculate(int size,int arr[]){
//     int sum=0,product=1;
//     for(int i=0;i<size;i++){
//         sum=sum+arr[i];
//         product=product*arr[i];
//     }
//     cout<<"sum is : "<<sum<<endl;
//     cout<<"product is : "<<product<<endl;
//     return 0;
// }
// int main(){
//     int size=5;
//     int arr[5]={12,44,32,22,56};
//     calculate(size,arr);
//     return 0;
// }

//WAF TO SWAP THE MAX AND MIN NUMBER OF AN ARRAY

// #include <iostream>
// using namespace std;
// int find(int s,int arr[],int size){
//     for(int i=0;i<size;i++){
//         if(s==arr[i]){
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     int largest=INT_MIN,smallest=INT_MAX;
//     int size=5;
//     int arr[size]={90,95,44,94,63};
//     for(int i=0;i<size;i++){
//         largest=max(largest,arr[i]);
//         smallest=min(smallest,arr[i]);
//     }
//     int a=find(largest,arr,size);
//     int b=find(smallest,arr,size);
//     swap(arr[a],arr[b]);
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }

//WAF TO PRINT ALL THE UNIQUE VALUES IN AN ARRAY {1,2,3,4,5,6,5,4,3,2,1,6,9}

// #include <iostream>
// using namespace std;
// void find(int arr[],int size,int target){
//     int count=0;
//     for(int i=0;i<size;i++){
//         if(arr[i]==target){
//             count++;
//         }
        

//     }
//     if(count==1){
//         cout<<target<<" ";
//     }

// }
// int main(){
//     int size=13;
//     int arr[size]={1,2,3,4,5,9,6,5,4,5,2,1,6};
//     for(int i=0;i<size;i++){
//         find(arr,size,arr[i]);
//     }
    
//     return 0;

// }

//WAF TO PRINT INTERSECTION OF 2 ARRAYS

// #include <iostream>
// using namespace std;
// int main(){
//     int s1=4,s2=3;
//     int arr1[s1]={1,2,3,4};
//     int arr2[s2]={2,3,6};
//     for(int i=0;i<s2;i++){
//         for(int j=0;j<s1;j++){
//             if(arr2[i]==arr1[j]){
//                 cout<<arr1[j]<<endl;
//             }
//         }
//     }
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
    // vector<int>a={12,33,44,56,44};
//     vector<int>a(3,0);
//     cout<<a[0]<<endl;
//     return 0;
// }

//loops

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int>a={12,33,44,55,33};
//     for(int i:a){
//         cout<<i<<endl;
//     }
//     return 0;
// }

//size,push_back,pop_back,front,back,at,capacity

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int>a;
//     a.push_back(34);
//     a.push_back(22);
//     a.push_back(90);
//     cout<<a.size()<<endl;
//     cout<<a.capacity()<<endl;
//     a.pop_back();
//     cout<<a.front()<<endl;
//     cout<<a.back()<<endl;
//     cout<<a.at(0)<<endl;
//     return 0;
// }

//vector by pass by value

// #include <iostream>
// #include <vector>
// using namespace std;
// void check(vector<int> a){
//     cout<<"in function"<<endl;
//     for(int marks:a){
//         cout<<marks*10<<endl;
//     } 

// }
// int main(){
//     vector<int>a={90,98,97,96};
//     check(a);
//     cout<<"in main"<<endl;
//     for(int marks:a){
//         cout<<marks<<endl;
//     }
//     return 0;
// }


// #include <iostream>
// #include <vector>
// using namespace std;
// void subarray(vector<int> &arr){
//     for(int i=0;i<arr.size();i++){
//         for(int j=i;j<arr.size();j++){
//             for(int k=i;k<=j;k++){
//                 cout<<arr[k];
//             }
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     vector<int>arr={9,4,20,3,10,5};
//     subarray(arr);
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int sum(vector<int> &arr,int k){
//     int count=0;
//     for(int i=0;i<arr.size();i++){
//         int sum=0;
//         for(int j=i;j<arr.size();j++){
//             sum+=arr[j];
//             if(sum==k){
//                 count+=1;
//             }
//         }
//     }
//     return count;
// }
// int main(){
//     int target;
//     cout<<"enter a target: ";
//     cin>>target;
//     vector<int>arr={9,4,20,3,10,5};
//     cout<<sum(arr,target);
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// vector<int> sum(vector<int> &arr,int k){
//     vector<int>preffix(arr.size(),0);
//     for(int i=1;i<arr.size();i++){
//         preffix[i]=preffix[i-1]+arr[i-1];
//     }
//     return preffix;
// }
// int main(){
//     int target;
//     cout<<"enter a target: ";
//     cin>>target;
//     vector<int>arr={9,4,20,3,10,5};
//     vector<int>a=sum(arr,target);
//     for(int i:a){
//         cout<<i<<endl;
//     }
//     return 0;
// }

//logic-->count of subarray equal to k --->find all preffix of subarray-->
//use-->preffix[i-1]=preffix[j]-k ---> present at preffix array if yes count.

// #include <iostream>
// #include <vector>
// #include <unordered_map>
// using namespace std;
// int sum(int target,vector<int> &arr){
//     int count=0;
//     vector<int>preffix(arr.size(),0);
//     preffix[0]=arr[0];
//     for(int j=1;j<arr.size();j++){
//         preffix[j]=arr[j]+preffix[j-1];
//     }
//     unordered_map<int,int>m;
//     for(int i=0;i<preffix.size();i++){
//         if(preffix[i]==target){
//             count++;
//         }
//         int check=preffix[i]-target;
//         if(m.find(check)!=m.end()){
//                 count+=m[check];
//         }
//         if(m.find(preffix[i])==m.end()){
//             m[preffix[i]]=0;
//         }
//         m[preffix[i]]++;
          
//     }
//     return count;
// }
// int main(){
//     int target=0;
//     vector<int>arr={0,0,0};
//     cout<<sum(target,arr);
//     return 0;

// }

// #include <iostream>
// using namespace std;
// int main(){
//     int size=5;
//     int arr[size]={1,2,3,4,5};
//     cout<<arr[2]<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int size=5;
//     int arr[size]={1,2,3,4,5};
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }

//find smallest number in array

// #include <iostream>
// using namespace std;
// int main(){
//     int size=5,smallest=INT_MAX;
//     int arr[size]={5,2,3,4,1};
//     for(int i=0;i<size;i++){
//         smallest=min(smallest,arr[i]);
//     }
//     cout<<"smallest number is : "<<smallest<<endl;
//     return 0;
// }

//find the largest number in an array

// #include <iostream>
// using namespace std;
// int main(){
//     int size=5,maximum=INT_MIN;
//     int arr[size]={21,23,22,78,54};
//     for(int i=0;i<size;i++){
//         maximum=max(maximum,arr[i]);
//     }
//     cout<<maximum<<endl;
//     return 0;
// }

//find the index of smallest and largest in array - 5,15,22,1,-15,-24

// #include <iostream>
// using namespace std;
// void search(int smallest,int largest,int arr[],int size){
//     for(int i=0;i<size;i++){
//         if(smallest==arr[i]){
//             cout<<"smallest: "<<i<<endl;
//         }
//         if(largest==arr[i]){
//             cout<<"largest: "<<i<<endl;
//         }
//     }

// }
// int main(){
//     int size=6,smallest=INT_MAX,largest=INT_MIN;
//     int arr[size]={-5,15,22,1,-15,-24};
//     for(int i=0;i<size;i++){
//         smallest=min(smallest,arr[i]);
//         largest=max(largest,arr[i]);
//     }
//     search(smallest,largest,arr,size);
//     return 0;
// }

//pass by reference

// #include <iostream>
// using namespace std;
// void changeX(int arr[],int size){
//     for(int i=0;i<size;i++){
//         arr[i]=arr[i]*2;
//         cout<<arr[i]<<endl;
//     }
// }
// int main(){
//     int size=5;
//     int arr[size]={1,2,3,4,5};
//     changeX(arr,size);
//     return 0;

// }

//linear search {4,2,7,8,1,2,5} target 8 not found=-1

// #include <iostream>
// using namespace std;
// int search(int arr[],int size,int target){
//     for(int i=0;i<size;i++){
//         if(target==arr[i]){
//             return i;
//         }
//     }
//     return -1;

// }
// int main(){
//     int target;
//     cout<<"enter target: ";
//     cin>>target;
//     int size=7;
//     int arr[size]={4,2,7,8,1,2,5};
//     cout<<search(arr,size,target);
//     return 0;
// }

//reverse an array

// #include <iostream>
// using namespace std;
// void reverse(int size,int arr[]){
//     int st=0,end=size-1;
//     while(st<end){
//         swap(arr[st],arr[end]);
//         st++;
//         end--;
//     }
// }
// int main(){
//     int size=7;
//     int arr[size]={4,2,7,8,1,2,5};
//     reverse(size,arr);
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<",";
//     }
//     return 0;
// }

//WAP TO CALCULATE SUM AND PRODUCT OF ALL NUMBERS IN AN ARRAY

// #include <iostream>
// using namespace std;
// int main(){
//     int size=7,sum=0,mul=1;
//     int arr[size]={4,2,7,8,1,2,5};
//     for(int i=0;i<size;i++){
//         sum=sum+arr[i];
//         mul=mul*arr[i];
//     }
//     cout<<sum<<endl;
//     cout<<mul<<endl;
//     return 0;
// }

//WAP TO SWAP THE MAX AND MIN NUMBER OF AN ARRAY

// #include <iostream>
// using namespace std;
// int search(int target,int arr[],int size){
//     for(int i=0;i<size;i++){
//         if(target==arr[i]){
//             return i;
//         }

//     }
//     return -1;

// }
// int main(){
//     int size=6,smallest=INT_MAX,largest=INT_MIN;
//     int arr[size]={-5,15,22,1,-15,-24};
//     for(int i=0;i<size;i++){
//         smallest=min(smallest,arr[i]);
//         largest=max(largest,arr[i]);
//     }
//     int sm=search(smallest,arr,size);
//     int la=search(largest,arr,size);
//     swap(arr[sm],arr[la]);
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<",";
//     }
//     return 0;
// }

//WAP TO PRINT ALL THE UNIQUE VALUES IN AN ARRAY

// #include <iostream>
// using namespace std;
// int main(){
//     int size=6;
//     int arr[size]={2,2,3,4,1,2};
//     for(int i=0;i<size;i++){
//         int count=0;
//         for(int j=0;j<size;j++){
//             if(arr[i]==arr[j]){
//                 count++;
//             }
//         }
//         if(count==1){
//             cout<<arr[i]<<",";
//         }
//     }
//     return 0;

// }

// #include <iostream>
// using namespace std;
// int main(){
//     int size=5;
//     int arr1[size]={1,2,3,4,5};
//     int arr2[size]={3,4,5,6,7};
//     for(int i=0;i<size;i++){
//         for(int j=0;j<size;j++){
//             if(arr1[i]==arr2[j]){
//                 cout<<arr1[i]<<",";
//             }
//         }
//     }
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int>a={1,2,3,4,5};
//     vector<int>b(3,0);
//     for(int i:a){
//         cout<<i<<endl;
//     }
//     for(int j:b){
//         cout<<j<<endl;
//     }
//     return 0;
// }


//size,push_back,pop_back,front,back
// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int>a={1,2,3,4,5};
    // a.push_back(23);

    // a.pop_back();

    // for(int i : a){
    //     cout<<i<<endl;
    // }
//     cout<<a.front()<<endl;
//     cout<<a.back()<<endl;
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int>a;
//     a.push_back(9);
//     a.push_back(10);
//     a.push_back(8);
//     cout<<a.size()<<endl;
//     cout<<a.capacity()<<endl;
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int>a={4,1,2,1,2};
//     int sum=0;
//     for(int i:a){
//         sum=sum^i;
//     }
//     cout<<sum<<endl;
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int>a={1,2,3,4,5};
//     for(int i=0;i<a.size();i++){
//         for(int j=i;j<a.size();j++){
//             for(int st=i;st<=j;st++){
//                 cout<<a[st];
//             }
//             cout<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// {3,-4,5,4,-1,7,-8}

// #include <iostream>
// using namespace std;
// int main(){
//     int size=7,max_sum=INT_MIN;
//     int arr[size]={3,-4,5,4,-1,7,-8};
//     int sum=0;
//     for(int i=0;i<size;i++){
//         sum=sum+arr[i];
//         max_sum=max(sum,max_sum);
//         if(sum<0){
//             sum=0;
//         }
//     }
//     cout<<max_sum;
//     return 0;

// }

// return pair [2,7,11,15] target is 9 

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int>a={2,7,11,15};
//     int i=0,j=a.size()-1,sum=0,target=17;
//     while(i<j){
//         sum=a[i]+a[j];
//         if(sum==target){
//             cout<<a[i]<<","<<a[j]<<endl;
//             break;
//         }else if(sum<target){
//             i++;
//         }else{
//             j--;
//         }

//     }
//     return 0;

// }

//majority elements

// #include <iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,2,1,1};
//     int max=0,count=0;
//     for(int i=0;i<5;i++){
//         if(count==0){
//             max=arr[i];
//         }
//         if(max==arr[i]){
//             count++;
//         }else{
//             count--;
//         }
//     }
//     cout<<max<<endl;
//     return 0;
// }

//power x,n

// #include <iostream>
// using namespace std;
// int power(int x,int n){
//     int a=1;
//     while(n>0){
//         if(n%2!=0){
//             a=x*x;
//             n=n-1;
//         }
//         x=x*x;
//         n=n/2;
//     }
//     return a;
// }
// int main(){
//     int n,x;
//     cout<<"enter x: ";
//     cin>>x;
//     cout<<"enter n: ";
//     cin>>n;
//     cout<<power(x,n)<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int size=6;
//     int arr[size]={7,1,5,3,6,4};
//     int buy=arr[0],profit=0,max_profit=INT_MIN;
//     for(int i=1;i<size;i++){
//         if(buy>arr[i]){
//             buy=arr[i];
//         }else{
//             profit=arr[i]-buy;
//             max_profit=max(max_profit,profit);
//         }
//     }
//     cout<<max_profit<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int size=9;
//     int n[size]={1,8,6,2,5,4,8,3,7};
//     int i=0,j=size-1,max_container=INT_MIN;
//     while(i<j){
//         int min_height=min(n[i],n[j]);
//         int container=min_height*(j-i);
//         max_container=max(container,max_container);
//         if(n[i]<n[j]){
//             i++;
//         }else{
//             j--;
//         }
//     }
//     cout<<max_container<<endl;
//     return 0;
// }

//product of array except self 
//nums=[1,2,3,4]
//ans=[24,12,8,6]

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int>nums={1,2,3,4};
//     int preffix=1;
//     int suffix=1;
//     vector<int>ans(4,1);
//     for(int i=1;i<nums.size();i++){
//         preffix=nums[i-1]*preffix;
//         ans[i]=preffix;
        
//     }
//     for(int j=nums.size()-2;j>=0;j--){
//         suffix=nums[j+1]*suffix;
//         ans[j]=ans[j]*suffix;
//     }
//     for(int i:ans){
//         cout<<i<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int a=5;
//     int *p=&a;
//     cout<<p<<endl;
//     cout<<&a<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int a=5;
//     int *p=&a;
//     int **z=&p;
//     cout<<a<<endl;//---5
//     cout<<&a<<endl;//--100
//     cout<<p<<endl;//--100
//     cout<<&p<<endl;//--300
//     cout<<z<<endl;//--300
//     cout<<&z<<endl;//--1000
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int a=10;
//     int *p=&a;
//     int **z=&p;
//     cout<<a<<endl;//10
//     cout<<p<<endl;//100
//     cout<<z<<endl;//300
//     cout<<*(&a)<<endl;//10
//     cout<<*(p)<<endl;//10
//     cout<<*(&p)<<endl;//100
//     cout<<*(z)<<endl;//100
//     cout<<*(&z)<<endl;//300
//     cout<<**(z)<<endl;//10
//     cout<<**(&z)<<endl;//100
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int *ptr=NULL;
//     cout<<ptr<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// void change(int *p){
//     *p=12;
// }
// int main(){
//     int a=10;
//     change(&a);
//     cout<<&a<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// void change(int &p){
//     p=12;
// }
// int main(){
//     int a=10;
//     change(a);
//     cout<<a<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5};
//     cout<<arr<<endl;
//     cout<<*arr<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5};
//     int *b=arr;
//     cout<<arr<<endl;
//     cout<<*(arr)<<endl;
//     b++;
//     cout<<*(b)<<endl;
//     return 0;
// }
  
// #include <iostream>
// using namespace std;
// int main(){
//     int p=10;
//     int *a= &p;
//     a=a+2;
//     cout<<&p<<endl;
//     cout<<a<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int a=10;
//     int *p=&a;
//     p+=2;
//     cout<<p-&a<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int *p;
//     int *z;
//     cout<<(p>z)<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={10,20,30,40};
//     int *ptr=arr; 
//     cout<<*(ptr+1)<<endl;//20
//     cout<<*(ptr+3)<<endl;//40
//     ptr++;
//     cout<<*ptr<<endl;//20
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int binary(int arr[],int target,int size){
//     int st=0,end=size-1;
//     while(st<=end){
//         int mid=st+(end-st)/2;
//         if(arr[mid]==target){
//             return mid;
//             break;
//         }
//         if(arr[mid]<target){
//             st=mid+1;
//         }else{
//             end=mid-1;
//         }
//     }
//     return -1;

// }
// int main(){
//     int size=7;
//     int arr[size]={-1,0,3,4,5,9,12};
//     int target=9;
//     cout<<binary(arr,target,size);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int search(int arr[],int size,int target){
//     int st=0,end=size-1;
//     while(st<=end){
//         int mid=st+(end-st)/2;
//         if(target==arr[mid]){
//             return mid;
//         }
//         if(arr[st]<=mid){
//             if(arr[st]<=target && target<=arr[mid]){
//                 end=mid-1;
//             }else{
//                 st=mid+1;
//             }
//         }else{
//             if(arr[mid]<=target && target<=arr[end]){
//                 st=mid+1;
//             }else{
//                 end=mid-1;
//             }
//         }
//     }
//     return -1;

// }
// int main(){
//     int size=8;
//     int arr[size]={3,4,5,6,7,0,1,2};
//     int target=4;
//     cout<<search(arr,size,target);
// }

// #include <iostream>
// using namespace std;
// int peak(int size,int a[]){

//     int st=1,end=size-2;
//     while(st<=end){
//         int mid=st+(end-st)/2;
//         if(a[mid]>a[mid-1] && a[mid]>a[mid+1]){
//             return a[mid];
//         }
//         if(a[mid]>a[mid-1] && a[mid+1]>a[mid]){
//             st=mid+1;
//         }else{
//             end=mid-1;
//         }
//     }
//     return -1;
// }
// int main(){
//     int size=6;
//     int a[size]={0,3,8,9,5,2};
//     cout<<peak(size,a);
//     return 0;

// }

//[1,1,2,3,3,4,4,8,8]

// #include <iostream>
// using namespace std;
// int unique(int arr[],int size){
//     int st=0,end=size-1;

//     while(st<=end){
//         int mid=st+(end-st)/2;
//         if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1]){
//             return arr[mid];
//         }
//         if(mid%2==0){
//             end=mid-1;
//         }else{
//             st=mid+1;
//         }
//     }
//     return -1;
// }
// int main(){
//     int size=9;
//     int arr[size]={1,1,2,3,3,4,4,8,8};
//     cout<<unique(arr,size);
//     return 0;

// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int valid(int mid,int m,int n,vector<int>a){
//     int st=1,pages=0;
//     for(int i=0;i<a.size();i++){
//         if(a[i]>mid){
//             return -1;
//         }
//         if(pages+a[i]<=mid){
//             pages=pages+a[i];
//         }else{
//             st++;
//             pages=a[i];
//         }
//     }
//     if(st<=m){
//         return 1;
//     }else{
//         return 0;
//     }
// }
// int book(vector<int>a,int m,int n,int sum){
//     int ans=-1;
//     if(m>n){
//         return -1;
//     }
//     int st=0,end=sum;
//     while(st<=end){
//         int mid=st+(end-st)/2;
//         int v=valid(mid,m,n,a);
//         if(v==1){
//             ans=mid;
//             end=mid-1;
//         }else{
//             st=mid+1;
//         }
//     }
//     return ans;
// }
// int main(){
//     int m=2,n=4;

//     int sum=0;
//     vector<int>a={2,1,3,4};
//     for(int i:a){
//         sum=sum+i;
//     }
//     cout<<book(a,m,n,sum);
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int isValid(vector<int>a,int m,int n,int mid){
//     int st=1,pages=0;
//     for(int i:a){
//         if(i>mid){
//             return -1;
//         }
//         if(pages+i<=mid){
//             pages=pages+i;
//         }else{
//             st++;
//             pages=i;
//         }
//     }
//     if(st<=m){
//         return 1;
//     }else{
//         return -1;
//     }
// }
// int book(vector<int>a,int m,int n){
//     if(m>n){
//         return -1;
//     }
//     int sum=0;
//     for(int i:a){
//         sum=sum+i;
//     }
//     int st=0,ans=-1;
//     int end=sum;
//     while(st<=end){
//         int mid=st+(end-st)/2;
//         int Valid=isValid(a,m,n,mid);
//         if(Valid==1){
//             ans=mid;
//             end=mid-1;
//         }else{
//             st=mid+1;
//         }
//     }
//     return ans;
// }
// int main(){
//     int m=2,n=4;
//     vector<int>a={2,1,3,4};
//     cout<<book(a,m,n);
//     return 0;
    
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int isvalid(vector<int>a,int m,int n,int mid){
//     int p=1,take=0;
//     for(int i:a){
//         if(i>mid){
//             return -1;
//         }
//         if(take+i<=mid){
//             take=take+i;
//         }else{
//             p++;
//             take=i;
//         }
//     }
//     if(p<=m){
//         return 1;
//     }else{
//         return -1;
//     }
// }
// int time(vector<int>a,int m,int n){
//     int sum=0,ans=-1;
//     for(int i:a){
//         sum=sum+i;
//     }
//     int st=0,end=sum;
//     while(st<=end){
//         int mid=st+(end-st)/2;
//         int valid=isvalid(a,m,n,mid);
//         if(valid==1){
//             ans=mid;
//             end=mid-1;
//         }else{
//             st=mid+1;
//         }
//     }
//     return ans;

// }
// int main(){
//     vector<int>a={40,30,10,20};
//     int m=2,n=4;
//     cout<<time(a,m,n);
//     return 0;

// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int isValid(vector<int>a,int m,int n,int mid){
//     int cow=1,laststal=a[0];
//     for(int i:a){
//         if(i-laststal>=mid){
//             cow++;
//             laststal=i;
//         }
//     }
//     if(cow>=m){
//         return 1;
//     }else{
//         return 0;
//     }
// }
// int cows(vector<int>a,int m,int n){
//     int minimum=INT_MAX,maximum=INT_MIN;
//     int ans=-1;
//     sort(a.begin(),a.end());
//     if(m>n){
//         return -1;
//     }
//     for(int i:a){
//         minimum=min(minimum,i);
//         maximum=max(maximum,i);
//     }
//     int st=1,end=maximum-minimum;
//     while(st<=end){
//         int mid=st+(end-st)/2;
//         int valid=isValid(a,m,n,mid);
//         if(valid==1){
//             ans=mid;
//             st=mid+1;
//         }else{
//             end=mid-1;
//         }

//     }
//     return ans;
// }
// int main(){
//     vector<int>a={1,2,8,4,9};
//     int m=3,n=5;
//     cout<<cows(a,m,n);
//     return 0;
// }

//bubble sort

// #include <iostream>
// using namespace std;
// void bubble(int size,int arr[]){
//      for(int i=0;i<size-1;i++){
//         bool isSwap=false;
//         for(int j=0;j<size-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 isSwap=true;
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//         if(isSwap==false){
//             return;
//         }
//      }
// }
// int main(){
//     int size=5;
//     int arr[size]={4,1,5,2,3};
//     bubble(size,arr);
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }

//bubble sort

// #include <iostream>
// using namespace std;
// void bubble(int size,int arr[]){
//     for(int i=0;i<size-1;i++){
//         bool isSwap=false;
//         for(int j=0;j<size-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 isSwap=true;
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//         if(isSwap==false){
//             return ;
//         }
//     }
// }
// int main(){
//     int size=5;
//     int arr[size]={4,1,5,2,3};
//     bubble(size,arr);
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<",";
//     }
//     return 0;
// }

// selection sort
// #include <iostream>
// using namespace std;
// void selection(int size,int arr[]){
//     for(int i=0;i<size;i++){
//         int smallest=i;
//         for(int j=i+1;j<size;j++){
//             if(arr[smallest]>arr[j]){
//                 smallest=j;
//             }
//         }
//         swap(arr[smallest],arr[i]);
//     }
// }
// int main(){
//     int size=5;
//     int arr[size]={4,1,5,2,3};
//     selection(size,arr);
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<",";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// void selection(int size,int arr[]){
//     for(int i=0;i<size;i++){
//         int smallest=i;
//         for(int j=i+1;j<size;j++){
//             if(arr[j]<arr[smallest]){
//                 smallest=j;
//             }
//         }
//         swap(arr[smallest],arr[i]);
//     }

// }
// int main(){
//     int size=5;
//     int arr[size]={4,1,5,2,3};
//     selection(size,arr);
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<",";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// void insertion(int size,int arr[]){
//     for(int i=1;i<size;i++){
//         int currentidx=arr[i];
//         int previousidx=i-1;
//         while(arr[previousidx]>=currentidx && previousidx>=0){
//             arr[previousidx+1]=arr[previousidx];
//             previousidx--;
//         }
//         arr[previousidx+1]=currentidx;
//     }
// }
// int main(){
//     int size=5;
//     int arr[size]={4,1,5,2,3};
//     insertion(size,arr);
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<",";
//     }

//     return 0;
// }

//{4,1,5,2,3}

// #include <iostream>
// using namespace std;
// void bubble(int size,int arr[]){
//     for(int i=0;i<size-1;i++){
//         bool isSwap=false;
//         for(int j=0;j<size-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 isSwap=true;
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//         if(isSwap==false){
//             return;
//         }
//     }
// }
// int main(){
//     int size=5;
//     int arr[size]={4,1,5,2,3};
//     bubble(size,arr);
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<",";
//     }   
//     return 0;
// }

// selection

// #include <iostream>
// using namespace std;
// void selection(int size,int arr[]){
//     for(int i=0;i<size;i++){
//         int smallest=i;
//         for(int j=i+1;j<size;j++){
//             if(arr[smallest]>arr[j]){
//                 smallest=arr[j];
//             }
//         }
//         swap(arr[smallest],arr[i]);
//     }

// }
// int main(){
//     int size=5;
//     int arr[size]={4,1,5,2,3};
//     selection(size,arr);
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<",";
//     }   
//     return 0;    
// }

//insertion 

// #include <iostream>
// using namespace std;
// void selection(int size,int arr[]){
//     for(int i=1;i<size;i++){
//         int current=arr[i];
//         int previous=i-1;
//         while(previous>=0 && arr[previous]>current){
//             arr[previous+1]=arr[previous];
//             previous--;
//         }
//         arr[previous+1]=current;
//     }
    
// }
// int main(){
//     int size=5;
//     int arr[size]={4,1,5,2,3};
//     selection(size,arr);
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<",";
//     }   
//     return 0;    
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// void sort(vector<int> &nums){
//     int count_0s=0,count_1s=0,count_2s=0;
//     int idx=0;
//     for(int i:nums){
//         if(0==i){
//             count_0s++;
//         }else if(1==i){
//             count_1s++;
//         }else{
//             count_2s++;
//         }
//     }
//     for(int i=0;i<count_0s;i++){
//         nums[idx]=0;
//         idx++;
//     }
//     for(int i=0;i<count_1s;i++){
//         nums[idx]=1;
//         idx++;
//     }
//     for(int i=0;i<count_2s;i++){
//         nums[idx]=2;
//         idx++;
//     }
// }
// int main(){
//     vector<int>nums={2,0,2,1,1,0,1,2,0,0};
//     sort(nums);
//     for(int i:nums){
//         cout<<i<<",";
//     }
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int>a={2,0,2,1,1,0,1,2,0,0};
//     int low=0,mid=0,high=a.size()-1;
//     while(mid<=high){
//         if(a[mid]==0){
//             swap(a[mid],a[low]);
//             low++,mid++;
//         }else if(a[mid]==1){
//             mid++;
//         }else{
//             swap(a[mid],a[high]);
//             high--;
//         }
//     }
//     for(int i:a){
//         cout<<i<<",";
//     }
//     return 0;
// }


// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int>a={2,0,2,1,1,0,1,2,0,0};
//     int low=0,mid=0,high=a.size()-1;
//     while(mid<=high){
//         if(a[mid]==0){
//             swap(a[low],a[mid]);
//             low++,mid++;
//         }else if(a[mid]==1){
//             mid++;
//         }else{
//             swap(a[mid],a[high]);
//             high--;
//         }
//     }
//     for(int i:a){
//         cout<<i<<",";
//     }
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// void sorting(vector<int> &a){
//     int low=0,mid=0,high=a.size()-1;
//     while(mid<=high){
//         if(a[mid]==0){
//             swap(a[mid],a[low]);
//             low++,mid++;

//         }else if(a[mid]==1){
//             mid++;
//         }else{
//             swap(a[mid],a[high]);
//             high--;
//         }
//     }
// }
// int main(){
//     vector<int>a={2,0,2,1,1,0,1,2,0,0};
//     sorting(a);
//     for(int i:a){
//         cout<<i<<",";
//     }
//     return 0;
// }

//merge sort 

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int>a={1,2,3};
//     vector<int>b={2,5,6};
//     vector<int>c;
//     int st1=0,st2=0;
//     while(st1<a.size() && st2<b.size()){
//         if(a[st1]<=b[st2]){
//             c.push_back(a[st1]);
//             st1++;
//         }else{
//             c.push_back(b[st2]);
//             st2++;
//         }
//     }
//     while(st1<a.size()){
//         c.push_back(a[st1]);
//         st1++;
//     }
//     while(st2<b.size()){
//         c.push_back(b[st2]);
//         st2++;
//     }
//     for(int i:c){
//         cout<<i<<",";
//     }
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     int m=3,n=3;
//     vector<int>a={1,2,3,0,0,0};
//     vector<int>b={2,5,6};
//     int idx=m+n-1;
//     int i=m-1,j=n-1;
//     while(i>=0 && j>=0){
//         if(a[i]>b[j]){
//             a[idx]=a[i];
//             i--;
//         }else{
//             a[idx]=b[j];
//             j--;
//         }
//         idx--;
//     }
//     for(int i:a){
//         cout<<i<<",";
//     }
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// void nextPer(vector<int> &a){
//     int pivot=-1;
//     for(int i=a.size()-2;i>=0;i--){
//         if(a[i]<a[i+1]){
//             pivot=i;
//             break;
//         }
//     }
//     if(pivot==-1){
//         reverse(a.begin(),a.end());
//         return;
//     }
//     for(int i=a.size()-1;i>pivot;i--){
//         if(a[pivot]<a[i]){
//             swap(a[pivot],a[i]);
//             break;
//         }
//     }
//     int st=pivot+1,end=a.size()-1;
//     while(st<=end){
//         swap(a[st],a[end]);
//         st++,end--;
//     }

    
// }
// int main(){
//     vector<int>a={1,2,5,4,3};
//     nextPer(a);
//     for(int i:a){
//         cout<<i<<"";
//     }
//     return 0;
// }

//13245

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// void nextPer(vector<int> &a){
//     int pivot=-1;
//     for(int i=a.size()-2;i>=0;i--){
//         if(a[i]<a[i+1]){
//             pivot=i;
//             break;
//         }
//     }
//     if(pivot==-1){
//         reverse(a.begin(),a.end());
//         return;
//     }
//     for(int i=a.size()-1;i>pivot;i--){
//         if(a[pivot]<a[i]){
//             swap(a[pivot],a[i]);
//             break;
//         }
//     }
//     int st=pivot+1,end=a.size()-1;
//     while(st<=end){
//         swap(a[st],a[end]);
//         st++,end--;
//     }
// }
// int main(){
//     vector<int>a={1,3,2,4,5};
//     nextPer(a);
//     for(int i:a){
//         cout<<i<<"";
//     }
//     return 0;
// }

//c++ container ---vector

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int>a;
//     vector<int>b={1,2,3};
    // cout<<a.capacity();
    // a.push_back(2);
    // a.push_back(3);
    // a.push_back(8);
    // a.emplace_back(9);
    // cout<<a.size();
    // cout<<a.capacity();
    // cout<<b.front();
    // cout<<b.back();
    // cout<<b.at(2);
//     for(int i:a){
//         cout<<i<<",";
//     }
//     return 0;
    

// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int>a={1,2,3,4,5};
    // a.erase(a.begin()+1,a.begin()+3);
    // a.insert(a.begin()+4,100);
    // a.clear();
//     a[3]=10;
//     for(int i:a){
//         cout<<i<<",";
//     }
//     cout<<a.empty();
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int>a={1,2,3,4,5};
    // for(auto it=a.begin();it!=a.end();it++){
    //     cout<<*(it)<<" ";
    // }
    // for(auto it=a.rbegin();it!=a.rend();it++){
    //     cout<<*(it)<<" ";
    // }
//     cout<<endl;
//     return 0;
// }

// #include <iostream>
// #include <list>
// using namespace std;
// int main(){
//     list<int>a={1,2,3};
    // a.push_back(34);
    // a.push_back(9);
    // a.push_front(0);
    // a.emplace_back(-1);
    // a.emplace_front(8);
    // a.pop_back();
    // a.pop_front();
    // cout<<a[2]<<endl;
    // for(int i:a){
    //     cout<<i<<" ";
    // }
    // cout<<a.front()<<endl;
    // cout<<a.back()<<endl;

//     return 0;
// }

// #include <iostream>
// #include <deque>
// using namespace std;
// int main(){
//     deque<int>a={1,2,3,4,5};
    // cout<<a[3]<<endl;
//     a[3]=5;
//     for(int i:a){
//         cout<<i<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
    // pair<int,int>a={1,2};
    // pair<char,int>a={'a',2};
//     pair<char,pair<int,int>>al={'a',{1,2}};
//     cout<<al.first<<endl;
//     cout<<al.second.first<<endl;
//     cout<<al.second.second<<endl;
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<pair<int,int>>a={{1,2},{3,4},{5,6},{7,8}};
//     a.push_back({9,9});
//     a.emplace_back(10,100);
//     for(auto i:a){
//         cout<<i.first<<" "<<i.second<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <stack>
// using namespace std;
// int main(){
//     stack<int>s;
//     s.push(4);
//     s.push(5);
//     s.push(6);
//     s.push(7);
//     stack<int>s2;
//     s2.swap(s);
//     while(!s.empty()){
//         cout<<s.top()<<endl;
//         s.pop();
//     }
    
//     return 0;
// }

// #include <iostream>
// #include <queue>
// using namespace std;
// int main(){
//     queue<int>q;
//     q.push(12);
//     q.push(23);
//     q.push(87);
//     while(!q.empty()){
//         cout<<q.front()<<endl;
//         q.pop();
//     }
//     return 0;

// }


// #include <iostream>
// #include <queue>
// using namespace std;
// int main(){
//     priority_queue<int>a;
//     a.push(5);
//     a.push(8);
//     a.push(6);
//     while(!a.empty()){
//         cout<<a.top()<<endl;
//         a.pop();
//     }
//     return 0;
// }

// #include <iostream>
// #include <map>
// using namespace std;
// int main(){
//     map<string,int>a;
//     a["mobile"]=45;
//     a["tv"]=78;
//     a["watch"]=99;
//     a["camera"]=18;
//     for(auto i:a){
//         cout<<i.first<<" "<<i.second<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <map>
// using namespace std;
// int main(){
//     multimap<string,int>a;
//     a.emplace("watch",45);
//     a.emplace("watch",45);
//     a.emplace("tv",56);
//     a.emplace("tv",56);
//     for(auto i:a){
//         cout<<i.first<<" "<<i.second<<endl;
//     }
//     cout<<endl;
//     return 0;
// }


// #include <iostream>
// #include <unordered_map>
// using namespace std;
// int main(){
//     unordered_map<string,int>a;
//     a["tv"]=90;
//     a["watch"]=99;
//     a["fridge"]=78;
//     for(auto i:a){
//         cout<<i.first<<" "<<i.second<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <set>
// using namespace std;
// int main(){
//     set<int>a;
//     a.insert(1);
//     a.insert(2);
//     a.insert(4);
//     a.insert(3);
//     // for(auto i:a){
//     //     cout<<i<<endl;
//     // }
//     cout<<*(a.lower_bound(3))<<endl;
//     cout<<*(a.upper_bound(3))<<endl;
//     return 0;
// }

//algorithm 
//sorting 

// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;
// int main(){
    // int arr[5]={1,54,32,13,67};
    // vector<int>a={12,43,22,1,57,55,99,100,4445,33,24};
    // sort(arr,arr+5);
    // sort(a.begin(),a.end(),greater<int>());
    // for(int i:a){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
// }

//custom 

// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;
// bool comparator(pair<int,int>p1,pair<int,int>p2){
//     if(p1.second<p2.second) return true;
//     else return false;
// }
// int main(){
//     vector<pair<int,int>>a={{3,1},{2,1},{7,1},{5,2}};
//     sort(a.begin(),a.end(),comparator);
//     for(auto i:a){
//         cout<<i.first<<" "<<i.second<<endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;
// bool comparator(pair<int,int>p1,pair<int,int>p2){
//     if(p1.second<p2.second) return true;
//     if(p1.second>p2.second)  return false;
//     if(p1.first<p2.first) return true;
//     else return false;
// }
// int main(){
//     vector<pair<int,int>>a={{3,1},{2,1},{7,1},{5,2}};
//     sort(a.begin(),a.end(),comparator);
//     for(auto i:a){
//         cout<<i.first<<" "<<i.second<<endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main(){
//     vector<int>a={1,2,3,4,5};
//     prev_permutation(a.begin(),a.end());
//     for(int i:a){
//         cout<<i<<"";
//     }
//     cout<<endl;
//     return 0;
// }

// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main(){
//     cout<<min(5,3)<<endl;
//     cout<<max(5,3)<<endl;
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main(){
//     vector<int>a={1,3,2,5,6,43,33};
//     cout<<*(max_element(a.begin(),a.end()))<<endl;
//     cout<<*(min_element(a.begin(),a.end()))<<endl;
//     return 0;
// }

// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main(){
//     int a=2;
//     long int b=200;
//     long long int c= 2000;
//     cout<<__builtin_popcount(a)<<endl;
//     cout<<__builtin_popcount(b)<<endl;
//     cout<<__builtin_popcount(c)<<endl;
//     return 0;
// }

// #include <iostream>
// #include <cstring>
// using namespace std;
// int main(){
    // char ch[]={'a','b','h','i','\0'};
    // char ch[]="abhi";
    // cout<<strlen(ch)<<endl;
    // cout<<ch[0]<<endl;
    // cout<<ch<<endl;
//     return 0;
// }

//input and output in char

// #include <iostream>
// using namespace std;
// int main(){
//     char st[12];
//     cout<<"enter a str: ";
//     cin.getline(st,12);
//     cout<<st<<endl;
//     return 0;
// }

//loops in char

// #include <iostream>
// using namespace std;
// int main(){
//     char str[]="abhirnna";
//     for(char i:str){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

//lenght of a string 
// #include <iostream>
// #include <cstring>
// using namespace std;
// int main(){
//     char ch[]="abhirnna bhol is a good boy and he 100 percent get placed in google";
    // cout<<strlen(ch)<<endl;
//     int len=0;
//     for(int i=0;ch[i]!='\0';i++){
//         len++;
//     }
//     cout<<len<<endl;
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     string name="abhirnna";
//     string surname =" bhol";
//     cout<<name+surname<<endl;
//     cout<<name.length()<<endl;
//     cout<<(name>surname)<<endl;
//     cout<<(name==surname)<<endl;
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     string name;
//     cout<<"enter a string: ";
//     getline(cin,name,'.');
//     cout<<name<<endl;
//     return 0;
// }

//loops in string

// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     string st="abhirnna is a good boy";
    // for(int i=0;i<st.length();i++){
    //     cout<<st[i]<<" ";
    // }

//     cout<<endl;
//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;
// int main(){
//     string str="abhirnna bhol is a very brilliant student.";
//     reverse(str.begin(),str.end());
//     for(int i=0;i<str.length();i++){
//         cout<<str[i]<<"";
//     }
//     return 0;
// 

// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;
// int main(){
//     string name;
//     cout<<"enter a string: ";
//     getline(cin,name);
//     string original_name=name;
//     reverse(name.begin(),name.end());
//     string reverse_name=name;
//     if(original_name==reverse_name){
//         cout<<"it is a palindrome. "<<endl;
//     }else{
//         cout<<"it is not a palindrome. "<<endl;
//     }
//     return 0;
// }

//Ac3?e3c&a

// #include <iostream>
// #include <string>
// using namespace std;
// bool alphaNumeric(char val){
//     if(('0'<=val && val<='9') || (tolower(val)>='a' && tolower(val)<='z' )){
//         return true;
//     }else{
//         return false;
//     }

// }
// int validPalindrome(string a){
//     int st=0,end=a.length();
//     while(st<=end){
//         bool start = alphaNumeric(a[st]);
//         bool last= alphaNumeric(a[end]);
//         if(start==true && last==true){
//             if(tolower(a[st])==tolower(a[end])){
//                 st++;
//                 end--;
//             }else{
//                 return 0;
//             }
//         }else if(start==true && last==false){
//             end--;
//         }else{
//             st++;
//         }
//     }
//     return 1;
// }
// int main(){
//     string name="Ac3?e3c&a";
//     int val=validPalindrome(name);
//     if(val==1){
//         cout<<"it is a palindrome";
//     }else{
//         cout<<"it is not a palindrome";
//     }
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// bool check(char val){
//     if(('0'<=val && val<='9') || (tolower(val)>='a' && tolower(val)<='z')){
//         return true;
//     }else{
//         return false;
//     }
// }
// int validPal(string a){
//     int st=0,end=a.length();
//     while(st<=end){
//         bool start=check(a[st]);
//         bool last=check(a[end]);
//         if(start==true && last==true){
//             if(tolower(a[st])==tolower(a[end])){
//                 st++;
//                 end--;
//             }else{
//                 return false;
//             }
//         }else if(start==false){
//             st++;
//         }else{
//             end--;
//         }
//     }
//     return true;
// }
// int main(){
//     string name="Ac3?e3c&a";
//     bool palindrome=validPal(name);
//     if(palindrome==true){
//         cout<<"it is palindrome. ";
//     }else{
//         cout<<"it is not a palindrome. ";
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;
// string rem_occ(string str,string part){
//     while(str.find(part)<str.length() && str.length()>0){
//         str.erase(str.find(part),part.length());
//     }
//     return str;
// }
// int main(){
//     string str="daabcbaabcbc";
//     string part="abc";
//     cout<<rem_occ(str,part);
//     return 0;

// }

// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;
// bool (isCheck(vector<int>freq1,vector<int>freq2)){
//     for(int i=0;i<26;i++){
//         if(freq1[i]!=freq2[i]){
//             return false;
//         }
//     }
//     return true;
// }
// bool permutation(string s1,string s2){
//     vector<int>freq1(26,0);
//     for(int i=0;i<s1.length();i++){
//         freq1[s1[i]-'a']++;
//     }
//     int winLen=s1.length();
//     for(int j=0;j<s2.length();j++){
//         vector<int>freq2(26,0);
//         int winIdx=0,idx=j;
//         while(winIdx<winLen && idx<s2.length() ){
//             freq2[s2[idx]-'a']++,idx++,winIdx++;
//         }
//         if(isCheck(freq1,freq2)==true){
//             return true;
//         }
//     }
//     return false;
// }
// int main(){
//     string s1="ab";
//     string s2="eidbaooo";
//     bool val=permutation(s1,s2);
//     if(val==true){
//         cout<<"exist";
//     }else{
//         cout<<"not exist";
//     }
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;
// bool isEqual(vector<int>freq1,vector<int>freq2){
//     for(int i=0;i<26;i++){
//         if(freq1[i]!=freq2[i]){
//             return false;
//         }
//     }
//     return true;
// }
// bool permutation(string s1,string s2){
//     vector<int>freq1(26,0);
//     for(int i=0;i<s1.length();i++){
//         freq1[s1[i]-'a']++;
//     }
//     int winLen=s1.length();
//     for(int j=0;j<s2.length();j++){
//         vector<int>freq2(26,0);
//         int winIdx=0,idx=j;
//         while(winIdx<winLen && idx<s2.length()){
//             freq2[s2[idx]-'a']++;
//             winIdx++,idx++;
//         }
//         if(isEqual(freq1,freq2)==true){
//             return true;
//         }
//     }
//     return false;

// }
// int main(){
//     string s1="ab";
//     string s2="eidbaooo";
//     bool val=permutation(s1,s2);
//     if(val==true){
//         cout<<"exist";
//     }else{
//         cout<<"not exist";
//     }
//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;
// string reverse(string st){
//     string ans="";
//     reverse(st.begin(),st.end());
//     for(int i=0;i<st.length();i++){
//         string word="";
//         while(st[i]!=' ' && i<st.length()){
//             word+=st[i];
//             i++;
//         }
//         reverse(word.begin(),word.end());
//         if(word.length()>0){
//             ans+=" "+word;
//         }

//     }
//     return ans.substr(1);
// }
// int main(){
//     string st=" the pen";
//     cout<<reverse(st);
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;
// int compress(vector<char>chars){
//     int idx=0;
//     for(int i=0;i<chars.size();i++){
//         char word=chars[i];
//         int count=0;
//         while(i<chars.size() && word==chars[i]){
//             count++;
//             i++;
//         }
//         if(count==1){
//             chars[idx++]=word;
//         }else{
//             chars[idx++]=word;
//             string s=to_string(count);
//             for(char c:s){
//                 chars[idx++]=c;
//             }
//         }
//         i--;
//     }
//     chars.resize(idx);
//     return idx;
// }
// int main(){
//     vector<char>chars={'a','a','b','b','c','c','c'};
//     cout<<compress(chars);
//     return 0;


// }

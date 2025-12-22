//maximum subarray possible {1,2,3,4,5}

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int>array={1,2,3,4,5};
//     for(int i=1;i<=array.size();i++){
//         for(int j=i;j<=array.size();j++){
//             for(int k=i;k<=j;k++){
//                 cout<<k;
//             }
//             cout<<",";
//         }
//         cout<<endl;
//     }
//     return 0;

// }

//maximum subarray sum {3,-4,5,4,-1,7,-8} //leetcode 53

// #include <iostream>
// #include <vector>
// using namespace std;
// int maxSubArray(vector<int>& nums){
//     int sum=0,maxSum=INT_MIN;
//     for(int i: nums){
//         sum=sum+i;
//         maxSum=max(sum,maxSum);
//         if(sum<0){
//             sum=0;
//         }
//     }
//     return maxSum;

// }
// int main(){
//     vector<int>nums={3,-4,5,4,-1,7,-8};
//     cout<<maxSubArray(nums);
//     return 0;

// }

//return pair in present sorted array with target sum given 2,7,11,15 target is 22

// #include <iostream>
// #include <vector>
// using namespace std;
// int search(vector<int>& arr,int target){
//     int st=0,end=arr.size()-1,sum=0;
//     while(st<end){
//         sum=arr[st]+arr[end];
//         if(target==sum){
//             cout<<arr[st]<<","<<arr[end];
//             return 0;
//         }
//         if(target<sum){
//             end--;
//         }else{
//             st++;
//         }
//     }
//     return -1;
// }
// int main(){
//     vector<int>arr={2,7,11,15};
//     int target=22;
//     search(arr,target);
//     return 0;
// }

// [2,2,1,1,1,2,2]

// #include <iostream>
// #include <vector>
// using namespace std;
// int majorityElement(vector<int>& nums){
//     int count=0;
//     int value=nums[0];
//     for(int i=0;i<nums.size();i++){
//         if(count==0){
//             value=nums[i];
//         }
//         if(value==nums[i]){
//             count++;
//         }else{
//             count--;
//         }
//     }
//     return value;

// }
// int main(){
//     vector<int>nums={2,2,1,1,1,2,2};
//     cout<<majorityElement(nums);
//     return 0;

// }

// 2^25

// #include <iostream>
// using namespace std;
// double myPow(double x, int n){
//     if(x==0){
//         return 0;
//     }
//     double mul=1;
//     long long m=n;
//     if(m<0){
//         m=-m;
//     }
//     while(m>0){
//         if(m%2!=0){
//             m=m-1;
//             mul=mul*x;
//         }
//         x=x*x;
//         m=m/2;
//     }
//     if(n<0){
//         return 1/mul;
//     }
//     return mul;
    
// }
// int main(){
//     double x;
//     cout<<"Enter a base value : ";
//     cin>>x;
//     int n;
//     cout<<"Enter a power : ";
//     cin>>n;
//     cout<<myPow(x,n);
//     return 0;
// }

//buy and stock

// prices = [7,1,5,3,6,4]

// #include <iostream>
// #include <vector>
// using namespace std;
// int maxProfit(vector<int> &prices){
//     int currentBuy=prices[0],maxVal=0;
//     for(int i=1;i<prices.size();i++){
//         if(currentBuy<prices[i]){
//             maxVal=max(maxVal,prices[i]-currentBuy);
//         }else{
//             currentBuy=prices[i];
//         }
//     }
//     return maxVal;

// }
// int main(){
//     vector<int>prices={7,1,5,3,6,4};
//     cout<<maxProfit(prices);
//     return 0;
// }

// height = [1,8,6,2,5,4,8,3,7]
// Output: 49

// #include <iostream>
// #include <vector>
// using namespace std;
// int maxArea(vector<int> &height){
//     int st=0,end=height.size()-1,minH=0,area=0,maxA=INT_MIN;
//     while(st<end){
//         if(height[st]<height[end]){
//             minH=height[st];
//             area=minH*(end-st);
//             st++;
//         }else{
//             minH=height[end];
//             area=minH*(end-st);
//             end--;
//         }
//         maxA=max(area,maxA);
//     }
//     return maxA;
// }
// int main(){
//     vector<int>height={1,8,6,2,5,4,8,3,7};
//     cout<<maxArea(height);
//     return 0;
// }

//1,2,3,4

// #include <iostream>
// #include <vector>
// using namespace std;
// vector<int> productExceptSelf(vector<int>& nums){
//     int n=nums.size();
//     int preffix=1;
//     int suffix =1;
//     vector<int>ans(n,1);
//     for(int i=1;i<n;i++){
//         preffix=nums[i-1]*preffix;
//         ans[i]=preffix;
//     }
//     for(int j=n-2;j>=0;j--){
//         suffix=nums[j+1]*suffix;
//         ans[j]=ans[j]*suffix;
//     }
//     return ans;

// }
// int main(){
//     vector<int>nums={1,2,3,4};
//     vector<int>finalAns=productExceptSelf(nums);
//     for(int i: finalAns){
//         cout<<i<<endl;
//     }
//     return 0;
// } 

//

// pointers(address)

//write code to find address of specific varaibles

// #include <iostream>
// using namespace std;
// int main(){
//     int a=20;
//     cout<<&a<<endl;
//     return 0;
// }

//example of pointer

// #include <iostream>
// using namespace std;
// int main(){
//     int a=20;
//     int *ptr=&a;
//     cout<<ptr<<endl;
//     return 0;
// }

//example of pointer to pointer

// #include <iostream>
// using namespace std;
// int main(){
//     int a=10;
//     int *ptr=&a;
//     int **ptr1=&ptr;
//     cout<<ptr<<endl;
//     cout<<ptr1<<endl;
//     return 0;
// }

//Derefernce operator

// #include <iostream>
// using namespace std;
// int main(){
//     int a=100;
//     int *b=&a;
//     int **c=&b;
//     cout<<*c<<endl;// *(address of b)----> address of a
//     cout<<**c<<endl;// **(address of b)--->*(address of a)---->100
//     cout<<*(&b)<<endl; //*(address of b)----> address of a
//     return 0;
// }

//null pointer

// #include <iostream>
// using namespace std;
// int main(){
//     int *n=NULL;
//     cout<<n;
//     return 0;
// }

//question

// #include <iostream>
// using namespace std;
// int main(){
//     int a=5;
//     int *p=&a;  
//     int **q=&p;
//     cout<<*p<<endl; //*(address of a)---->5
//     cout<<**q<<endl; //**(address of p)----->*(address of a)--->5
//     cout<<p<<endl;//address of a
//     cout<<*q<<endl;//*(address of p)----->address of a
//     return 0;
// }

// pass by reference 

//i) pass by pointer

// #include <iostream>
// using namespace std;
// void call(int *p){
//     *p=100;
    
// }
// int main(){
//     int a=10;
//     call(&a);
//     cout<<a<<endl;
//     return 0;
// }

//ii)pass by reference

// #include <iostream>
// using namespace std;
// int check(int &b){
//     b=39;
//     return 0;
// }
// int main(){
//     int a=100;
//     check(a);
//     cout<<a<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5};
//     cout<<arr<<endl;
//     return 0;
// }

//pointer arithmetic

// #include <iostream>
// using namespace std;
// int main(){
//     int a=10;
//     int *p=&a;
//     cout<<p<<endl;
//     p++;
//     cout<<a<<endl;
//     cout<<p<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int a=10;
//     int *p=&a;
//     cout<<p<<endl;
//     cout<<p+2<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5};
//     cout<<arr<<endl;
//     cout<<arr+1<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int a=100;
//     int *ptr=&a;
//     int *ptr2=ptr+2;
//     cout<<ptr2-ptr;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int a=100,b=2;
//     int *ptr=&a;
//     int *ptr1=&b;
//     cout<<ptr<<endl;
//     cout<<ptr1<<endl;
//     cout<<(ptr1>ptr)<<endl;
//     return 0;
// }

//practise questions

// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={10,20,30,40};
//     int *ptr=arr;
//     cout<<*(ptr+1)<<endl; //20
//     cout<<*(ptr+3)<<endl; //40
//     ptr++;
//     cout<<*ptr<<endl; //20
//     return 0;
// }

//binary search {-1,0,3,4,5,9,12} target ---->12

// #include <iostream>
// #include <vector>
// using namespace std;
// int search(vector<int> &arr,int target){
//     int st=0,end=arr.size()-1;
//     while(st<=end){
//         int mid=st+(end-st)/2;
//         if(arr[mid]==target){
//             return mid;
//         }else if(arr[mid]<target){
//             st=mid+1;
//         }else{
//             end=mid-1;
//         }

//     }
//     return -1;
// }
// int main(){
//     int target=12;

//     vector<int>arr={-1,0,3,4,5,9,12};
//     cout<<search(arr,target);
//     return 0;
// }

// Input: nums = [4,5,6,7,0,1,2], target = 0
// Output: 4

// #include <iostream>
// #include <vector>
// using namespace std;
// int search(vector<int> &nums,int target){
//     int st=0,end=nums.size()-1;
//     while(st<=end){
//         int mid=st+(end-st)/2;
//         if(target==nums[mid]){
//             return mid;
//         }else if(nums[st]<=nums[mid]){
//             if(nums[st]<=target && target<=nums[mid]){
//                 end=mid-1;
//             }else{
//                 st=mid+1;
//             }
//         }else{
//             if(nums[mid]<=target && target<=nums[end]){
//                 st=mid+1;
//             }else{
//                 end=mid-1;
//             }
//         }
//     }
//     return -1;
// }
// int main(){
//     vector<int>nums={4,5,6,7,0,1,2};
//     int target=0;
//     cout<<search(nums,target);
//     return 0;
// }

//1,2,6,7,9,3,2

// #include <iostream>
// #include <vector>
// using namespace std;
// int peakIndexInMountainArray(vector<int>& arr) {
//     int st=1,end=arr.size()-2;
//     while(st<=end){
//         int mid=st+(end-st)/2;
//         if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
//             return mid;
//         }else if(arr[mid-1]>arr[mid]){
//             end=mid-1;
//         }else{
//             st=mid+1;
//         }
//     }
//     return -1;

        
// }
// int main(){
//     vector<int>arr={1,2,6,7,9,3,2};
//     cout<<peakIndexInMountainArray(arr);
//     return 0;
// }

// Input: nums = [1,1,2,3,3,4,4,8,8]
// Output: 2

// #include <iostream>
// #include <vector>
// using namespace std;
// int singleNonDuplicate(vector<int>& nums){
//     int st=0,end=nums.size()-1;
//     if(nums.size()==1){
//         return nums[0];
//     }
//     while(st<=end){
//         int mid=st+(end-st)/2;
//         if(mid==0 && nums[mid]!=nums[mid+1]){
//             return nums[mid];
//         }
//         if(mid==end && nums[mid]!=nums[mid-1]){
//             return nums[mid];
//         }
//         if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
//             return nums[mid];
//         }else if(mid%2==0){
//             if(nums[mid]==nums[mid-1]){
//                 end=mid-1;
//             }else{
//                 st=mid+1;
//             }
//         }else{
//             if(nums[mid]==nums[mid-1]){
//                 st=mid+1;
//             }else{
//                 end=mid-1;
//             }
//         }
        
//     }
//     return -1;
// }
// int main(){
//     vector<int>nums={1,1,2,3,3,4,4,8,8};
//     cout<<singleNonDuplicate(nums);
//     return 0;
// }

// Input: arr[] = [12, 34, 67, 90], k = 2
// Output: 113

// #include <iostream>
// using namespace std;
// int isValid(int k,int mid,int arr[],int n){
//     int count=1,pages=0;

//     for(int i=0;i<n;i++){
//         if(mid<arr[i]){
//         return 0;
//         }
//         if(pages+arr[i]<=mid){
//             pages=pages+arr[i];
//         }else{
//             pages=arr[i];
//             count++;
//         }
//     }
//     if(count<=k){
//         return 1;
//     }else{
//         return 0;
//     }


// }
// int findPages(int arr[], int n, int k){
//     int sum=0,ans=INT_MAX;
//     if(n<k){
//         return -1;
//     }
//     for(int i=0;i<n;i++){
//         sum=sum+arr[i];
//     }
//     int st=0,end=sum;
//     while(st<=end){
//         int mid=st+(end-st)/2;
//         bool check=isValid(k,mid,arr,n);
//         if(check==true){
//             ans=min(ans,mid);
//             end=mid-1;
//         }else{
//             st=mid+1;
//         }
//     }
//     return ans;

// }
// int main(){
//     int size=4;
//     int arr[size]={10,10,10,10};
//     int k=3;
//     cout<<findPages(arr,size,k);
//     return 0;

// }

// {40,30,10,20} m=2

// #include <iostream>
// #include <vector>
// using namespace std;
// int isValid(vector<int>a,int m,int mid){
//     int count=1,s=0;
//     for(int i=0;i<a.size();i++){
//         if(mid<a[i]){
//             return 0;
//         }
//         if(mid>=s+a[i]){
//             s=s+a[i];
//         }else{
//             s=a[i];
//             count++;
//         }

//     }
//     if(m>=count){
//         return 1;
//     }else{
//         return 0;
//     }

// }
// int painter(vector<int> &a,int m){
//     int sum=0,ans=INT_MAX;
//     if(m>a.size()){
//         return -1;
//     }
//     for(int i=0;i<a.size();i++){
//         sum=sum+a[i];
//     }
//     int st=0,end=sum;
//     while(st<=end){
//         int mid=st+(end-st)/2;
//         bool check=isValid(a,m,mid);
//         if(check==true){
//             end=mid-1;
//             ans=min(ans,mid);
//         }else{
//             st=mid+1;
//         }
//     }
//     return ans;
// }
// int main(){
//     vector<int>a={40,30,10,20};
//     int m=2;
//     cout<<painter(a,m);
//     return 0;
// }

//1,2,8,4,9

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int isValid(int mid,vector<int>a,int c){
//     int count=1,lastL=a[0];
//     for(int i:a){
//         if(i-lastL>=mid){
//             lastL=i;
//             count++;
//         }
//         if(count>=c){
//             return 1;
//         }
//     }
//     return 0;

// }
// int cows(vector<int>a,int c){
//     sort(a.begin(),a.end());
//     int n=a.size(),ans=INT_MIN;
//     int st=1,end=n-st;
//     while(st<=end){
//         int mid=st+(end-st)/2;
//         bool check=isValid(mid,a,c);
//         if(check==true){
//             st=mid+1;
//             ans=max(ans,mid);
//         }else{
//             end=mid-1;
//         }
//     }
//     return ans;
// }
// int main(){
//     int c=3;
//     vector<int>a={1,2,8,4,9};
//     cout<<cows(a,c);
//     return 0;
// }

//bubble sort

// #include <iostream>
// using namespace std;
// void bubble_sort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         bool isSwap=false;
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 isSwap=true;
//             }
//         }
//         if(isSwap==false){
//         return;
//         }
//     }
// }
// int main(){
//     int size=5;
//     int arr[size]={4,1,5,2,3};
//     bubble_sort(arr,size);
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// Selection sort

// #include <iostream>
// using namespace std;
// void selection_sort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         int smallest_index=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[smallest_index]){
//                 smallest_index=j;
//             }
            
//         }
//         if(smallest_index!=i){
//             swap(arr[i],arr[smallest_index]);
//         }
//     }
// }
// int main(){
//     int size=5;
//     int arr[size]={4,1,5,2,3};
//     selection_sort(arr,size);
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// Insertion Sort

// #include <iostream>
// using namespace std;
// void insertion_sort(int n,int arr[]){
//     for(int i=1;i<n;i++){
//         int curr=arr[i];
//         int prev=i-1;
//         while(prev>=0 && arr[prev]>=curr){
//             arr[prev+1]=arr[prev];
//             prev--;
//         }
//         arr[prev+1]=curr;
//     }
// }
// int main(){
//     int size=5;
//     int arr[size]={4,1,5,2,3};
//     insertion_sort(size,arr);
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
    
//     return 0;

// }

// hw practise , dry run , descending order also

//bubble sort {4,1,5,2,3}

// #include <iostream>
// using namespace std;
// void bubble_sort_asc(int n,int arr[]){
//     for(int i=0;i<n-1;i++){
//         bool check=false;
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 check=true;
//             }
//         }
//         if(check==false){
//             return;
//         }
//     }
// }
// void bubble_sort_des(int n,int arr[]){
//     for(int i=0;i<n-1;i++){
//         bool check=false;
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]<arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 check=true;
//             }
//         }
//         if(check==false){
//             return;
//         }
//     }
// }


// void selection_sort_asc(int n,int arr[]){
//     for(int i=0;i<n-1;i++){
//         int smallest_index=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[smallest_index]>arr[j]){
//                 smallest_index=j;
//             }
//         }
//         if(smallest_index!=i){
//             swap(arr[i],arr[smallest_index]);
//         }
//     }
// }
// void selection_sort_des(int n,int arr[]){
//     for(int i=0;i<n-1;i++){
//         int greater_index=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[greater_index]<arr[j]){
//                 greater_index=j;
//             }
//         }
//         if(greater_index!=i){
//             swap(arr[i],arr[greater_index]);
//         }
//     }
// }

// void insertion_sort_asc(int n,int arr[]){
//     for(int i=1;i<n;i++){
//         int curr=arr[i];
//         int prev=i-1;
//         while(prev>=0 && arr[prev]>curr){
//             arr[prev+1]=arr[prev];
//             prev--;
//         }
//         arr[prev+1]=curr;
//     }
// }

// void insertion_sort_des(int n,int arr[]){
//     for(int i=1;i<n;i++){
//         int curr=arr[i];
//         int prev=i-1;
//         while(prev>=0 && arr[prev]<curr){
//             arr[prev+1]=arr[prev];
//             prev--;
//         }
//         arr[prev+1]=curr;
//     }
// }
// int main(){
//     int size=5;
//     int arr[size]={4,1,5,2,3};
//     insertion_sort_des(size,arr);
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }


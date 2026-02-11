//2d array

// #include <iostream>
// using namespace std;
// int main(){
//     int row=4,col=3;
//     int matrix[row][col]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
//     matrix[2][1]=18;
//     cout<<matrix[2][1]<<endl;
//     return 0;
// }

//loops

// #include <iostream>
// using namespace std;
// int main(){
//     int rows=4,cols=3;
//     int matrix[rows][cols];
    //input
    // for(int i=0;i<rows;i++){
    //     for(int j=0;j<cols;j++){
    //         cin>>matrix[i][j];
    //     }
    // }
    //output
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// bool search(int matrix[][3],int target,int rows,int cols){
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             if(matrix[i][j]==target){
//                 return true;
//             }
//         }
//     }
//     return false;
// }
// int main(){
//     const int rows=3,cols=3;
//     int matrix[rows][cols]={{1,2,3},{4,5,6},{7,8,9}};
//     int target=8;
//     bool val=search(matrix,target,rows,cols);
//     if(val==true){
//         cout<<"found";
//     }else{
//         cout<<"not found";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// pair<int,int> search(int matrix[][3],int target,int rows,int cols){
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             if(matrix[i][j]==target){
//                 pair<int,int>a={i,j};
//                 return a;
//             }
//         }
//     }
//     pair<int,int>a={-1,-1};
//     return a;
// }
// int main(){
//     const int rows=3,cols=3;
//     int matrix[rows][cols]={{1,2,3},{4,5,6},{7,8,9}};
//     int target=8;
//     pair<int,int>val=search(matrix,target,rows,cols);
//     cout<<val.first<<endl;
//     cout<<val.second<<endl;
//     return 0;
// }

//rows
// #include <iostream>
// using namespace std;
// int maximum(int matrix[][3],int rows,int cols){
//     int maxSum=INT_MIN;
//     for(int i=0;i<rows;i++){
//         int sum=0;
//         for(int j=0;j<cols;j++){
//             sum=sum+matrix[i][j];
//             maxSum=max(sum,maxSum);
//         }
//     }
//     return maxSum;
// }
// int main(){
//     const int rows=3,cols=3;
//     int matrix[rows][cols]={{1,2,3},{4,5,6},{7,8,9}};
//     cout<<maximum(matrix,rows,cols);
//     return 0;
// }

//columns
// #include <iostream>
// using namespace std;
// int maximum(int matrix[][3],int rows,int cols){
//     int maxSum=INT_MIN;
//     for(int i=0;i<cols;i++){
//         int sum=0;
//         for(int j=0;j<rows;j++){
//             sum=sum+matrix[j][i];
//             maxSum=max(sum,maxSum);
//         }
//     }
//     return maxSum;
// }
// int main(){
//     const int rows=3,cols=3;
//     int matrix[rows][cols]={{1,2,3},{4,5,6},{7,8,9}};
//     cout<<maximum(matrix,rows,cols);
//     return 0;
// }

//diagonal sum

// #include <iostream>
// using namespace std;
// int diagonalSum(int matrix[][4],int size){
//     int sum=0;
//     for(int i=0;i<size;i++){
//         for(int j=0;j<size;j++){
//             if(i==j){
//                 sum=sum+matrix[i][j];
//             }else if(j==size-i-1){
//                 sum=sum+matrix[i][j];
//             }
//         }
//     }
//     return sum;
// }
// int main(){
//     int size=4;
//     int matrix[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
//     cout<<diagonalSum(matrix,size);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int diagonalSum(int matrix[][4],int size){
    //PD=i=j
    //SD=j=size-1-i
//     int sum=0;
//     for(int i=0;i<size;i++){
//         sum+=matrix[i][i];
//         if(i!=size-1-i){
//             sum+=matrix[i][size-i-1];
//         }
//     }
//     return sum;
// }
// int main(){
//     int size=4;
//     int matrix[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
//     cout<<diagonalSum(matrix,size);
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
    //rows=matrix.size()
    //columns=matrix[i].size()
//     vector<vector<int>>matrix={{1,2,3},{4,5,6},{7,8,9}};
//     for(int i=0;i<matrix.size();i++){
//         for(int j=0;j<matrix[i].size();j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;

// }

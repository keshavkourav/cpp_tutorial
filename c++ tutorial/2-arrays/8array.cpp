// .....................................storing elements in array

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5];  //declarition
//     arr[0]=6; //set
//     arr[1]=2;  
//     arr[2]=8; 
//     arr[3]=5; 
//     arr[4]=0; 

//     cout<<arr[0];
//     cout<<arr[1];
//     cout<<arr[2];
//     cout<<arr[3];
//     cout<<arr[4];
// }

// .....................................using for loop array initilazation
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5];  //declarition

//     cout<<"enter elements of array";

//     for(int i=0; i<5; i++){
//         cin>>arr[i];
//     }
//     for(int i=0; i<5; i++){
//         cout<<arr[i]<<" ";
//     }
// }

// .........................................array initilization 2nd method

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {4,5,68,3,5};
//     for(int i=0; i<5; i++){
//         cout<<arr[i]<<" "; 
//     }
// }
// .........................................array initilization output should be from 5 to1 manner

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {4,5,68,3,5};
//     for(int i=4; i>=0; i--){
//         cout<<arr[i]<<" "; 
//     }
// }

// .......................................QUESTIONS ON ARRAY 
//...................................................................


// ..................................calculate tthe sum of all the elements in the given array............

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {4,5,2,4,5};
//     int a=0;
//     for(int i=0; i<=4; i++){
//         a= a+arr[i];
       
//     }
//      cout<<a;
// }

// ..................................to calculate product......................................

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {4,5,2,4,5};
//     int a=1;
//     for(int i=0; i<=4; i++){
//         a= a*arr[i];
       
//     }
//      cout<<a;
// }

// ....................................find maximum value out of all the elements in the array......

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {4,5,2,7,5};
//     int mx=arr[0];
//     for(int i=0; i<=4; i++){
//         mx= max(mx,arr[i]);
//     }
//      cout<<mx;
// }

// ......................................question at (9:53:58) time college wallah solution==.....

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n...";
//     cin>>n;

//     int a;
//     int arr[n];

//     for(int i=1; i<=n; i++){
//         a=i*i;
//         arr[n]=a;
    
//         cout<<arr[n]<<" ";
//     }
// }

//...................................question at (9:54:52) time college wallah solution==.....

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     for(int i=0; i<=4; i++){
//         if(i%2!=0){
//             cout<<arr[i]*2<<" ";
//         }
//         if(i%2==0){
//             cout<<arr[i]+10<<" ";
//         }
//     }
// }

//...................................question at (9:57:00) time college wallah solution==.....

// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"enter a..";
//     cin>>a;

//     int arr[5] = {4,9,2,7,5};
//     for(int i=0; i<=4; i++){
//         if(a<arr[i]){
//         cout<<arr[i]<<" ";
//         }
//     }
// }

//.....................................9;58:33 solution

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int a=0;
//     int b=0;
//     for(int i=0; i<=4; i++){
//         if(i%2!=0){
//             a=a+arr[i];
//         }
//         if(i%2==0){
//             b=b+arr[i];
//         }
//     }
//     cout<<a<<endl<<b<<endl;
//         if(a>b){
//             cout<<a-b;
//         }
//         if(a<b){
//             cout<<b-a;
//         }
// }

//.......................................10;00;00

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {4,5,2,7,5};
//     int mx=arr[0];
//     for(int i=0; i<=4; i++){
//         mx= max(mx,arr[i]);
//     }
//     int smax=arr[0];
//     for(int j=0; j<=4; j++){
//         if(arr[j]!=mx)
//         smax= max(smax,arr[j]);
//     }
//         cout<<smax;
    
// }

//........................................10;05;12

// #include<iostream>
// using namespace std;
// int main(){
//     int a[5] = {4,7,68,3,5};
//     int b[5];
//     for(int i=4; i>=0; i--){

//         b[i]=a[i];
       
//         }
//          cout<<b[0];
//          cout<<b[1];
//          cout<<b[2];
//          cout<<b[3];
//          cout<<b[4];
// }
    

//.....................................10;10;30;

#include<iostream>
using namespace std;
int main(){
    int a[5]={3,5,6,77,6};
}
// #include <iostream>
// using namespace std;
// int main(){
//     int m;
//     cout<<"enter no. of raws...";
//     cin>>m;

//     int n;
//     cout<<"enter no. of coloumns...";
//     cin>>n;

//     for(int i=1; i<=m; i++){
//         cout<<endl;
//         for(int j=1; j<=n; j++){
//             cout<<"*";
//         }
//     }
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int m;
//     cout<<"enter no. of raws...";
//     cin>>m;

//     int n;
//     cout<<"enter no. of coloumns...";
//     cin>>n;

//     for(int i=1; i<=m; i++){
//         cout<<endl;
//         for(int j=1; j<=n; j++){
//             cout<<j;
//         }
//     }
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int m;
//     cout<<"enter no. of raws...";
//     cin>>m;

//     int n;
//     cout<<"enter no. of coloumns...";
//     cin>>n;

//     for(int i=1; i<=m; i++){
//         cout<<endl;
//         for(int j=1; j<=n; j++){
//             cout<<char (j+64);
//         }
//     }
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int m;
//     cout<<"enter no. of raws...";
//     cin>>m;

//     int n;
//     cout<<"enter no. of coloumns...";
//     cin>>n;

//     for(int i=1; i<=m; i++){
//         cout<<endl;;
//         for(int j=1; j<=n; j++){
//             cout<<char (i+64);
//         }
//     }
// }
// ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
// #include <iostream>
// using namespace std;
// int main(){
//     int m;
//     cout<<"enter no. of raws...";
//     cin>>m;

//     int n;
//     cout<<"enter no. of coloumns...";
//     cin>>n;

//     for(int i=1; i<=m; i++){
//         cout<<endl;
//             for(int j=1; j<=i; j++){
//                 if(i%2==0){
//                     cout<<char (j+64);}
//                 else{
//                     cout<<j;
//                 }
//             }
//     }
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int m;
//     cout<<"enter no. of raws...";
//     cin>>m;

//     int n;
//     cout<<"enter no. of coloumns...";
//     cin>>n;

//     for(int i=1; i<=m; i++){
//         if(i%2!=0){
//         cout<<endl;
//         }
//         for(int j=1; j<=i; j++){
//             if(j%2!=0 and i%2!=0){
//             cout<<j;
//             }
//         }
//     }
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter no. of raws";
//     cin>>n;
//     int a=1 ;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<a<<" ";
//             a++;
//         }
//         cout<<endl;
//     }
// }




//    code to print>   *  
//                     *
//                 * * * * *
//                     * 
//                     * 


// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter no. of raws";
//     cin>>n;
//     int a=1 ;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             if(i==3 or j==3){
//                 cout<<"*"<<" ";
//             }
//             else{
//                 cout<<" "<<" ";
//             }

            
//         }
//         cout<<endl;
//     }
// }

// to print..............
// * * * * * *
// *         *
// *         *
// * * * * * *

// #include <iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cout<<"enter no. of raws";
//     cin>>n;
//     int a=1 ;
//     cout<<"enter no. of coloumns m";
//     cin>>m;

//     for(int i=1; i<=n; i++){
//         cout<<endl;
//         for(int j=1; j<=m; j++){
//             if((i==2 or i==3) and (j>=2 and j<=5)){
//             cout<<" "<<" ";
//             }
//             else{
//                 cout<<"*"<<" ";
//             }
            

            
//         }
//     }
// }



//         *
//       * *
//     * * *
//   * * * *

// #include <iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cout<<"enter no. of raws";
//     cin>>n;
//     cout<<"enter no. of coloumns m";
//     cin>>m;

//     for (int i=1; i<=n; i++){
//         for(int j=1; j<=n-i+1; j++){
//             cout<<" "<<" ";
//         }
//         for(int j=1; j<=i; j++){
//         cout<<"*"<<" ";

//     }
//         cout<<endl;
//     }
    

// }

//       * * * *
//     * * * *
//   * * * *
// * * * *       

// #include <iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cout<<"enter no. of raws";
//     cin>>n;
//     int a=1 ;
//     cout<<"enter no. of coloumns m";
//     cin>>m;

//     for(int i=1; i<=n; i++){
//         cout<<endl;
//         for(int j=1; j<=m; j++){
//             if(((i+j)>n) and ((i+j)<=m+1)){
//             cout<<"*"<<" ";
//             }
//             else{
//                 cout<<" "<<" ";
//             }
            

            
//         }
//     }
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cout<<"enter no. of raws";
//     cin>>n;
//     int a=1 ;
//     cout<<"enter no. of coloumns m";
//     cin>>m;

//     for(int i=1; i<=n; i++){
//         cout<<endl;
//         for(int j=1; j<=m; j++){
//             if(((i+j)<n+1) or ((i<n  and j>n)-((i==2 and j==5 )or (i==3 and j==5)or(i==3 and j==6)))){
//             cout<<" "<<" ";
//             }
//             else{
//                 cout<<"*"<<" ";
//             }
            

            
//         }
//     }
// }

#include <iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter no. of raws...";
    cin>>m;

    int n;
    cout<<"enter no. of coloumns...";
    cin>>n;

    for(int i=1; i<=m; i++){
        cout<<endl;
        for(int j=1; j<=n; j++){
            cout<<"*";
        }
    }
}
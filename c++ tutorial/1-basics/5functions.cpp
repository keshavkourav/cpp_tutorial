// #include <iostream>
// using namespace std;
// void g(){
//     cout<<"l";
//     return ;
//     cout<<"lk";
// }
// int main(){
//     g();
// }


// #include <iostream>
// using namespace std;
// void sum(int a, int b){
//     cout<<a+b;
// }

// int main(){
//     sum(7,90);
// }

// #include <iostream>
// using namespace std;

// void sum(int a, int b){
//     cout<<a+b;
// }

// int main(){
//     int n;
//     cin>>n;

//     int m;
//     cin>>m;

//     sum(n,m);
// }



// .............................library function
// ...............................................using Cmath library
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main(){
//     cout<<sqrt(10)<<endl;
//     cout<<min(2,3);
// }


// #include <iostream>
// #include <cmath>
// using namespace std;

// int main(){
//     cout<<max(2,3);
// }

// ...........................permutation and combination................
// ................................combinition
// #include <iostream>
// using namespace std;
// int factorial( int x){
//     int fact=1;
//     for(int i=1; i<=x; i++){
//         fact=fact*i;
//     }
//     return fact;
// }
// int main(){
//     int r;
//     cout<<"enter r..";
//     cin>>r;
//     int n;
//     cout<<"enter n..";
//     cin>>n;
    
//     int a=factorial(n);
//     int b=factorial(r);
//     int c=factorial(n-r);

//     cout<<a/(b*c);
// }

// ...........................permutation

// #include <iostream>
// using namespace std;
// int factorial( int x){
//     int fact=1;
//     for(int i=1; i<=x; i++){
//         fact=fact*i;
//     }
//     return fact;
// }
// int main(){
//     int r;
//     cout<<"enter r..";
//     cin>>r;
//     int n;
//     cout<<"enter n..";
//     cin>>n;
    
//     int a=factorial(n);
//     int c=factorial(n-r);

//     cout<<a/c;
// }





// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
// 1 5 10 10 5 1

// #include <iostream>
// using namespace std;
// int fact( int x){
//     int f=1;
//     for(int i=1; i<=x; i++){
//         f*=i;
//     }
//     return f;
// }
// int combination(int n,int r){
   
    
//     int a=fact(n);
//     int b=fact(r);
//     int c=fact(n-r);

//     return a/(b*c);
// }
// int main(){
//     int n;
//     cout<< "enter n";
//     cin>>n;

//     for(int i=0; i<=n; i++){
//         for(int j=0; j<=i; j++){
//             cout<<combination(i,j)<<" ";
//         }
//         cout<<endl;
//     }
// }


// ...............................PASCALS TRIANGLE.......

//     1
//    1 1
//   1 2 1
//  1 3 3 1
// 1 4 6 4 1

// #include <iostream>
// using namespace std;
// int fact( int x){
//     int f=1;
//     for(int i=1; i<=x; i++){
//         f*=i;
//     }
//     return f;
// }
// int combination(int n,int r){
   
    
//     int a=fact(n);
//     int b=fact(r);
//     int c=fact(n-r);

//     return a/(b*c);
// }
// int main(){
//     int n;
//     cout<< "enter n";
//     cin>>n;

//     for(int i=0; i<=n; i++){
//         for(int j=0; j<=n-i-1; j++){
//             cout<<" ";
//         }
//         for(int j=0; j<=i; j++){
//             cout<<combination(i,j)<<" ";
//         }
//         cout<<endl;

//     }
// }




//..............................................SWAP TWO NUMBERS.............................................................



// ........................................method 1 BY USING ANOTHER VARIABLE ........................


// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"x=";
//     cin>>x;

//     int y;
//     cout<<"y=";
//     cin>>y;

//     int temp;
//     temp=x;

//     x=y;
    
//     y=temp;

//     cout<<x<<" "<<y;


// }


// .......................................method 2 BY FUNCTION.................................................


// #include<iostream>
// using namespace std;
// int gainx(int x , int y){
//     x=y;
//     return x;
// }
// int main(){
//     int x;
//     cout<<"x=";
//     cin>>x;
//     int y;
//     cout<<"y=";
//     cin>>y;

//     cout<<"x="<<gainx(x,y);

//     y=x;
//     cout<<endl<<"y="<<y;


// }

// .......IMP..........................method 3 without using extra variable.........


// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"x=";
//     cin>>x;
//     int y;
//     cout<<"y=";
//     cin>>y;
//             //suppose x=5 and y=4
//     x=x+y; //x=5+4=9 
//     y=x-y; // y=9-4=5 which is x ..now value of x is swaped  to y
//     x=x-y;  // x=9-5=4 which is 4 hence value of y is swaped to x 

//     cout<<"x="<<x;
//     cout<<"y="<<y;
// }


//........VIMP..................Method 4 PASS BY REFERENCE.........................

// .............understand pass by value

// #include<iostream>
// using namespace std;
// void swap( int x , int y){
//     int temp;
//     temp=x;
//     x=y;
//     y=temp;
// }
// int main(){
//     int x;
//     cout<<"x=";
//     cin>>x;
//     int y;
//     cout<<"y=";
//     cin>>y;

//     swap(x , y);
//     cout<<x<<" "<<y;
// }

//...................by pass by reference..
// #include<iostream>
// using namespace std;
// void swap( int& x , int& y){
//     int temp;
//     temp=x;
//     x=y;
//     y=temp;
// }
// int main(){
//     int x;
//     cout<<"x=";
//     cin>>x;
//     int y;
//     cout<<"y=";
//     cin>>y;

//     swap(x , y);
//     cout<<x<<" "<<y;
// }

//...............................................print n to 1 no. using recursion............

// #include<iostream>
// using namespace std;
// void print( int n){
//     if(n==0)return; //BASE CASE
//     cout<<n<<endl;  // CALL
//     print(n-1);    //WORK
// }
// int main(){
//     int n;
//     cout<<"enter n..";
//     cin>>n;
//     print(n);
// }

//............................................print 1 to n .................................

//............................my method................NO NEED

// #include<iostream>
// using namespace std;
// void print( int i,int n){
//     if(n<i)return;
//     cout<<i<<endl;
//     print(i+1,n);
    
// }
// int main(){
//     int n;
//     cout<<"enter n..";
//     cin>>n;

//     print(1,n);
// }

//.......IMPORTANT METHOD.........................method..................VIP......................................................VVVVVIMP

// #include<iostream>
// using namespace std;
// void print( int n){
//     if(n==0)return; //BASE CASE
//     print(n-1);    //WORK....................first we do work then call
//     cout<<n<<endl;  // CALL...................results in reverse process and successfull
// }
// int main(){
//     int n;
//     cout<<"enter n..";
//     cin>>n;
//     print(n);
// }

//........................................PRINT SUM FROM 1 TO n (RETURN TYPE) USING RECURSION............

// #include<iostream>
// using namespace std;

// int sum( int n){
//     if(n==1)return 1;
//     return n+sum(n-1);
// }

// int main(){
//     int n;
//     cout<<"enter n..";
//     cin>>n;

//     cout<<sum(n);

// }

// ...................MAKE A FUNCTION WHICH CALCULATES THE FACTORIAL OF n USING RECURSION..................

// #include<iostream>
// using namespace std;

// int fact( int n){
//     if(n==1)return 1;
//     return n*fact(n-1);
// }

// int main(){
//     int n;
//     cout<<"enter n..";
//     cin>>n;

//     cout<<fact(n);

// }

// ..........................MAKE A FUNCTION WHICH CALCULATES a RAISED TO THE POWER b USING RECURSION..........

// #include<iostream>
// using namespace std;

// int powerr( int a ,int b){
//     if (b==0) return 1;
//     return a*powerr(a,b-1);
// }

// int main(){
//     int a;
//     cout<<"enter a..";
//     cin>>a;

//     int b;
//     cout<<"enter b..";
//     cin>>b;

//     cout<<powerr(a,b);

// }

//.,<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

// .................................MULTIPLE CALLS........................VVIMP....................................

//.>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

//...............FUNCTIION TO CALCULATE THE Nth FIBONACCI NUMBER USING RECURSION....................................

// #include<iostream>
// using namespace std;

// int fibo( int a ){
//     if (a==1 || a==2) return 1;
//     return fibo(a-1)+fibo(a-2);
// }


// int main(){
//     int a;
//     cout<<"enter a..";
//     cin>>a;

//     cout<<fibo(a);

// }

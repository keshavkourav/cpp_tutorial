// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cout<<"enter the no.";
//     cin>>n ;
//     if(n%2==0)
//         cout<<"the no.is even";
//     else
//         cout<<"the no. is odd";
//     return 0;

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number";
//     cin>>n;
//     if(n>=0)
//         cout<<n;
//     if(n<=0)
//         cout<<-n;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     float c;
//     cout<<"enter cost price c:";
//     cin>>c;
//     float s;
//     cout<<"enter selling price s:";
//     cin>>s;
//     if (c==s){
//     cout<<"{seller has not made any profit or  loss}";
//     }
//     if(c>s){
//     cout<<"seller has made a loss of rupees=";
//     cout<<c-s;
//     }
//     if(c<s){
//     cout<<"seller has made a profit of rupees=";
//     cout<<s-c;
//     }
// }

// #include <iostream>
// using namespace std;
// int main(){

//     float l;
//     cout<<"enter length of rectangle:";
//     cin>>l;

//     float b;
//     cout<<"enter breadth of rectangle:";
//     cin>>b;

//     if((l*b) > 2(l+b)){
//         cout<<"area is greater;";
//     }

//     if((l*b) < 2(l+b)){
//         cout<<"perimeter is greater,";
//     }
//     else
//         cout<<"equal";
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     if(a%5==0 || a%3==0){
//     cout<<"yes";
//     }
//     else
//     cout<<"no";
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int a;
//      cout<<"enter first number...;";
//     cin>>a;
//     int b;
//      cout<<"enter second number...;";
//     cin>>b;
//     int c;
//      cout<<"enter third number...;";
//     cin>>c;

//     if(a+b>c and b+c>a and c+a>b){
//         cout<<"yes it can be the side of the triangle.......";
//     }
//     else
//         cout<<"no";

// }


// #include<iostream>
// using namespace std;
// int main(){
//         int a;
//      cout<<"enter first number...;";
//     cin>>a;
//     int b;
//      cout<<"enter second number...;";
//     cin>>b;
//     int c;
//      cout<<"enter third number...;";
//     cin>>c;

//     if(a>b and a>c){
//         cout<<"a is greatest of all time........";
//     }
//     else if(b>a and b>c){
//         cout<<"b is greatest of all time........";
//     }
//     else4
//         cout<<"c is greatest of all time........";
    
// }

// #include<iostream>
// using namespace std;
// int main (){
//     int a ;
//     cout<<"enter the number....";
//     cin>>a;
//     if((a%3==0 or a%5==0)and(a%15!=0))
//     {
//         cout<<"yes divisible by 5 or 3 and not divisible by 15...";
//     }
//     else
//         cout<<"not divisible by 15";

// }


// ............................................//NESTED IF ELSE ..................................................................

// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"enter the first number....";
//     cin>>a;
//     int b ;
//     cout<<"enter the the second number,,,,";
//     cin>>b;
//     int c;
//     cout<<"enter the third number,,,,,,";
//     cin>>c;

//     if(a>b){
//         if(a>c){
//             cout<<a<<"is greatest";
//         }
//         else{
//             cout<<c<<"is greatest";
//         }
//     }
//     else{
//         if(b>c){
//             cout<<b<<"is greatest";
//         }
//         else{
//             cout<<c<<"is GOAT.....";
//         }
//     }
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"enter the age of ram";
//     cin>>a;
//     int b;
//     cout<<"enter the age of shyam";
//     cin>>b;
//     int c;
//     cout<<"enter the age of ajay";
//     cin>>c;

//     if(a>b){
//         if(c>b){
//             cout<<b<<"that is shyam is youngest...";
//         }
//         else{
//             cout<<c<<"that is ajay is youngest......";
//         }
//     }
//     else{
//         if(c>a){
//             cout<<a<<"that is ram is youngest..... ";
//         }
//         else{
//             cout<<c<<"that is ajay is youngest....";
//         }
//     }
// }

// #include <iostream>
// using namespace std;
// int main (){
//     int a;
//     cout<<"enter the percentange of student...";
//     cin>>a;
//     if(81<=a and a<=100){
//         cout<<"very good....";
//     }
//     else if(61<=a and a<=80){
//         cout<<"good....";
//     }
//     else if (41<=a and a<=60){
//         cout<<"average.....";
//     }
//     else{
//         cout<<"fail.....";
//     }
// }

// ..............................
// #include <iostream>
// using namespace std;
// int main(){
//     int x ;
//     cout<<"enter the coordinate of x...";
//     cin>>x;
//     int y ;
//     cout<<"enter the coordinate of y...";
//     cin>>y;

//     if (x>0 and y>0){
//         cout<<x<<" , "<<y<<" lies in first quadrant.....";
//     }
//     else if (x<0 and y>0){
//         cout<<" lies in second quadrant...";
//     }
//     else if (x<0 and y<0){
//         cout<<"lies in third quadrant.....";
//     }
//     else if(x>0 and y<0){
//         cout<<"lies in fourth quadrant......";
//     }
//     else if(x==0 and y==0){
//         cout<<"lies at origin";
//     }
//     else if(x==0 and y!=0){
//         cout<<"lies on y-axis....";
//     }
//     else{
//         cout<<"lies on x-axis";
//     }
// }

// #include <iostream>
// using namespace std;
// int main(){
//     float a;
//     cout<<"enter the first no.,......";
//     cin>>a;
//     char op;
//     cout<<"enter operator (+,-,*,/)";
//     cin>>op;
//     float b;
//     cout<<"enter the second no.,......";
//     cin>>b;
//     if(op=='+'){
//         cout<<a+b;
//     }
//     if(op=='-'){
//         cout<<a-b;
//     }
//     if (op=='*'){
//         cout<<a*b;
//     }
//     if (op=='/'){
//         cout<<a/b;
//     }
// }

// #include <iostream>
// using namespace std;
// int main(){
//     float a;
//     cout<<"enter the first no.,......";
//     cin>>a;
//     char op;
//     cout<<"enter operator (+,-,*,/)";
//     cin>>op;
//     float b;
//     cout<<"enter the second no.,......";
//     cin>>b;
//     switch(op){
//         case '+':
//             cout<<a+b<<endl;
//             break;
//         case '-':
//             cout<<a-b<<endl;
//             break;
//         case '*':
//             cout<<a*b<<endl;
//             break;
//         case '/':
//             cout<<a/b<<endl;
//             break;
//         default:
//             cout<<"invalid"<<endl;
//     }
// }


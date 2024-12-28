// .......................FOR LOOP...........................

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter no.of times you wanna print hw...";
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         cout<<"hellow world"<<endl;
//     }
// }

// ................................1 to 100
// #include <iostream>
// using namespace std;
// int main(){
//     for(int i=1; i<=100; i++){
//         cout<<i<<endl;
//     }
// }

// ................................even from 1 to 100

// #include <iostream>
// using namespace std;
// int main(){
//     for(int i=2; i<=100; i+=2){
//         cout<<i<<endl;
//     }
// }
// ...................................odd from 1 to 100
// #include <iostream>
// using namespace std;
// int main(){
//     for(int i=1; i<=100; i++){
//         if(i%2!=0)cout<<i<<endl;
//     }
// }

// ..................................table of 19 

// #include <iostream>
// using namespace std;
// int main(){
//     for(int i=1; i<=10; i++)
//     cout<<i*19<<endl;
// }

// ..................................display this AP-1,3,5,7,9..upto n terms

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     cout<<"AP-";
//     for(int i=1; i<=n; i++){
//         cout<<i+2<<",";

//     }
// }

// ..................................display gp-1,2,4,8,16,32,... upto n terms

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a=1;
//     cout<<"GP-";
//     for(int i=1; i<=n; i++){
//         cout<<a<<",";
//         a=a*2;

//     }
// }


// ....................................BREAK STATEMENT.................................

// .............WAP to find  the highest factor of a number 'n' (other than itself)


// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=n-1; i>=1; i--){
//         if(n%i==0){
//             cout<<i<<" ";
//             break;
//         }
//     }

// }

// ..................................CONTINUE STATEMENT...................................

// #include <iostream>
// using namespace std;
// int main(){
//     for(int i=1; i<=100; i++){
        
//         if(i==3)continue;
//         if(i==8)continue;
//         cout<<i<<endl;
//     }
// }
// #include <iostream>
// using namespace std;
// int main(){
//     for(int i=1; i<=100;){
//          cout<<i<<endl;
//         if(i+=2)continue;
       
//     }
// }

// ..............................................WHILE............................................


// #include <iostream>
// using namespace std;
// int main(){
//     int i=1;
//     while (i<=10)
//     {
//         cout<<i<<"\n";
//         i++;
//     }
    
// }

// ............................................DO WHILE...............................................

// #include <iostream>
// using namespace std;
// int main(){
//     int i=1;
//     do{
//         cout<<i<<endl;
//         i++;
//     } while(i<=10);
    
// }

// ...................<<<<<<<<<>>>>DO WHILE IS SIMIRAL TO WHILE BUT IT CAN RUN ATLEAST ONE TIME WHEN THE CONDITION IS UNSATISFIED......FOR EG..



// #include <iostream> //THIS IS WHILE CODE
// using namespace std;
// int main(){
//     int i=11;
//     while (i<=10)
//     {
//         cout<<i<<"\n";
//         i++;
//     }
    
// }


// #include <iostream>//THIS IS DO WHILE (RUN AND SEE THE DIFFERENCE)
// using namespace std;
// int main(){
//     int i=11;
//     do{
//         cout<<i<<endl;
//         i++;
//     } while(i<=10);
    
// }

// ...........................questions using operators..............................,,,,,,,,


// #include <iostream>
// using namespace std;
// int main(){
//     int count=0;
//     int x;
//     cin>>x;
//     while(x>0){
//         x=x/10;
//         count++;
//     }
//         cout<<count;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n..";
//     cin>>n;
//     while(n>0){
//         int ld=n%10;
//         n=n/10;
//         cout<<ld;

//     }
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int y=1;
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         y=y*i;
//     }
//     cout<<y;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int y=1;
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         y=y*i;
//     cout<<y<<endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int i=65;
//     while( i<91){
//     cout<<i<<" "<<char(i)<<endl;
//     i++;
//     }
// }
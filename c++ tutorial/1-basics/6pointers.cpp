//......................to print address..........

// #include <iostream>
// using namespace std;
// int main(){
//     int x=4;
//     cout<<&x; //0x61ff0c
// }

// .............................to store address 

// #include <iostream>
// using namespace std;
// int main(){
//     int x=4;
//     int* p=&x;

//     cout<<&x<<endl; 

//     cout<<p;// both provide same answer

// }

//.................................................dereference operator *p ..............

// #include <iostream>
// using namespace std;
// int main(){
//     int x=4;
//     int*p=&x;

//     cout<<&p<<endl;  // address of pointer p
//     cout<<p<<endl;   //we get address of x
//     cout<<*p;       // we get value of x
// }



//.................................................pass by reference using pointers..........
//...................................swap 2 numbers.....................................

// ..............................first method (by sending values)
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


// ........................second method (by sending address)the realone.....

#include<iostream>
using namespace std;
void swap( int* a, int* b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int x;
    cout<<"x=";
    cin>>x;
    int y;
    cout<<"y=";
    cin>>y;

    swap(&x , &y);
    cout<<x<<" "<<y;
}

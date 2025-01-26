// #include<iostream>
// using namespace std;



// // int minofTwo(int a, int b) {
// //     if(a<b) {
// //         return a;
// //     } else {
// //         return b;
// //     }
// // }
// int sumN(int n) {
//     int sum =0;
//     for(int i=1; i<=n; i++) {
//         sum += i;
//     }
//     return sum;
// }

// int main(){
    
//     cout<<sumN(10)<<endl;

//     return 0;
    
// }

// int sum(int a,int b){
//     return (a+b);
// }
// #include<iostream>
// using namespace std;
// int main() {
   
//     cout<<sum(34,35);
    
//     return 0;
// }

// int sum(int n) {
//     int sum = 0;
//     for(int i = 0; i<=n; i++) {
//         sum += i;

// }
// return sum;
// }
// #include<iostream>
// using namespace std;
// int main() {
// cout<<sum(10);

//     return 0;
// }

int minofN(int a,int b,int c) {
    if (a <= b && a <= c )
    {
      return a;
    }
    else if(a <= b && a<= c){
        return b;
    }
    else {
        return c;
    }
    
}
#include<iostream>
using namespace std;
int main() {
    cout<<minofN(23,43,24)<<endl;
    cout<<"min of Two number:  "<<minofN(33,433,43)<<endl;

    return 0;
}

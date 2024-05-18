// Write a C++ program that sums all odd numbers between 1 and 50 but stops the summation when the sum exceeds 100 using a while loop.
 #include<bits/stdc++.h>
using namespace std;

int main(){
    int sum;
    for(int i=1;i<=50;i++){
        if(sum>=100){
            break;
        }
        if(i%2!=0){
            sum+=i;
        }
    }
    cout<<"sum is exeeds to 100 : is  "<<sum;
}




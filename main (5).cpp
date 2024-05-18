//Write a C++ program that generates and prints the first 15 terms of the sequence defined by: an​=2an−1​+1 with a1​=1 using a for loop. consider n is the nth term

 #include<bits/stdc++.h>
using namespace std;

int main(){
    int a=1;
    for(int i=1;i<=15;i++){
        cout<<a<<" ";
        a=(2*a)+1;
    }
}




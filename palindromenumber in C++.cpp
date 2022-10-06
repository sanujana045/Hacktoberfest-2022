#include <stdio.h>
#include<iostream>
using namespace std;
int main() {
  int n, reversed = 0, r, real;
     cout<<"Enter a number";
    cin>>n;
    real = n;

    // reversed integer is stored in reversed variable
    while (n != 0) {
        r = n % 10;
        reversed = reversed * 10 + r;
        n /= 10;
    }

    // palindrome if orignal and reversed are equal
    if (real == reversed)
    cout<<"The number is  a palindrome:"<<real;
    else
       cout<<"The number is not a palindrome:"<<real;

    return 0;
}
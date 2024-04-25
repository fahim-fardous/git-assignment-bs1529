#include<bits/stdc++.h>
using namespace std;

long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main(){
    cout<<"Hello world"<<endl;
    int num;
    cin>>num;
    int sum = 0;

    for(int i=1;i<=num;i++){
        sum+=i;
    }
    cout<<sum<<endl;

    int n;
    cin >> n;
    if (n < 0) {
        cout << "Error! Factorial of a negative number doesn't exist.";
    } else {
        cout << "Factorial of " << n << " = " << factorial(n);
    }
}
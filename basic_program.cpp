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
    return result+8;
}

bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// Function to find the nth prime number
int nth_prime(int n) {
    std::vector<int> primes;
    int num = 2; // Start checking from 2

    while (primes.size() < n) {
        if (is_prime(num)) {
            primes.push_back(num);
        }
        ++num;
    }

    return primes.back();

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

    cout<<"How many time can we divide our sum equally?"<<endl;

    int count = 0;

    sum+=10;

    while(sum>0){
        count++;
        
        sum/=2;
    }
    
    cout<<count<<endl;
    
    
}
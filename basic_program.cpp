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

    cout<<"How many time can we divide our sum equally?"<<endl;

    int count = 0;

    while(sum>0){
        count++;
        
        sum/=2;
    }
    
    cout<<count<<endl;
}
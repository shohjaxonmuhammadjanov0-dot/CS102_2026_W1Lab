#include <iostream>
using namespace std;
int main(){
    int n;
    int product=1;
    int sum=0;
    cin >> n;
    while (n>0){
        int digit=n%10;
        sum+=digit;
        product*=digit;
        n/=10;
    }
    cout <<product-sum<<endl;
    return 0;
}
#include <iostream>
using namespace std;
void listOfNumbers (int n){
    for (int i=1; i<=n; i++){
        if (i%3==0){cout<<"Fizz ";}
        else if (i%5==0) {cout <<"Buzz ";}
        else if (i%3==0 && i%5==0) {cout<<"FizzBuzz ";}
        else cout<<i<<" ";
    }
}
int main() {
    int n;
    cin>>n;
    listOfNumbers(n);
    return 0;
}
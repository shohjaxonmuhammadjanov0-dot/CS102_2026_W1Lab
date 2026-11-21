#include <iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int steps=0;
    while (num>0){
        num=(num%2==0)?num/2:num-1;
        steps++;
    }
    cout <<steps<<endl;
    return 0;
}
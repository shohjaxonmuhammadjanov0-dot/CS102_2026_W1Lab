#include <iostream>
using namespace std;

int main() {
int n;
cin>>n;
int sum=0;
int sign=1;
int count=0;
while (n>0){
    sum=sum+n%10*sign;
    sign=-sign;
    count ++;
    n/=10;
}
if (count%2==0)
sum=-sum;
cout<<sum<<endl;
}
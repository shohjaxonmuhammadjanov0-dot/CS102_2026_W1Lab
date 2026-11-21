#include <iostream>
using namespace std;
int digitSum (int n){
    if (n==0) return 0;
    int sum =0;
    while (n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int sumA=digitSum(a);
    int sumB=digitSum(b);
    int sumC=digitSum(c);
    int bestSum=sumA;
    int bestNum=a;
    if (sumB>bestSum){
        bestSum=sumB;
        bestNum=b;
    }
    if (sumC>bestSum) {
        bestSum=sumC;
        bestNum=c;
    }
    cout << bestNum << " (digit sum " << bestSum << ")" << endl;

    return 0;


}
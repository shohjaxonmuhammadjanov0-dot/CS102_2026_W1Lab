#include <iostream>
using namespace std;

int main() {
	int arrivalTime;
	int delayedTime;
    cout <<"enter arrival time "<<endl;
    cin>>arrivalTime;
    cout<<"enter delayed time "<<endl;
    cin>>delayedTime;
	cout << (arrivalTime + delayedTime) % 24 << endl;
	return 0;
}

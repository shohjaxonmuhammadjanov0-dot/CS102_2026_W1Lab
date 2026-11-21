#include <iostream>

using namespace std;

int main() {
    int year, month, day;
    char dash1, dash2;
    
    cin >> year >> dash1 >> month >> dash2 >> day;
    
    int total_days = day;
    int feb_days = 28;
    

    if ((year % 4 == 0 && year % 100 != 0) || (year % 40 0 == 0)) {
        feb_days = 29;
    }
    
  
    if (month > 1) total_days += 31;
    if (month > 2) total_days += feb_days;
    if (month > 3) total_days += 31;
    if (month > 4) total_days += 30;
    if (month > 5) total_days += 31;
    if (month > 6) total_days += 30;
    if (month > 7) total_days += 31;
    if (month > 8) total_days += 31;
    if (month > 9) total_days += 30;
    if (month > 10) total_days += 31;
    if (month > 11) total_days += 30;
    
    cout << total_days << endl;
    
    return 0;
}
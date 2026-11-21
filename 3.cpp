#include <iostream>
using namespace std;
int main() {
    int number_teams;
    cout<<"enter number of teams ";
    cin >> number_teams;

    int total_matches = 0;
    while (number_teams > 1) {
        total_matches += number_teams / 2;
        number_teams = number_teams / 2 + number_teams % 2;
    }

    cout << total_matches << endl;
    return 0;
}
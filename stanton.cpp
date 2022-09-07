#include <iostream>
#include <string>
using namespace std;

int stanton(string name, int homer, int rbis) {
    int stantonHR = 59;
    int stantonRBI = 132;
    if(homer > stantonHR) {
        cout << name << " hit more home runs than Giancarlo Stanton in 2017." << endl;
        }
    else {
        cout << name << " hit fewer home runs than Giancarlo Stanton in 2017." << endl;
        }
        
    if(rbis > stantonRBI) {
        cout << name << " had more RBIs than Giancarlo Stanton in 2017." << endl;
        }
    else {
        cout << name << " hit fewer RBIs than Giancarlo Stanton in 2017." << endl;
        }
    return 0;
}


int main() {
	string player;
	int hr;
	int rbi;
	cout << "Enter last name of player: ";
	cin >> player;
	cout << "How many home runs?";
	cin >> hr;
	cout << "RBIs?";
	cin >> rbi;
	stanton(player, hr, rbi);
	return 0;
}
#include <iostream>
using namespace std;

int main (){

double time , distance;

cout << "Enter The Distance Taken By A Car: ";
cin >> distance;
cout << "Enter The Time Taken By A Car: ";
cin >> time;
double speed = distance / time;
cout << "The Speed Taken By Car: " << speed << "Hours" << endl;

return 0;
}

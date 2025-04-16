//Lab 9-2.cpp - displays two monthly car payments
//Created/revised by <your name> on <current date>

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double findaverage(double times[], int numElements);
double findlowest(double times[], int numElements);

 int main()
 {
 double finishtimes[5] = {0.0};
 double Avg= 0.0;
 double lowest= 0.0;

 for (int x = 0; x < 5; x += 1)
 {
cout << "Time for race " << x + 1 << ": ";
 cin >> finishtimes[x];
 } 

Avg= findaverage(finishtimes, 5);
lowest = findlowest(finishtimes, 5);

cout << fixed << setprecision(1) << endl;
cout << "average 5K finish time is " << Avg << endl;
cout << "lowest 5K finish time is " << lowest << endl;
return 0;
} //end of main function

 double findaverage(double times[], int numElements)
{
double total = 0.0;

for (int x = 0; x < numElements; x += 1)
total += times[x];
return total / numElements;
} 

double findlowest(double times[], int numElements)
{
double lowest = times[0];
for (int x = 1; x < numElements; x += 1)
if (times[x] < lowest)
lowest = times[x];
return lowest;
 }
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
 double w;
 double h;
 int n = 0;
 cout << "                                              BMI Calculator" << endl ;
 cout << "                                               Version 1.0" << endl ;
 cout << "                                        Made by Shashika T Dayarathna" << "\n";
 cout << "------------------------------------------------------------------------------------------------------------------------" << "\n" << endl ;
 cout << "# Input Yours Weight.(in Kilograms)  := ";
 if (!(cin >> w) || !std::isfinite(w) || w <= 0) {
  cerr << "Enter a positive weight in kilograms." << endl;
  return 1;
 }
 cout << "# " << w << " Kg" << "\n";
 cout << "# Input Yours Height.(in Meters)     := ";
 if (!(cin >> h) || !std::isfinite(h) || h <= 0) {
  cerr << "Enter a positive height in metres." << endl;
  return 1;
 }
  cout << "# " << h << " m" << "\n";
 const double r = w / h / h;
 if (!std::isfinite(r) || r <= 0) {
  cerr << "The BMI is outside the supported numeric range." << endl;
  return 1;
 }
 cout << "# Your BMI Score is                  := " << r;
 cout << "\n" << "\n";
  cout << "------------------------------------------------------------------------------------------------------------------------" << endl ;
 cout << "Good Bye !!!!!!!!!!!!!!!!!!!" << "\n";

 do {
 cout << "Enter number (0 to end): ";
 if (!(cin >> n)) {
  break;
 }
 cout << "You entered: " << n << "\n";
 } while (n != 0);
 return 0;
}

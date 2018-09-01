#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main ()
{
 double w;
 double h;
 double r;	
 double e;
 int n;
 cout << "                                              BMI Calculator" << endl ;
 cout << "                                               Version 1.0" << endl ;
 cout << "                                        Made by Shashika T Dayarathna" << "\n";
 cout << "------------------------------------------------------------------------------------------------------------------------" << "\n" << endl ;
 cout << "# Input Yours Weight.(in Kilograms)  := ";
 cin >> w ;
 cout << "# " << w << " Kg" << "\n";
 cout << "# Input Yours Height.(in Meters)     := ";
 cin >> h;
  cout << "# " << h << " m" << "\n";
 r=w/(h*h);
 cout << "# Your BMI Score is                  := " << r;
 cout << "\n" << "\n";
  cout << "------------------------------------------------------------------------------------------------------------------------" << endl ;
 cout << "Good Bye !!!!!!!!!!!!!!!!!!!" << "\n";

 do {
 cout << "Enter number (0 to end): ";
 cin >> n;
 cout << "You entered: " << n << "\n";
 } while (n != 0);
 return 0;
}

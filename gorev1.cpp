#include <iostream>

int main()
{
std::cout <<"Enter the time to calculate free fall distance: ";
int t;
double g = 9.80665;
std::cin >> t;
std::cout <<"Result: "<< g*t*t/2 << " m" ;
return 0;
}
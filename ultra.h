#ifndef ULTRA_HEADER_H
#define ULTRA_HEADER_H
#include <string>
#include <iostream>
using namespace std;
class Ultra {
	public:
		string value;	//the value of the Ultra object
		friend Ultra operator+(const Ultra a, const Ultra b);
		friend Ultra operator-(const Ultra a, const Ultra b);
		friend Ultra operator*(const Ultra a, const Ultra b);
		friend Ultra operator/(const Ultra a, const int b);
		friend ostream& operator<<(ostream& os,Ultra obj);
		friend istream& operator>>(istream& is, Ultra& obj);
};
#endif
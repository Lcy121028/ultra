#include"ultra.h"
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
Ultra operator+(const Ultra a, const Ultra b) {
	int i;
	const unsigned short sizea = a.value.size();
	const unsigned short sizeb = b.value.size();
	short*a = new short[sizea + sizeb + 1];
	short*b = new short[sizea + sizeb + 1];
	short*c = new short[sizea + sizeb + 1];
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	for (i = 1; i <= sizea; i++) a[i] = a.value[sizea - i] - '0';
	for (i = 1; i <= sizeb; i++) b[i] = b.value[sizeb - i] - '0';
	Ultra result;
	string result_str;
	for (i=1;i<=sizea+sizeb;i++){
		c[i] = a[i] + b[i];
		if (c[i] >= 10) {
			c[i + 1]++;
			c[i] -= 10;
		}
	}
	while (c[i] == '0' && i >= 1) i--;
	for (int j = 1; j <= i; j++) result_str += char(c[j] + '0');
	result.value = result_str;
	return result;
}

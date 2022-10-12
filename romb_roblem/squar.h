#pragma once
#include <iostream>
using namespace std;

class squar {
protected:
	int sin;
public:
	squar() {
		sin = 0;
	}
	squar(int x) {
		sin = x;
	}
	void Printsquar() {
		cout << "square side = " << sin << endl;
	}

};
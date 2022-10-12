#pragma once
#include <iostream>
#include "squar.h"
#include "Circle.h"
using namespace std;

class circlesquar : private squar, private Circle {


public:
	circlesquar(int square, int circle) : squar(square), Circle(circle) {
		if (circle >= square) {
			cout << "Wrong number..." << endl;
			Circle(circle) = 0;
		}
		else if (circle < square) {
			cout << "It's ok..." << endl;
		}
	}

	void Print() {
		this->Printsquar();
		this->PrintCircle();
	}


};
#pragma once
#include <iostream>
#include <math.h>

using namespace std;

class Korni {
protected:
	float a, b;
public:
	Korni(float aK, float bK) : a{ aK }, b{ bK } {};
};


class Korni_lin : public Korni {
public:
	Korni_lin(float aK, float bK) : Korni(aK, bK) {};
	void xs() {
		cout << "x = " << -b / a << endl;
	}
};

class Korni_lin : public Korni {
	float c;
public:
	Korni_lin(float aK, float bK, float cK) : Korni(aK, bK), c{ cK } {};
	void xs() {
		int D = b * b - 4 * a * c;

		if (D < 0) cout << "net kornei\n";
		if (D == 0) cout << "x = " << -b / 2 * a << endl;
		if (D > 0) {
			cout << "x1 = " << (-b + sqrt(D)) / 2 * a << endl;
			cout << "x2 = " << (-b - sqrt(D)) / 2 * a << endl;
		}
	}
};

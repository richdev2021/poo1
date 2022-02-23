#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string.h>
using namespace std;
class mouse{//clase padre
public:
	int area;
	int hzs;
	int max_dpi;
};
class ry :public mouse {//subclases
public:
	int area = 15;
	int hzs = 8200;
	int max_dpi = 16000;
	void CARACTERISTICAS() {
		cout << "area: " << area << " hzs: " << hzs << " maximo dpi" << max_dpi << endl;
	}
};
class lb :public mouse {
public:
	int area = 20;
	int hzs = 16000;
	int max_dpi = 32000;
	void CARACTERISTICAS() {
		cout << "area: " << area << " hzs: " << hzs << " maximo dpi" << max_dpi << endl;
	}
};
class hy :public mouse {
public:
	int area = 12;
	int hzs = 4200;
	int max_dpi = 8000;
	void CARACTERISTICAS() {
		cout << "area: " << area << " hzs: " << hzs << " maximo dpi" << max_dpi << endl;
	}
};
class ds :public mouse {
public:
	int area = 10;
	int hzs = 2000;
	int max_dpi = 4000;
	void CARACTERISTICAS() {
		cout << "area: " << area << " hzs: " << hzs << " maximo dpi" << max_dpi << endl;
	}
};
int main()
{
	int a, b;
	cout << "especificaciones del sistema que usa, seleccione que tipo de producto es (1:mouse ryzer 8.2khz)(2:mouse little bee 16khz)(3:mouse hyper y pulsewater)(4:ds 2)(otro para cerrar)" << endl;
	cin >> a;
	if (a == 1) {
		ry ryz;
		ryz.CARACTERISTICAS();
		return 0;
	}
	else if (a == 2) {
		lb lbe;
		lbe.CARACTERISTICAS();
		return 0;
	}
	else if (a == 3) {
		hy hyy;
		hyy.CARACTERISTICAS();
		return 0;
	}
	else if (a == 4) {
		ds dsa;
		dsa.CARACTERISTICAS();
		return 0;
	}
	else {
		return 0;
	}

	
}

#include "func.h"
using namespace std;
int valid_enter(int* n) {
try {
		string _n;
		cin >> _n;
		*n = stoi(_n);
	}
	catch (...) {
		cout << "Error! Wrong data type entered\n";
		return 0;
	}
	return 1;
}
void arr_time(float* time, int len) {
	float dt = (t_fin - t_st) / float(len - 1);
	for (int i = 0; i < len; i++) {
		time[i] = t_st + i * dt;
	}
}
void arr_Uin(float* Uin, float* time, int len) {
	for (int i = 0; i < len; i++) {
		if (time[i] <= t1) Uin[i] = a * (time[i] - t_st);
		else Uin[i] = a * (t1 - t_st) - b * (time[i] - t1);
	}
}

void arr_Uout(float* Uout, float* Uin, int len) {
	for (int i = 0; i < len; i++) {
		if (Uin[i] <= U3) Uout[i] = U1;
		else if (Uin[i] <= U4) Uout[i] = U1 + (U2 - U1) * pow((Uin[i] - U3), 2) / pow((U4 - U3), 2);
		else Uout[i] = U2;
	}
}

std::string el_1(std::string el_, int len)
{
	std::string el;
	int index = el_.find('.');
	int i = 0;
	while (i <= index + len) {
		el += el_[i];
		i++;
	}
	return std::string(el);
}

float parametr(float* Uout, int len) {
	float U_max = 0, U_min = 10000;
	for (int i = 0; i < len; i++) {
		if (Uout[i] < U_min) U_min = Uout[i];
		if (Uout[i] > U_max) U_max = Uout[i];
	}
	float U_imp = U_min + 0.5 * (U_max - U_min);
	float dlit = 0, dt = 25. / (len - 1);
	for (int i = 0; i < len; i++) {
		if (Uout[i] >= U_imp) dlit += dt;
	}
	return dlit;
}

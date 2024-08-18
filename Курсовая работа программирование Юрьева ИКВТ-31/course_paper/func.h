#include <iostream>
# include <stdio.h>
# include <string>
# include <math.h>
# include <vector>
#define a 12
#define b 12
#define t_st 10
#define t_fin 35
#define t1 22.5
#define U1 20
#define U2 150
#define U3 20
#define U4 100
void arr_time(float* time, int len);
void arr_Uin(float* Uin, float* time, int len);
void arr_Uout(float* Uout, float* Uin, int len);
std::string el_1(std::string el_, int len);
float parametr(float* Uout, int len);
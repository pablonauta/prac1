#include "Punto.h"
#include <iostream>

using namespace std;

Punto::Punto(){
	x = 0;
	y = 0;
}

void Punto::set(float a, float b){
	x = a;
	y = b;
}

float Punto::getx(){
	return this->x;
}

float Punto::gety(){
	return this->y;
}

void Punto::mover(float c, float d){
	this->x = c;
	this->y = d;
}

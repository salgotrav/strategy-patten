#include <iostream>
#include "quackInterface.h"

using namespace std;

void Quack::quack() {
	cout<<"Quacking"<<endl;
}

void Squeak::quack() {
	cout<<"Squeaking"<<endl;
}

void MuteQuack::quack() {
	cout<<"Quack Muted"<<endl;
}

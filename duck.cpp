#include <iostream>
#include "duck.h"

using namespace std;

void Duck::swim() {
	cout<<"Swimming (Duck Class)"<<endl;
}

void MallardDuck::display() {
	cout<<"Displaying Mallard Duck (MallardDuck Class)"<<endl;
}

void RedheadDuck::display() {
	cout<<"Displaying Redhead Duck (RedheadDuck Class)"<<endl;
}

void RubberDuck::display() {
	cout<<"Displaying Rubber Duck (RubberDuck Class)"<<endl;
}

void DecoyDuck::display() {
	cout<<"Displaying Decoy Duck (DecoyDuck Class)"<<endl;
}

void Duck::performFly() {
	flyBehaviour->fly();
}

void Duck::performQuack() {
	quackBehaviour->quack();
}

#include <iostream>
#include "duck.h"
#include "flyInterface.h"
#include "quackInterface.h"

int main() {
	
	Duck* obj = new RubberDuck(new FlyNoWay, new Quack);
	obj->display();
	obj->swim();
	obj->performFly();
	obj->performQuack();
}//end of main













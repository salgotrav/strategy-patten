#ifndef DUCK_H
#define DUCK_H

#include "flyInterface.h"
#include "quackInterface.h"

class Duck {
	protected:	
		FlyBehaviour *flyBehaviour;
		QuackBehaviour *quackBehaviour;
	public:
		void swim(); 	
		virtual void display() = 0;
		void performFly();
		void performQuack();
		//void setFlyBehaviour();
		//void setQuackBehaviour();
}; //end of Duck

class MallardDuck: public Duck {
	public:
		void display();
		MallardDuck(FlyBehaviour* fb, QuackBehaviour* qb) {
			flyBehaviour = fb;
			quackBehaviour = qb;
		}
};//end of MallardDuck

class RedheadDuck: public Duck {
	public:
		void display();
		RedheadDuck(FlyBehaviour* fb, QuackBehaviour* qb) {
			flyBehaviour = fb;
			quackBehaviour = qb;
		}
};//end of RedheaddDuck

class RubberDuck: public Duck {
	public:
		void display();
		RubberDuck(FlyBehaviour* fb, QuackBehaviour* qb) {
			flyBehaviour = fb;
			quackBehaviour = qb;
		}
};//end of RubberDuck

class DecoyDuck: public Duck {
	public:
		void display();
		DecoyDuck(FlyBehaviour* fb, QuackBehaviour* qb) {
			flyBehaviour = fb;
			quackBehaviour = qb;
		}
};//end of DecoydDuck

#endif

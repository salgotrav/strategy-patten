#ifndef FLYINTERFACE_H
#define FLYINTERFACE_H

class FlyBehaviour {
	public:
		virtual void fly() = 0;
};//end of FlyBehaviour

class FlyWithWings: public FlyBehaviour {
	public:
		void fly();
};//end of FlyWithWings

class FlyNoWay: public FlyBehaviour {
	public:
		void fly();
};//end of FlyNoWay

#endif

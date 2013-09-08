#ifndef QUACKINTERFACE_H
#define QUACKINTERFACE_H

class QuackBehaviour {
	public:
		virtual void quack() = 0;
};//end of QuackBehaviour

class Quack: public QuackBehaviour {
	public:
		void quack();
};//end of Quack

class Squeak: public QuackBehaviour {
	public:
		void quack();
};//end of Squeak

class MuteQuack: public QuackBehaviour {
	public:
		void quack();
};//end of MuteQuack

#endif


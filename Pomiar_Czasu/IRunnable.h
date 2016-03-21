#ifndef IRUNNABLE_H
#define IRUNNABLE_H

class IRunnable{
public:
	virtual bool Prepare(int) = 0;
	virtual bool Run() = 0;
	};
#endif

#ifndef IRUNNABLE_HH
#define IRUNNABLE_HH

class IRunnable{
public:
	virtual bool Prepare(int) = 0;
	virtual bool Run() = 0;
	};
#endif

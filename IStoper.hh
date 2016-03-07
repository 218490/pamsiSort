#include <cstdio>
#include <ctime>
#include <oistream>

using namespace std;
class IStoper{
  time_t StartTime;
  time_t StopTime;
  double ElapsedTime;

 public:

  void Start() {
    this->StartTime = clock();
  }
  
  void Stop(){
    this->StopTime = clock();  
  }

  void GetElapsedTime(){

    this->ElapsedTime = double(StopTime-StartTime) / CLOCKS_PER_SEC;
  }

  double DumpToFile(){
    return ElapsedTime;
  }
};

#include <iostream>
using namespace std;

class baseClass final
{
public:
  virtual void perkenalan()
  {
    cout << "Hallo saya fungtion dari base Class";
  }
};

class drivedClass : public baseClass
{
public:
  void perkenalan()
  {
    cout << "Hallo saya dari fungtion drived Class";
  }
};

int main()
{
  drivedClass a;
  a.perkenalan();

  return 0;
}
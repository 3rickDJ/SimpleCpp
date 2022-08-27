#include <iostream>
#include <type_traits>
using namespace std;

class Smartphone {
public:
  virtual void TakeASelfie() = 0;
  virtual void MakeACall() = 0;
};

class Android : public Smartphone {
public:
  void TakeASelfie() { cout << "Android Selfie\n"; };
  void MakeACall() { cout << "Android Calling\n"; };
};

class Iphone : public Smartphone {
public:
  void TakeASelfie() { cout << "Iphone Selfie\n"; }
  void MakeACall() { cout << "Iphone Calling\n"; };
};

int main() {
  Smartphone *s1 = new Android();
  s1->TakeASelfie();
  s1->MakeACall();
  Smartphone *s2 = new Iphone();
  s2->TakeASelfie();
  s2->MakeACall();
};

#include <iostream>

using namespace std;

//const data member - It should always be initialized by the constructor of a class
class Si   //Simple Interest
{
  float p;
  int t;
  const float r;
 public:
   Si():r(2.5)  //declaration of const data member
   {
   }
   void read(float pa, int ti)
   {
       p = pa;
       t = ti;
   }
   float show()
   {
       return (p*t*r)/100;
   }
};

int main()
{
    Si s;
    s.read(1000,10);
    cout << "Simple Interest is " << s.show() << endl;

    return 0;
}

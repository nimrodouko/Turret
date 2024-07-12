#include <iostream>
#include "turret.h"
#include "target.h"
using namespace std;
int main(){

Turret test1;

test1.settargetx(4.3);
test1.settargety(5.9);
cout<<"bang bang ! at "<<test1.rotation_angle()<<" degrees"<<endl;




 
  return 0;
}
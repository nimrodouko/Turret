#include <iostream>
#include "turret.h"
#include "target.h"
using namespace std;
int main(){

Turret test1;

test1.settargetx(5.6);
test1.settargety(4.2);
cout<<"bang bang ! at"<<test1.rotation_angle()<<endl;




 
  return 0;
}
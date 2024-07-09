#include <iostream>
#include "turret.h"
using namespace std;
int main(){

Turret test1;
test1.setnewx(4.0);
test1.setnewy(4.0);

cout<<test1.getx()<<endl;


cout<<test1.rotation_angle()<<endl;

 
  return 0;
}
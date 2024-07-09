#include <cmath>
#include "target.h"

class Turret:public Target
{
public:

double rotation_angle(){
 
        
        
        double angle = atan2(targety,targetx);
         
        double result = angle * 180.0 / (22/7);
      

        return result;

    }



};
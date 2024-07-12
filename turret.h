#include <cmath>
#include "target.h"

class Turret:public Target
{
public:

double rotation_angle(){
 double angle = (sqrt(targetx*targetx) + (targety*targety)+(targetz*targetz));


        
        
        double angle_r = atan2(targety,targetx);
         
        double result = angle_r * 180.0 / (22/7);
      

        return result;

    }



};

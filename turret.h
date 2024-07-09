#include <cmath>
class Turret{
public:
Turret()=default;
Turret(double yparam, double xparam){
    newy = yparam;
    newx = xparam;

}

double rotation_angle(){
 
        
        
        double angle = atan2(newy,newx);
         
        double result = angle * 180.0 / (22/7);

        return result;

    }
    
    void setnewx(double xparam){
        newx = xparam;
        
    }
    void setnewy(double yparam){
    
        newy = yparam;
    }
    double getx(){
        return newx;
    }
    double gety(){
        return newy;
    }
    


private:
   
    double newy;
    double newx;
    


};
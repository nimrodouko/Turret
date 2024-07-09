#ifndef TARGET_H
#define TARGET_H
//position of target
class Target{
public:

double gettargetx(){
    return targetx;

}
double gettargety(){
    return targety;
}
void settargetx(double xmpya){
    targetx = xmpya;
}
void settargety(double ympya){
    targety = ympya;
}

double targetx;
double targety;

};
#endif

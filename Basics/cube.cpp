#include "cube.h"
using namespace std;

double cube::getvolume(){
    return length_ * length_ * length_ ;
}

double cube::getsurfacearea(){
    return 6 * length_ * length_ ;
}

void cube::setlength(double length){
    length_ = length;
}

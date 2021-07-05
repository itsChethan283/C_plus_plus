#include "cube.h"
#include<iostream>
using namespace std;
using namespace cubes;

double cube::getvolume(){
    return length_ * length_ * length_ ;
}

double cube::getsurfacearea(){
    return 6 * length_ * length_ ;
}

void cube::setlength(double length){
    length_ = length;
}

int main(){
    cube c;

    c.setlength(43);
    double volume = c.getvolume();
    cout<<"volume: " << volume << endl;
    return 0;
}

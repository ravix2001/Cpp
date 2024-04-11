#include<iostream>
using namespace std;

//cuboid
float volume(float l , float b , float h){
    return l*b*h;
}

//cube
float volume(float l ){
    return l*l*l;
}

//cylinder
float volume(double r , double h){
    return 3.14*r*r*h;
}

int main()
{

    cout<<"The volume of cuboid is "<<volume(5,6.3,7.7)<<endl;
    cout<<"The volume of cube is "<<volume(4.4)<<endl;
    cout<<"The volume of cylinder is "<<volume(4.555,9)<<endl;
    return 0;
}

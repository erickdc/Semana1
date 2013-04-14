#include "Robot.h"

Robot::Robot(string name,int power_level,string model,string favorite_Food)
{
    this->name=name;
    this->power_level=power_level;
    this->model=model;
    this->favoriteFood=favorite_Food;
    this->x=0;
    this->y=0;
    this->angle=0;
}
string Robot::getFavoriteFood(){
return favoriteFood;
}

void Robot::walk(int steps){
    if(this->angle==0){
        this->x=this->x+steps;
    }else if(this->angle==90){
        this->y=this->y+steps;
    }else if(this->angle==180){
        this->x=this->x-steps;
    }else{
        this->y=this->y-steps;
    }
   //return steps;
}

void Robot::printCoord(){
    cout<<"The coordinate of the robot are: " << "(" << this->x << "," <<this->y <<")"<<endl;
}
void Robot::setAngle(int angles){
    if(angles==0 ||angles==90 || angles==180 || angles==270){
        this->angle=angles;
    }else{
        return;
    }
}
string Robot::getName()
{
    return name;
}

int Robot::getPowerLevel()
{
    return power_level;
}

string Robot::getModel()
{
    return model;
}

Robot::~Robot()
{
    //dtor
}

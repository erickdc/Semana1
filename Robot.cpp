#include "Robot.h"

Robot::Robot(string name,int power_level,string model,string favorite_Food)
{
    this->name=name;
    this->power_level=power_level;
    this->model=model;
    this->favoriteFood=favorite_Food;
}
string Robot::getFavoriteFood(){
return favoriteFood;
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

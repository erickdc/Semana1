#ifndef ROBOT_H
#define ROBOT_H

#include <iostream>
#include <string>

using namespace std;

class Robot
{
private:
    string name;
    int power_level;
    string model;
    string favoriteFood;
    int x;
    int y;
    int angle;

public:
    Robot(string name,int power_level,string model,string favorite_Food);
    string getName();
    int getPowerLevel();
    string getModel();
    string getFavoriteFood();
    void walk(int steps);
    void setAngle(int angle);
    void printCoord();
    virtual ~Robot();
};

#endif // ROBOT_H

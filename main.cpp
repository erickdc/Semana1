#include <iostream>
#include <string>
#include "Robot.h"

using namespace std;

int main()
{
    string name;
    char yesorno;
    int power_level,angle,steps;
    string model;
    string food;

    cout << "Robot name? ";
    cin >> name;
    cout << "Robot power_level? ";
    cin >> power_level;
    cout << "Robot model? ";
    cin >> model;
    cout<< "Favorite Food?";
    cin >> food;
    cout << endl << "---Creating robot---" << endl;
    Robot robot(name,power_level,model,food);
    cout << "---Robot created---" << endl;

    cout << endl << "Robot name:" << robot.getName() << endl;
    cout << "Robot power level:" << robot.getPowerLevel() << endl;
    cout << "Robot model:" << robot.getModel() << endl;
    cout<<"Robot Favorite Food: " <<robot.getFavoriteFood()<<endl;

    do{
    cout<< "Set the angle: ";
    cin>>angle;
    cout<< "How much steps do you want that the robot walks? ";
    cin>>steps;

    robot.setAngle(angle);
    robot.walk(steps);
    robot.printCoord();
    cout<<"Want to keep walking? Type y or n: ";
    cin>>yesorno;
    }while(yesorno=='y'||yesorno=='Y');
    return 0;
}

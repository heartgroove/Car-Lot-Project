#define CAR_H
#include <string> 


class Car {

private:
    int id;
    std::string make;
    std::string model;
    int year;
    std::string condition;
    bool rented;

public:
    Car(int userID, std::string make, std::string model, int year, std::string condition);
    int getID();
    std::string getMake();
    std::string getModel();
    int getYear();
    std::string getCondition();
    bool isRented();
    void setCondition(std::string userCondition);
    void toggleRented();
    void displayCar();



};
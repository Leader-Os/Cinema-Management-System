#ifndef CINEMA_H
#define CINEMA_H

#include <string>
using namespace std;

class Cinema{
public:
    Cinema(string);
    void setCustomerName(string);
    string getCustomerName();
    void displayMessage();
    void displayMovies();
    void displaySnacks();
    void displayTicket();

private:
    string customerName;
    double totalCost;
    int personNum;
    string movieName;
    string checkVip;
};

#endif
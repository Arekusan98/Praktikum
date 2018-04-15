/*
 * Praktikum 1
 *
 * Alexander Manger 754969
 * Maciej Krzyszton 756037
 *
*/

#ifndef FLIGHTBOOKING_H
#define FLIGHTBOOKING_H
#include <string>
#include <vector>
using namespace std;

class FlightBooking
{
public:
    FlightBooking();
    void set(vector<string> inputs);
    double getPrice();
private:
    long id;
    double price;
    string fromDate;
    string toDate;
    string fromDest;
    string toDest;
    string airline;
};

#endif // FLIGHTBOOKING_H

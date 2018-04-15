/*
 * Praktikum 1
 *
 * Alexander Manger 754969
 * Maciej Krzyszton 756037
 *
*/

#ifndef RENTALCARRESERVATION_H
#define RENTALCARRESERVATION_H
#include <string>
#include <vector>
using namespace std;

class RentalCarReservation
{
public:
    RentalCarReservation();
    void set(vector<string> inputs);
    double getPrice();
private:
    long id;
    double price;
    string fromDate;
    string toDate;
    string pickupLocation;
    string returnLocation;
    string company;
};

#endif // RENTALCARRESERVATION_H

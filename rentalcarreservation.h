/*
 * Praktikum 2
 *
 * Alexander Manger 754969
 * Maciej Krzyszton 756037
 *
*/
#ifndef RENTALCARRESERVATION_H
#define RENTALCARRESERVATION_H
#include <string>
#include <vector>
#include "booking.h"
using namespace std;

class RentalCarReservation : Booking
{
public:
    RentalCarReservation();
    void set(long id, double price, string fromDate, string toDate, long travelId, string pickupLocation, string returnLocation, string company);
private:
    string pickupLocation;
    string returnLocation;
    string company;
};

#endif // RENTALCARRESERVATION_H

/*
 * Praktikum 1
 *
 * Alexander Manger 754969
 * Maciej Krzyszton 756037
 *
*/

#ifndef TRAVELAGENCY_H
#define TRAVELAGENCY_H
#include "flightbooking.h"
#include "hotelbooking.h"
#include "rentalcarreservation.h"
#include <vector>

using namespace std;

class TravelAgency
{
public:
    TravelAgency();
    void readFile();
private:
    vector<RentalCarReservation*>rentalCarReservations;
    vector<HotelBooking*>hotelBookings;
    vector<FlightBooking*>flightBookings;
};

#endif // TRAVELAGENCY_H

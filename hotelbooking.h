/*
 * Praktikum 2
 *
 * Alexander Manger 754969
 * Maciej Krzyszton 756037
 *
*/
#ifndef HOTELBOOKING_H
#define HOTELBOOKING_H
#include <string>
#include <vector>
#include "booking.h"
using namespace std;

class HotelBooking : Booking
{
public:
    HotelBooking();
   // void set(vector<string> inputs);
   // double getPrice();
private:
    string hotel;
    string town;
};

#endif // HOTELBOOKING_H

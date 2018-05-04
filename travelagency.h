/*
 * Praktikum 2
 *
 * Alexander Manger 754969
 * Maciej Krzyszton 756037
 *
*/
#ifndef TRAVELAGENCY_H
#define TRAVELAGENCY_H
#include <vector>
#include "booking.h"
#include "travel.h"
#include "customer.h"

using namespace std;

class TravelAgency
{
public:
    TravelAgency();
    void readFile();
    Booking* findBooking(long id);
    Travel* findTravel(long id);
    Customer* findCustomer(long id);

private:
    vector<Booking*>allBookings;
    vector<Customer*>allCustomers;
    vector<Travel*>allTravels;
};

#endif // TRAVELAGENCY_H

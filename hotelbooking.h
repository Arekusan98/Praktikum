#ifndef HOTELBOOKING_H
#define HOTELBOOKING_H
#include <string>
#include <vector>
using namespace std;

class HotelBooking
{
public:
    HotelBooking();
    void set(vector<string> inputs);
    double getPrice();
private:
    long id;
    double price;
    string fromDate;
    string toDate;
    string hotel;
    string town;
};

#endif // HOTELBOOKING_H

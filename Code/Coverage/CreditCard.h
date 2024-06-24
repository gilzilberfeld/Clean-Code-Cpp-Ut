#pragma once
#include <ctime>
using namespace std;

class CreditCard {
private:
    time_t expirationDate;

public:
    CreditCard(time_t expDate)    {
        expirationDate = expDate;
    }

    bool isExpired() const {
        time_t now = time(NULL);
        auto currentLocalTime = mktime(localtime(&now));

        auto diff = difftime(currentLocalTime, expirationDate);
        if (diff < 0)
            return true;
        else
            return false;
    }
};
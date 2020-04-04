#include <string>

#include "format.h"

using std::string;
using std::to_string;

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long seconds) {

    long hours = seconds/3600;
    long rHours = seconds%3600;
    long minutes = rHours/60;
    long secs = rHours%60;
    string sHours = to_string(hours);
    string sMinutes = to_string(minutes);
    string sSeconds = to_string(secs);
    /*Resize strings, time will reset aftter 100 hours */
    if(sHours.size()<2)
	sHours = "0" + sHours;
    if(sMinutes.size()<2)
	sMinutes = "0" + sMinutes;
    if(sSeconds.size()<2)
	sSeconds = "0" + sSeconds;
    return sHours+":"+sMinutes+":"+sSeconds;
}


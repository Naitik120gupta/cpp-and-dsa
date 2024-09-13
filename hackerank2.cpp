#include <iostream>
#include <string>

using namespace std;

string encodeTime(string time)
{
    int hours = stoi(time.substr(0, 2));
    int minutes = stoi(time.substr(3, 2));
    string indicator;

    if (hours >= 0 && hours <= 5)
    {
        indicator = "AM";
    }
    else if (hours >= 6 && hours <= 11)
    {
        indicator = "PM";
    }
    else if (hours >= 12 && hours <= 17)
    {
        indicator = "CM";
    }
    else if (hours >= 18 && hours <= 23)
    {
        indicator = "DM";
    }

    hours %= 6; // Convert hours to Ayush's unconventional format (0-5)

    // Adjust hours and minutes for proper formatting
    string formattedHours = (hours < 10) ? "0" + to_string(hours) : to_string(hours);
    string formattedMinutes = (minutes < 10) ? "0" + to_string(minutes) : to_string(minutes);

    return formattedHours + " " + formattedMinutes + " " + indicator;
}

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        string time;
        cin >> time;
        cout << encodeTime(time) << endl;
    }

    return 0;
}

#include <string>
//ydhms - year day hour minute  second
std::string format_duration(int seconds) {
    if (seconds == 0) return "now";
    int amount_of_ydhms[5] = { 0 };
    int how_many_used=0;
    int seconds_in_ydhms[5] = { 31536000,86400,3600,60,1 };
    std::string names_ydhms[5] = { "year","day","hour","minute","second" };
    for (int i = 0; i < 5; i++)
    {
        while (seconds >= seconds_in_ydhms[i])
        {
            seconds -= seconds_in_ydhms[i];
            amount_of_ydhms[i]++;
        }
        if (amount_of_ydhms[i] != 0) how_many_used++;
    }
    for (int i = 0; i < 5; i++)
    {
        if (amount_of_ydhms[i] > 0)
        {
            names_ydhms[i] = std::to_string(amount_of_ydhms[i])+" " + names_ydhms[i];
            if (amount_of_ydhms[i] > 1) names_ydhms[i] += "s";
        }
    }
    std::string final_string;
    for (int i = 0; i < 5; i++)
    {
        if (names_ydhms[i][0] >= 48 && names_ydhms[i][0] <= 57)
        {
            final_string += names_ydhms[i];
            how_many_used--;
            if (how_many_used <= 0) break;
            else if (how_many_used == 1) final_string += " and ";
            else final_string += ", ";
        }

    }
    return final_string;
}

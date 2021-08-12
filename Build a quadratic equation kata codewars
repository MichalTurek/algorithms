#include <string>
#include <math.h>
#define MINUS 0
#define PLUS 1

using std::string;
using std::to_string;
char minus_or_plus_sign(int value);

string quadratic_builder(const std::string& expression)
{
    int values[4] = { 1,1,1,1 };
    string variable_char;
    bool plus_minus[4] = { 1,1,1,1 };
    int act_element = -1;
    char previous_sign;
    for (auto actual_sign : expression)
    {
        if (actual_sign == '(') act_element++;
        else if (actual_sign == '-')
        {
            if (previous_sign != '(') act_element++;
            plus_minus[act_element] = MINUS;
        }
        else if (actual_sign == '+')
        {
            if (previous_sign != '(') act_element++;
            plus_minus[act_element] = PLUS;
        }
        else if (actual_sign <= 57 && actual_sign >= 48)
        {
            if (previous_sign <= 57 && previous_sign >= 48)
            {
                values[act_element] *= 10;
                values[act_element] += int(actual_sign) - 48;
            }
            else values[act_element] = int(actual_sign) - 48;
        }
        else if (actual_sign == ')');
        else
        {
            variable_char = actual_sign;
        }
        previous_sign = actual_sign;
    }
    int a, b, c;
    int b_1, b_2;
    //calculate a
    a = values[0] * values[2];
    if (plus_minus[0] != plus_minus[2]) a = -a;
    //calculate b
    b_1 = values[0] * values[3];
    b_2 = values[2] * values[1];
    if (plus_minus[0] != plus_minus[3]) b_1 = -b_1;
    if (plus_minus[2] != plus_minus[1]) b_2 = -b_2;
    b = b_1 + b_2;
    //calculate c
    c = values[1] * values[3];
    if (plus_minus[1] != plus_minus[3]) c = -c;
    string a_string, b_string, c_string;
    //creating A string 
    if (a == 1) a_string = variable_char + "^2";
    else if (a == -1) a_string = "-" + variable_char + "^2";
    else a_string = to_string(a) + variable_char + "^2";
    //creating b string
    if (abs(b) == 1) b_string = minus_or_plus_sign(b) + variable_char;
    else if (b == 0) b_string = "";
    else b_string = minus_or_plus_sign(b) + to_string(abs(b)) + variable_char;
    //creating c_string;
    if (c != 0) c_string = minus_or_plus_sign(c) + to_string(abs(c));
    return a_string + b_string + c_string;
}
char minus_or_plus_sign(int value)
{
    if (value > 0) return '+';
    else return '-';
}

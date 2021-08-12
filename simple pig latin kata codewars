#include <string>
#include <iostream>
using std::string;

bool is_letter(char sign);
std::string pig_it(std::string str)
{
    char to_move = str[0];
    string to_move_convert(1, to_move);
    to_move_convert += "ay";
    if (is_letter(str[0]) && is_letter(str[1]))
    {
        str.erase(0, 1);
    }
    else to_move_convert = "ay";
    for (int i = 0; i < int(str.length()); i++)
    {
        if (i == str.length() - 1 && is_letter(str[str.length() - 1]))
        {
            str.insert(str.length(), to_move_convert);
            break;
        }
        if (str[i] == ' ')
        {

            if (is_letter(str[i - 1]))
            {
                int size = to_move_convert.size();
                str.insert(i, to_move_convert);
                i += size;

            }
            if (is_letter(str[i + 1]) && is_letter(str[i + 2]))
            {
                to_move_convert = (1, str[i + 1]);
                to_move_convert += "ay";
                str.erase(i + 1, 1);
            }
            else
            {
                to_move_convert = "ay";
            }

        }
    }
    return str;
}
bool is_letter(char sign)
{
    if (sign >= 64 && sign <= 122) return true;
    else return false;
}

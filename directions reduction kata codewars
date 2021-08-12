#include <string>
#include <vector>
using std::vector;
using std::string;

class DirReduction
{
public:
    static vector<string> dirReduc(vector<string>& arr);
};
vector<string> DirReduction::dirReduc(vector<string>& arr)
{
    string previous = "";
    bool if_deleted = true;
    while (if_deleted)
    {
        if_deleted = false;
        previous = "";
        for (vector<string>::iterator it = arr.begin(); it != arr.end(); it++)
        {
            if ((*it == "SOUTH" && previous == "NORTH") || (*it == "WEST" && previous == "EAST"))
            {
                arr.erase(it);
                arr.erase(it - 1);
                previous = "";
                if_deleted = true;
                break;

            }
            else if ((*it == "NORTH" && previous == "SOUTH") || (*it == "EAST" && previous == "WEST"))
            {
                arr.erase(it);
                arr.erase(it - 1);
                previous = "";
                if_deleted = true;
                break;
            }
            else previous = *it;
        }
    }
    return arr;
}

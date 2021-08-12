#include <vector>
#include <iostream>
using std::vector;
enum task
{
    up,
    right,
    down,
    left
};
std::vector<int> snail(const std::vector<std::vector<int>>& snail_map) {
    vector<int> final_array;
    if (snail_map.empty())return final_array;
    int length = snail_map[0].size();
    int act_length = 0;
    int up_count = 0, right_count = 0, down_count = 0, left_count = 0;
    int  actual_move = task::up;
    while (act_length < length * length)
    {
        if (actual_move == task::up)
        {
            for (int i = left_count; i < length - right_count; i++)
            {
                final_array.push_back(snail_map[up_count][i]);
                act_length++;
            }
            up_count++;
            actual_move = task::right;
        }
        else if (actual_move == task::right)
        {
            for (int i = up_count; i < length - down_count; i++)
            {
                int size = length - right_count - 1;
                final_array.push_back(snail_map[i][size]);
                act_length++;
            }
            right_count++;
            actual_move = task::down;
        }
        else if (actual_move == task::down)
        {
            for (int i = length - right_count - 1; i >= left_count; i--)
            {
                final_array.push_back(snail_map[length - down_count - 1][i]);
                act_length++;
            }
            down_count++;
            actual_move = task::left;
        }
        else if (actual_move == task::left)
        {
            for (int i = down_count; i < length - up_count; i++)
            {
                final_array.push_back(snail_map[length - i - 1][left_count]);
                act_length++;
            }
            left_count++;
            actual_move = task::up;
        }
    }
    return final_array;
}

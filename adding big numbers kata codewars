#include <string>
using std::string;
std::string add(const std::string& a, const std::string& b) {
  string numbers[2] = { a,b };
  int nums_length[2] = { 0 };
  nums_length[0] = a.length();
  nums_length[1] = b.length();
  string final_number = "";
  int longer_number = 1;
  if (nums_length[0] > nums_length[1]) longer_number = 0;
  int shorter_number = (longer_number + 1) % 2;
  int length_differance = nums_length[longer_number] - nums_length[shorter_number];
  //initiate string with spaces 
  for (int i = 0; i < nums_length[longer_number]; i++) final_number += " ";
  // adding digits from longer string
  // if nums [0] = 10 nums[1] = 15 then it will add 5 last digits of nums[1] 
  // adding digits from both numbers to make final number
  int value=0;
  bool add_to_next = false;
  for (int i = nums_length[longer_number]; i > 0; i--)
  {
    if (i > length_differance)
      value = numbers[shorter_number][i - length_differance - 1] + numbers[longer_number][i - 1] - 96 + add_to_next;
    else
      value = numbers[longer_number][i - 1]- 48+add_to_next;
    add_to_next = false;
    if (value >= 10)
    {
      add_to_next = true;
      value %= 10;
    }
    final_number[i-1] =value+48;
  }
  if (add_to_next == true)
  {
    final_number = "1" + final_number;
  }
  return final_number;
}

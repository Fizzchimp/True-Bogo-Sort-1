#include <iostream>
bool check(int arr[], int len) 
{
  for (int i = 0; i < len - 1; i++) 
  {
    if (arr[i] > arr[i + 1]) 
    {
      return true;
    }
  }
  return false;
}

void shuffle(int arr[], int len) 
{
  for (int i = 0; i < len; i++)
    {
    int sub = arr[i];
    int index = rand() % len;
    arr[i] = arr[index];
    arr[index] = sub;
  }
}

int main() 
{
  srand(time(0));
  int nums[] = {40, 54, 67, 78, 24, 2, 876, 43, 2453, 466, 13, 7};
  int len = sizeof(nums) / 4;
  long long int count = 0;

  while (check(nums, len)) 
  {
    count++;
    shuffle(nums, len);

    if (count % 10000000 == 0) 
    {
      std::cout << count / 1000000 << " million\n";
    }
  }

  for (int x : nums) 
  {
    std::cout << x << ", ";
  }
  std::cout << std::endl << count << " iterations";
}
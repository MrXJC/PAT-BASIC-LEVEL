#include <iostream>
#include <map>
using namespace std;
int main()
{
  int N;
  cin >> N;
  int max_sch, max = 0;
  map<int, int> List;
  while (N--)
  {
    int Key, Num;
    cin >> Key >> Num;
    if (List.find(Key) == List.end())
      List[Key] = Num;
    else
      List[Key] += Num;
    if (List[Key] > max)
    {
      max = List[Key];
      max_sch = Key;
    }
  }
  cout << max_sch << " " << max << endl;
  return 0;
}

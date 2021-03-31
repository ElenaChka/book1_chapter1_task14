// Программа, в которой создается массив и заполняется четными натуральными числами
#include <iostream>
using namespace std;
int main ()
{
    int razmer;
    cout << " VVedite kolichectvo chisel: ";
    cin >> razmer;
    int array [razmer];
    for ( int i = 2; i < razmer; i +=2)
    {
        array [i] = i;
      cout <<  array [i] << endl;
    }

}

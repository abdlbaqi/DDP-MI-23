#include <iostream>
using namespace std;

int main()
{
    char ulangi = 'y';
    int counter = 0;

    while (ulangi == 'y')
    {

        cout << "Apakah kamu sayang aku?" << endl;
        cout << "Jawab (y/t) : ";
        cin >> ulangi;

        counter++;
    }

    cout << "\n\n ................\n";
    cout << " nt terus" << endl;
    cout << "kamu berusaha sebanyak" << counter << "kali" << endl;
}
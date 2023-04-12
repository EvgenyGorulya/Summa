#include <iostream>
using namespace std;

int summaFunc (int array[], int len) {
    int sum = 0;

    for (int i = 0; i < len; i++)
    {
        sum += array[i];
    }
    return sum;
}

int main()
{
    int massiv[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

    int lenght = sizeof (massiv)/sizeof (int);
    int summa = summaFunc(massiv,lenght);

    cout << "summa = " << summa << endl;
}



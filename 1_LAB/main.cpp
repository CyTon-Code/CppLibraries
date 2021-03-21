#include<iostream>
using namespace std;
struct AVIA
{
    char destination[10];
    int flight_number;
    char type_of_plane[10];
};
int main()
{
    AVIA arr[10] = {
            {"uzhorod",5,"boing"},
            {"mukachevo",6,"airbus"},
            {"solotvino",2,"Concorde"},
            {"lviv",1,"Fighter"},
            {"kyiv",7,"Jets"},
            {"kharkiv",9,"Piper"},
            {"odessa",8,"Pilatus"},
            {"crimea",3,"Robinson"},
            {"sevastopo",4,"Cessna "},
            {"frankivsk",10,"Caravan"}};
    int k;
    do
    {
        k = 0;
        for (int i = 0; i < 10; i++)
            if (arr[i].flight_number > arr[i + 1].flight_number)

            {
                AVIA buf;
                buf.flight_number = arr[i].flight_number;
                arr[i].flight_number = arr[i + 1].flight_number;
                arr[i + 1].flight_number = buf.flight_number;
                k++;
            }
    } while (k > 0);
    for (int i = 0; i < 10; i++)
        cout << arr[i].destination <<" "<< arr[i].flight_number <<" "<< arr[i].type_of_plane <<" "<< endl;
}
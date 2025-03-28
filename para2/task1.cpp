/*
short int
unsigned short int
long int 
unsigned long int
long long
*/

#include <iostream>
#include <iomanip>
#define WIDTH 15
int main() {
    using namespace std;

    /*cout << "size of short int = "          << sizeof(short int         ) << endl;
    cout << "size of unsigned short int = " << sizeof(unsigned short int) << endl;
    cout << "size of long int = "           << sizeof(long int          ) << endl;
    cout << "size of unsigned long int = "  << sizeof(unsigned long int ) << endl;
    cout << "size of long long = "          << sizeof(long long         ) << endl;*/
    
    cout << "parameter\tshort int\tunsigned short int\tlong int\tunsigned long int\tlong long" << endl;

    cout << "size" << "\t" <<
        sizeof(short int) << "\t" <<
        sizeof(unsigned short int) << "\t" <<
        sizeof(long int) << "\t" <<
        sizeof(unsigned long int) << "\t" <<
        sizeof(long long) << "\t" <<
        endl;
    
    cout << "minval" << "\t" <<
        INT8_MIN << "\t" <<
        0        << "\t" <<
        INT32_MIN << "\t" <<
        0         << "\t" <<
        INT64_MIN << "\t" <<
        endl;

    cout << "maxval" << "\t" <<
        INT8_MAX << "\t" <<
        UINT8_MAX << "\t" <<
        INT32_MAX << "\t" <<
        UINT64_MAX << "\t" <<
        INT64_MAX << "\t" <<
        endl;

    uint16_t perem = UINT16_MAX - 3;
    cout << "\n" <<
        perem++ << "\n" <<
        perem++ << "\n" <<
        perem++ << "\n" <<
        perem++ << "\n" <<
        perem++ << "\n" <<
        perem++ << "\n" <<
        perem++ << "\n";


}
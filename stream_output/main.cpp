#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;

int main()
{
    double value(43.73225);

    cout << "the precise value of " << value << " is " << std::setprecision(2) << value << endl;

    cout << "the scientific value of " << value << " is " << std::scientific << value << endl;
}
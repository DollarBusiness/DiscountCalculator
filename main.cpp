#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
    double OriginalPrice;
    double discount;
    double total;

    cout << "$$ DISCOUNT CALCULATOR $$\n" << endl;

    cout << "Enter price of item: $";
    cin >> OriginalPrice;
    cout << "Enter discount percentage: ";
    cin >> discount;
    if(OriginalPrice <= 0 || discount <= 0)
    {
        cout << "Error! Original Price nor discount cannot be lower than 0." << endl;
    }
    else
    {
        //ALGORITHM TO FIND PRICE OF ITEM AFTER DISCOUNT
    total = (OriginalPrice * discount) + total;

    cout << "Computing your total..." << endl;
    usleep(2000000);
    cout << "Total: $" << total << endl;
    }

    return 0;
}

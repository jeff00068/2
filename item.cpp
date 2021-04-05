#include <iostream>
#include "Sales_item.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) { //ISBN ”µÁ¿ ƒr¸ñ 

    cout << "enter the books' ISBN,quantity and pris
        < endl;
    Sales_item total;
    if (cin >> total) {
        Sales_item trans;
        while (cin >> trans) {

            if (total.isbn() == trans.isbn())
                total += trans;
            else {
                cout << total << endl;
                total = trans;
            }

        }
        cout << total << endl;

    }
    else {
        cerr << "wrong info" << endl;
        return -1;
    }
    return 0;
}
#include <QCoreApplication>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    string whoAmI(argc > 1 ? argv[1] : argv[0]);
    cout << "Hello " << whoAmI << endl;

    //return a.exec();
}

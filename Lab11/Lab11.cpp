#include <iostream>
#include <cstdlib>
using namespace std;

struct Kulture
{
    string name;
    char type;
    int sa;
    double productivity;
};

void printInformation(Kulture kulture)
{
    cout << "������������: " << kulture.name << "\n";
    cout << "���: " << kulture.type << "\n";
    cout << "�������� ������� (��): " << kulture.sa << "\n";
    cout << "����������� (�/��): " << kulture.productivity << "\n";
}

int main()
{
    setlocale(LC_ALL, "Russian");

    Kulture soy = {"���", '�', 13000, 45};
    Kulture chumiza = {"������", '�', 8000, 17};
    Kulture rice = {"���", '�', 25650, 24};

    printInformation (soy);
    cout << "\n";
    printInformation (chumiza);
    cout << "\n";
    printInformation (rice);
    cout << "\n";

    system("pause");

    return 0;
}

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
    cout << "Наименование: " << kulture.name << "\n";
    cout << "Тип: " << kulture.type << "\n";
    cout << "Посевная площадь (га): " << kulture.sa << "\n";
    cout << "Урожайность (ц/га): " << kulture.productivity << "\n";
}

int main()
{
    setlocale(LC_ALL, "Russian");

    Kulture soy = {"Соя", 'Б', 13000, 45};
    Kulture chumiza = {"Чумиза", 'З', 8000, 17};
    Kulture rice = {"Рис", 'З', 25650, 24};

    printInformation (soy);
    cout << "\n";
    printInformation (chumiza);
    cout << "\n";
    printInformation (rice);
    cout << "\n";

    system("pause");

    return 0;
}

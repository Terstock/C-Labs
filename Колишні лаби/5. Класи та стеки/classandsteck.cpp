#include <queue>
#include <iostream>
#include <math.h>
#include <string>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    int n = 0;
    queue <int> imperus;
    

    cout << "Пользователь, введите кол-во полков имп. гвардии и их номера: " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        imperus.push(a); 
    }
    cout << endl;
    cout << "Номер Первого полка: " << imperus.front() << endl;

    imperus.pop();//вырезаем турка

    cout << "Номер нового (после удаления прошлого): " << imperus.front() << endl;
    cout << "Номер последнего полка: " << imperus.back() << endl;
    cout << "Количество оставшихся полков: " << imperus.size() << endl;

    if (!imperus.empty()) cout << "Состав армии не пуст!" << endl;
}

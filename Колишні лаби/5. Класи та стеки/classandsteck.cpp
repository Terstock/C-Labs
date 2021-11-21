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
    

    cout << "������������, ������� ���-�� ������ ���. ������� � �� ������: " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        imperus.push(a); 
    }
    cout << endl;
    cout << "����� ������� �����: " << imperus.front() << endl;

    imperus.pop();//�������� �����

    cout << "����� ������ (����� �������� ��������): " << imperus.front() << endl;
    cout << "����� ���������� �����: " << imperus.back() << endl;
    cout << "���������� ���������� ������: " << imperus.size() << endl;

    if (!imperus.empty()) cout << "������ ����� �� ����!" << endl;
}


#include <iostream>

using namespace std;


typedef struct
{
    char surname[50];
    short groupname;

} STUDENTS;

STUDENTS* students = new STUDENTS[50];

typedef struct labl_ex
{
    STUDENTS b;
    struct labl_ex* prev, * next;

} EXM;

EXM* head = NULL, * tail = NULL;

void add_obj(EXM* labl, STUDENTS stud) {
    EXM* ptr = new EXM;

    ptr->b = stud;
    ptr->prev = labl;
    ptr->next = (labl == NULL) ? NULL : labl->next;

    if (labl != NULL) {
        labl->next = ptr;
        if (labl->next != NULL) labl->next->prev = ptr;
    }
    if (ptr->prev == NULL) head = ptr;
    if (ptr->next == NULL) tail = ptr;
}

void del_obj(EXM* labl) {
    if (labl == NULL) return;
    EXM* prev_labl = labl->prev;
    EXM* next_labl = labl->next;

    cout << "Студент " << labl->b.surname << " вышел" << endl;
    delete labl;

    if (prev_labl != NULL) prev_labl->next = next_labl;
    else head = next_labl;

    if (next_labl != NULL) next_labl->prev = prev_labl;
    else tail = prev_labl;
}


void top_obj(EXM* labl) {
    if (labl == NULL) {
        cout << "Нет студента" << endl;
    }
    else {
        cout << "                  " << endl;
        cout << "Фамилия студента: " << labl->b.surname << endl;
        cout << "Номер группы студента: " << labl->b.groupname << endl;
        cout << "                  " << endl;
    }
}

void show() {
    EXM* c = head;
    if (c == NULL) {
        cout << "Очередь пуста!" << endl;
    }
    while (c != NULL) {
        cout << "- - - - - - - - - - - - - - - - - - - - - - - -" << endl;
        cout << "1. Фамилия студента: " << c->b.surname << endl;
        cout << "2. Номер группы студента: " << c->b.groupname << endl;
        cout << "                                               " << endl;
        c = c->next;
    }
}

int main() {
    setlocale(LC_ALL, "rus");

    STUDENTS stud = { "Ivanenko", 12 };
    add_obj(tail, stud);

    strcpy_s(stud.surname, "Sergienko");
    stud.groupname = 2;

    add_obj(tail, stud);

    strcpy_s(stud.surname, "Suvorov");
    stud.groupname = 7;

    add_obj(tail, stud);

    show();
    char number;
    do {
        cout << "Очередь студентов, каждый элемент состоит из фамилии и номера группы:  " << endl;
        cout << "                                                    " << endl;
        cout << "1. Добавить студента (фамилия только на английском) " << endl;
        cout << "2. Удалить 1-го студента " << endl;
        cout << "3. Вывести данные 1-го студента " << endl;
        cout << "4. Вывести данные последнего студента " << endl;
        cout << "5. Вывести всю очередь " << endl;
        cout << "0. Выйти из программы " << endl;
        cout << "Введите номер команды: " << endl;
        cin >> number;
        switch (number)
        {
        case'1':
            cout << "Введите фамилию студента: " << endl;
            cin >> stud.surname;
            cout << stud.surname << endl;
            cout << "Введите номер группы студента: " << endl;
            cin >> stud.groupname;
            cout << stud.groupname << endl;
            add_obj(tail, stud);
            show();
            break;
        case'2':
            del_obj(head);
            show();
            break;
        case'3':
            top_obj(head);
            break;
        case'4':
            cout << "- - - - - - - - - - - - - - - - - - - - - - -" << endl;
            cout << "1. Фамилия студента: " << stud.surname << endl;
            cout << "2. Номер группы студента: " << stud.groupname << endl;
            cout << "- - - - - - - - - - - - - - - - - - - - - - -" << endl;
            break;
        case'5':
            show();
            break;
        case'0':
            cout << "                                 " << endl;
            cout << "Проиводится выход из программы..." << endl;
            cout << "                                 " << endl;
            break;
        }
    }
    while (number != '0');
    {
        system("pause");
    }
    }

    //cout << stud.surname << endl;
    //cout << "Введите номер группы студента: " << endl;
    //cin >> stud.groupname;
    //cout << stud.groupname << endl;
    //add_obj(tail, stud);

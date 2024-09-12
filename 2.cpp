#include <iostream>
using namespace std;
int main() {

    setlocale(LC_ALL, "Russian"); // добавляем русский язык
    cout << "Напишите емкость аккамулятора: \n";
    int a, b;// создаем 2 переменые
    cin >> a;
    b = a * 3;
    cout << "Емкость подходящего вам блока питания: \n" << b; // выводим результат
    


    return 0;
}
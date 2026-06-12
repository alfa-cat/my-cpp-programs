#include <ios>
#include <iostream>
#include <iterator>
#include <limits>
#include <ostream>

using namespace std;

int multiply(int a, int b, int sum) { // создаем функцию сложения
    return sum = a + b;
}

int main() {

    int a, b, sum; // создаем две переменные, для записи в параметры ранее созданой функции

    cout << "Введите первое слагаемое: ";
    cin >> a;
   cin.ignore(numeric_limits<streamsize>::max(), '\n'); // игнорируем буфер, для того чтобы в cin не пришел \n
    cout << endl;
    cout << "Введите второе слагаемое: ";
    cin >> b;
    cout << endl;
    cout << "Результат сложения: " << multiply(a, b, sum) << endl; // с помощью функции возвращаем две переменные в одну сумму, upd решил проблему с тем, что сумма не выводилась, попробовал возвращать в переменную - мимо, а надо было в cout, проблема была на самом очевидном месте

    return 0;
}
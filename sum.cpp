#include <iostream>
#include <numeric>
#include <ostream>
#include <thread>

using namespace std;

int main() {
    const char frames[] = {'|', '/', '-', '\\'}; // фреймы для красивого прогресса вращением
    int nums[10]; // создаем массив для хранения чисел
    int sum = 0;
    int n = sizeof(nums) / sizeof(nums[0]); // способ вычисления размера массива, нагуглил

    cout << "Введите 10 чисел: ";
    for (int i = 0; i < 10; i++) { // цикл для записи в массив
        cin >> nums[i]; // я наконец понял как оно работает, осознал, понял концепцию, расскажу в чате
    }

    for (int i = 0; i <= 100; i++) {
        cout << "\rПодсчитываем сумму чисел " << frames[i % 4] << " " << i << "%" << flush; // я понял как оно работает мне gemini показала код и я понял, расскажу в чате
        this_thread::sleep_for(chrono::milliseconds(20));
    }

    for (int j = 0; j < n; j++) { // как ты и просил, без вычета суммы заранее
        sum += nums[j]; // прибавляем к сумме все что в массиве есть 
    }

    cout << "\nСумма числей равна: " << sum << endl;
    cout << "Среднее арфиметическое равно: " << (float)sum / n << endl; // вот на этом участке были проблемки но маленькие, быстро исправил

    return 0;
}
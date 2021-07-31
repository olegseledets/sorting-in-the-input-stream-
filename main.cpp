#include <iostream>
#include <vector>

int sort(std::vector<int> vec) {
  for (int i = 0; i < vec.size() - 1; ++i)
    for (int j = 0; j < vec.size() - i - 1; j++)
      if (vec[j] > vec[j + 1])
        std::swap(vec[j], vec[j + 1]);
  return vec[4];
}

int main() {
  std::vector<int> numbers;
  int number = 0;
  do{
    std::cout << "Input number: ";
    std::cin >> number;
    if (number == -1) {
      if (numbers.size() < 5){
        std::cout << "Array size is less than 5 elements!\n";
      }
      else {
        std::cout << sort(numbers) << std::endl;
      }
    } else {
      numbers.push_back(number);
    }
  } while(number != -2);
}

/*
С клавиатуры вводятся числа. Когда пользователь вводит -1 -- необходимо выводить на экран пятое по возрастанию число среди введённых. Когда пользователь вводит -2 -- программа завершает работу.
Пример:
ввод: 7 5 3 1 2 4 6 -1
вывод: 5 (в отсортированном виде массив выглядит так: {1,2,3,4,5,6,7})
ввод: 1 1 1 -1
вывод: 2 (в отсортированном виде массив выглядит так: {1,1,1,1,2,3,4,5,6,7})
ввод -2
завершение программы
*/
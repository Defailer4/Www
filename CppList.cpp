#include <iostream>
#include <list>

using namespace std;

int main() {
  list <int> my_list;
  list <int> list_merge = {7, 8, 9};

  for (int i = 0; i < 2; i++) {
    for (int j = 1; j < 6; j++) {
      my_list.push_back(i); // добавили 10 элементов
    }
  }
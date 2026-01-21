#include <iostream>
#include <vector>
#include <algorithm>
#include "NumberList.h"

int main() {

    std::vector<NumberList> lists = {
        NumberList({1, 2, 3}),
        NumberList({10}),
        NumberList({4, 5})
    };


    for (const auto& l : lists)
        l.print();

    std::sort(lists.begin(), lists.end(),
              [](const NumberList& a, const NumberList& b) {
                  return !(a > b);
              });

    for (const auto& l : lists)
        l.print();


    NumberList& minList = lists.front();
    NumberList& maxList = lists.back();


    for (int x : minList.getData()) {
        maxList += x;
    }

    for (const auto& l : lists)
        l.print();

    return 0;
}

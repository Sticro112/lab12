#include "NumberList.h"

NumberList::NumberList() {}

NumberList::NumberList(const std::vector<int>& d) : data(d) {}

NumberList::~NumberList() {}

int NumberList::sum() const {
    int s = 0;
    for (int x : data)
        s += x;
    return s;
}

NumberList& NumberList::operator+=(int value) {
    data.push_back(value);
    return *this;
}

bool NumberList::operator>(const NumberList& other) const {
    return this->sum() > other.sum();
}


void NumberList::print() const {
    std::cout << "[ ";
    for (int x : data)
        std::cout << x << " ";
    std::cout << "]  sum = " << sum() << std::endl;
}

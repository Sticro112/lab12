#include "NumberList.h"


NumberList::NumberList() {}

NumberList::NumberList(const std::vector<int>& values)
    : data(values) {}

NumberList::~NumberList() {}

int NumberList::sum() const {
    int s = 0;
    for (int x : data)
        s += x;
    return s;
}

const std::vector<int>& NumberList::getData() const {
    return data;
}

bool NumberList::operator>(const NumberList& other) const {
    return this->sum() > other.sum();
}

NumberList& NumberList::operator+=(int value) {
    data.push_back(value);
    return *this;
}

void NumberList::print() const {
    std::cout << "[ ";
    for (int x : data)
        std::cout << x << " ";
    std::cout << "] sum = " << sum() << std::endl;
}

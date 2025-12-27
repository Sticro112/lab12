#ifndef NUMBERLIST_H
#define NUMBERLIST_H

#include <vector>
#include <iostream>

class NumberList {
private:
    std::vector<int> data;

public:
    NumberList();
    NumberList(const std::vector<int>& d);
    ~NumberList();

    int sum() const;

    NumberList& operator+=(int value);

    bool operator>(const NumberList& other) const;

    void print() const;
};

#endif

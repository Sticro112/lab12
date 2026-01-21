#ifndef NUMBERLIST_H
#define NUMBERLIST_H

#include <vector>
#include <iostream>

class NumberList {
private:
    std::vector<int> data;

public:

    NumberList();
    NumberList(const std::vector<int>& values);
    ~NumberList();


    int sum() const;


    const std::vector<int>& getData() const;

    bool operator>(const NumberList& other) const; 
    NumberList& operator+=(int value);   

    // Вивід списку
    void print() const;
};

#endif

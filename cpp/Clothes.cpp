#include <bits/stdc++.h>
#include "Accessories.cpp"

using namespace std;

class Clothes : public Accessories
{
private:
    string category;
    string size;
    string brand;

public:
    // konstruktor kosong
    Clothes()
    {
    }

    // konstruktor dengan parameter untuk mengisi atribut
    Clothes(string category, string size, string brand)
    {
        this->category = category;
        this->size = size;
        this->brand = brand;
    }

    // setter category
    void setCategory(string category)
    {
        this->category = category;
    }

    // getter category
    string getCategory()
    {
        return category;
    }

    // setter size
    void setSize(string size)
    {
        this->size = size;
    }

    // getter size
    string getSize()
    {
        return size;
    }

    // setter brand
    void setBrand(string brand)
    {
        this->brand = brand;
    }

    // getter brand
    string getBrand()
    {
        return brand;
    }

    ~Clothes()
    {
    }
};

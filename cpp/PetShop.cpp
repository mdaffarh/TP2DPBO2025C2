#include <bits/stdc++.h>

using namespace std;

// kelas petshop
class PetShop
{
private:
    // atribut-atribut private
    int id;
    string name;
    int price;
    int stock;

public:
    // konstruktor kosong
    PetShop()
    {
    }

    // konstruktor dengan parameter untuk mengisi atribut
    PetShop(int id, string name, int price, int stock)
    {
        this->id = id;
        this->name = name;
        this->price = price;
        this->stock = stock;
    }

    // getter dan setter (ambil dan set atribut)
    // setter id
    void setId(int id)
    {
        this->id = id;
    }

    // getter id
    int getId()
    {
        return id;
    }

    // setter name
    void setName(string name)
    {
        this->name = name;
    }

    // getter name
    string getName()
    {
        return name;
    }

    // setter price
    void setPrice(int price)
    {
        this->price = price;
    }

    // getter price
    int getPrice()
    {
        return price;
    }

    // setter stock
    void setStock(int stock)
    {
        this->stock = stock;
    }

    // getter stock
    int getStock()
    {
        return stock;
    }

    ~PetShop()
    {
    }
};
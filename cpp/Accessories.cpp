#include <bits/stdc++.h>
#include "PetShop.cpp"

using namespace std;

class Accessories : public PetShop {
private:
    string type;
    string material;
    string color;
    
public:
    // konstruktor kosong
    Accessories()
    {
    }

    // konstruktor dengan parameter untuk mengisi atribut
    Accessories(string type, string material, string color)
    {
        this->type = type;
        this->material = material;
        this->color = color;
    }


    // setter type
    void setType(string type)
    {
        this->type = type;
    }

    // getter type
    string getType()
    {
        return type;
    }

    // setter material
    void setMaterial(string material)
    {
        this->material = material;
    }

    // getter material
    string getMaterial()
    {
        return material;
    }

    // setter color
    void setColor(string color)
    {
        this->color = color;
    }

    // getter color
    string getColor()
    {
        return color;
    }

    ~Accessories()
    {
    }
};

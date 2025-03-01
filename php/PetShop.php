<?php
class PetShop
{
    // atribut private
    private $id;
    private $name;
    private $price;
    private $stock;
    private $image;

    // konstruktor dengan parameter untuk mengisi nilai
    public function __construct($id, $name, $price, $stock, $image)
    {
        $this->id = $id;
        $this->name = $name;
        $this->price = $price;
        $this->stock = $stock;
        $this->image = $image;
    }

    // getter dan setter untuk id
    public function setId($id)
    {
        $this->id = $id;
    }

    public function getId()
    {
        return $this->id;
    }

    // getter dan setter untuk name
    public function setName($name)
    {
        $this->name = $name;
    }

    public function getName()
    {
        return $this->name;
    }

    // getter dan setter untuk price
    public function setPrice($price)
    {
        $this->price = $price;
    }

    public function getPrice()
    {
        return $this->price;
    }

    // getter dan setter untuk stock
    public function setStock($stock)
    {
        $this->stock = $stock;
    }

    public function getStock()
    {
        return $this->stock;
    }

    // getter dan setter untuk image
    public function setImage($image)
    {
        $this->image = $image;
    }

    public function getImage()
    {
        return $this->image;
    }

    function __destruct() {}
}

<?php
require_once "Accessories.php";

class Clothes extends Accessories
{
    private $category;
    private $size;
    private $brand;

    public function __construct($id, $name, $price, $stock, $image, $type, $material, $color, $category, $size, $brand)
    {
        parent::__construct($id, $name, $price, $stock, $image, $type, $material, $color);
        $this->category = $category;
        $this->size = $size;
        $this->brand = $brand;
    }

    // getter dan setter untuk category
    public function setCategory($category)
    {
        $this->category = $category;
    }

    public function getCategory()
    {
        return $this->category;
    }

    // getter dan setter untuk size
    public function setSize($size)
    {
        $this->size = $size;
    }

    public function getSize()
    {
        return $this->size;
    }

    // getter dan setter untuk brand
    public function setBrand($brand)
    {
        $this->brand = $brand;
    }

    public function getBrand()
    {
        return $this->brand;
    }
}

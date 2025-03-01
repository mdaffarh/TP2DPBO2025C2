<?php
require_once "PetShop.php";

class Accessories extends PetShop
{
    private $type;
    private $material;
    private $color;

    public function __construct($id, $name, $price, $stock, $image, $type, $material, $color)
    {
        parent::__construct($id, $name, $price, $stock, $image);
        $this->type = $type;
        $this->material = $material;
        $this->color = $color;
    }

    // getter dan setter untuk type
    public function setType($type)
    {
        $this->type = $type;
    }

    public function getType()
    {
        return $this->type;
    }

    // getter dan setter untuk material
    public function setMaterial($material)
    {
        $this->material = $material;
    }

    public function getMaterial()
    {
        return $this->material;
    }

    // getter dan setter untuk color
    public function setColor($color)
    {
        $this->color = $color;
    }

    public function getColor()
    {
        return $this->color;
    }
}

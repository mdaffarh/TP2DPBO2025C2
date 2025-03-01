public class Accessories extends PetShop {
    private String type;
    private String material;
    private String color;

    // constructor dengan parameter
    Accessories(int id, String name, int price, int stock, String type, String material, String color) {
        super(id, name, price, stock);
        this.type = type;
        this.material = material;
        this.color = color;
    }

    // getter dan setter untuk type
    public void setType(String type) {
        this.type = type;
    }

    public String getType() {
        return type;
    }

    // getter dan setter untuk material
    public void setMaterial(String material) {
        this.material = material;
    }

    public String getMaterial() {
        return material;
    }

    // getter dan setter untuk color
    public void setColor(String color) {
        this.color = color;
    }

    public String getColor() {
        return color;
    }
}

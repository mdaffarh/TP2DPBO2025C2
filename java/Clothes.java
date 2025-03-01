public class Clothes extends Accessories {
    private String category;
    private String size;
    private String brand;

    // constructor dengan parameter
    Clothes(int id, String name, int price, int stock, String type, String material, String color, String category, String size, String brand) {
        super(id, name, price, stock, type, material, color);
        this.category = category;
        this.size = size;
        this.brand = brand;
    }

    // getter dan setter untuk category
    public void setCategory(String category) {
        this.category = category;
    }

    public String getCategory() {
        return category;
    }

    // getter dan setter untuk size
    public void setSize(String size) {
        this.size = size;
    }

    public String getSize() {
        return size;
    }

    // getter dan setter untuk brand
    public void setBrand(String brand) {
        this.brand = brand;
    }

    public String getBrand() {
        return brand;
    }
}

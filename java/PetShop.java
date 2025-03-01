class PetShop {

    // atribut-atribut private
    private int id;
    private String name;
    private int price;
    private int stock;

    // constructor dengan parameter
    PetShop(int id, String name, int price, int stock) {
        this.id = id;
        this.name = name;
        this.price = price;
        this.stock = stock;
    }

    // getter dan setter untuk id
    public void setId(int id) {
        this.id = id;
    }

    public int getId() {
        return id;
    }

    // getter dan setter untuk name
    public void setName(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }

    // getter dan setter untuk price
    public void setPrice(int price) {
        this.price = price;
    }

    public int getPrice() {
        return price;
    }

    // getter dan setter untuk stock
    public void setStock(int stock) {
        this.stock = stock;
    }

    public int getStock() {
        return stock;
    }
}

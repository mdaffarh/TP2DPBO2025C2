import java.util.ArrayList;
import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        // instansiasi scanner
        Scanner scanner = new Scanner(System.in);

        // untuk break
        int end = 0;
        
        // buat arraylist untuk menyimpan object
        ArrayList<Clothes> products = new ArrayList<>();

        // 5 objek awal
        int[] initID = {1001, 1002, 1003, 1004, 1005};
        String[] initName = {"BajuKucing", "BajuAnjing", "VestKucing", "VestAnjing", "BajuHamster"};
        int[] initPrice = {30000, 50000, 50000, 70000, 20000};
        int[] initStock = {3, 5, 5, 7, 2};
        String[] initType = {"Baju", "Baju", "Vest", "Vest", "Baju"};
        String[] initMaterial = {"Katun", "Rajut", "Rajut", "Rajut", "Rajut"};
        String[] initColor = {"Kuning", "Oren", "Hitam", "Putih", "Pink"};
        String[] initCategory = {"Kucing", "Anjing", "Kucing", "Anjing", "Hamster"};
        String[] initSize = {"Medium", "Large", "Small", "Medium", "Small"};
        String[] initBrand = {"Catqlo", "HushPuppies", "HnMeow", "Gokgok", "Unbrand"};

        // masukan ke arraylist
        for (int i = 0; i < 5; i++) {
            Clothes temp = new Clothes(
                initID[i], initName[i], initPrice[i], initStock[i], 
                initType[i], initMaterial[i], initColor[i], 
                initCategory[i], initSize[i], initBrand[i]
            );
            products.add(temp);
        }
        
        // looping menu utama
        while (end != 1) {
            // menampilkan menu
            System.out.println("=========================");
            System.out.println("Petshop Dudul Miaw-miaw");
            System.out.println("=========================");
            System.out.println("(1) Menampilkan Data");
            System.out.println("(2) Menambahkan Data");
            System.out.println("(3) Keluar");
            System.out.print(">> Pilih Menu: ");

            // input menu
            int menu = scanner.nextInt(); 

            // switch menu
            switch (menu) {
                // menampilkan produk
                case 1 -> {
                    System.out.println("List Produk Petshop Dudul Miaw-miaw");
                    
                    // jika kosong
                    if (products.isEmpty()) {
                        System.out.println("Data Kosong");
                    }else{
                        // nama field
                        String[] header = {"ID", "Nama", "Harga", "Stok", "Tipe", "Bahan", "Warna", "Kategori", "Ukuran", "Merk"};

                        // masukan panjang awal
                        int[] spaceLen = new int[header.length];
                        for (int i = 0; i < header.length; i++) {
                            spaceLen[i] = header[i].length();
                        }

                        // bandingkan
                        for (Clothes product : products) {
                            spaceLen[0] = Math.max(spaceLen[0], String.valueOf(product.getId()).length());
                            spaceLen[1] = Math.max(spaceLen[1], product.getName().length());
                            spaceLen[2] = Math.max(spaceLen[2], String.valueOf(product.getPrice()).length());
                            spaceLen[3] = Math.max(spaceLen[3], String.valueOf(product.getStock()).length());
                            spaceLen[4] = Math.max(spaceLen[4], product.getType().length());
                            spaceLen[5] = Math.max(spaceLen[5], product.getMaterial().length());
                            spaceLen[6] = Math.max(spaceLen[6], product.getColor().length());
                            spaceLen[7] = Math.max(spaceLen[7], product.getCategory().length());
                            spaceLen[8] = Math.max(spaceLen[8], product.getSize().length());
                            spaceLen[9] = Math.max(spaceLen[9], product.getBrand().length());
                        }

                        StringBuilder formatBuilder = new StringBuilder("|");
                        for (int len : spaceLen) {
                            formatBuilder.append(" %-" + len + "s |");
                        }
                        formatBuilder.append("\n");
                        String format = formatBuilder.toString();

                        // topline
                        System.out.print("+");
                        for (int len : spaceLen) {
                            for (int i = 0; i < len + 2; i++) { // +2 for padding
                                System.out.print("-");
                            }
                            System.out.print("+");
                        }
                        System.out.println();

                        // fieldname
                        System.out.printf(format, (Object[]) header);

                        // topline
                        System.out.print("+");
                        for (int len : spaceLen) {
                            for (int i = 0; i < len + 2; i++) { // +2 for padding
                                System.out.print("-");
                            }
                            System.out.print("+");
                        }
                        System.out.println();

                        // print isi
                        for (Clothes product : products) {
                            System.out.printf(format, 
                                product.getId(), product.getName(), product.getPrice(), product.getStock(), 
                                product.getType(), product.getMaterial(), product.getColor(), 
                                product.getCategory(), product.getSize(), product.getBrand()
                            );
                        }

                        // bottom line
                        System.out.print("+");
                        for (int len : spaceLen) {
                            for (int i = 0; i < len + 2; i++) { // +2 for padding
                                System.out.print("-");
                            }
                            System.out.print("+");
                        }
                        System.out.println();
                    }

                    // menunggu enter
                    scanner.nextLine();
                    System.out.print("Tekan Enter untuk kembali...");
                    scanner.nextLine();
                    break;
                }

                // menambah produk
                case 2 -> {
                    System.out.println("Tambah Produk Petshop Dudul Miaw-miaw");
                    System.out.println("Masukan Data (ID Nama Harga Stok Jenis Material Warna Kategori Ukuran Merk): ");

                    // input data baru
                    int id = scanner.nextInt();
                    String name = scanner.next();
                    int price = scanner.nextInt();
                    int stock = scanner.nextInt();

                    String type = scanner.next();
                    String material = scanner.next();
                    String color = scanner.next();

                    String category = scanner.next();
                    String size = scanner.next();
                    String brand = scanner.next();

                    // buat objek temp dengan parameter
                    Clothes temp = new Clothes(id, name, price, stock, type, material, color, category, size, brand);

                    // tambahkan ke arraylist
                    products.add(temp);

                    System.out.println("Produk ditambahkan");

                    // menunggu enter
                    scanner.nextLine();
                    System.out.print("Tekan Enter untuk kembali...");
                    scanner.nextLine();
                    break;

                }
                // keluar menu
                case 3 -> {
                    end = 1;
                    System.out.println("Keluar...");
                    break;
                }
                // default
                default -> {
                    System.out.println("Menu tidak ada");
                    break;
                }
            }
    }
    

    // close scanner
    scanner.close();
    }
}

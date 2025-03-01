# import class
from Clothes import Clothes
# import library untuk clearscreen
import os

# break menu
end = 0;

# list kosong untuk menyimpan object
products = [];

# 5 data pertama
init_data = [
    {"id": 1001, "name": "BajuKucing", "price": 30000, "stock": 3, "type": "Baju", "material": "Katun", "color": "Kuning", "category": "Kucing", "size": "Medium", "brand": "Catqlo"},
    {"id": 1002, "name": "BajuAnjing", "price": 50000, "stock": 5, "type": "Baju", "material": "Rajut", "color": "Oren", "category": "Anjing", "size": "Large", "brand": "HushPuppies"},
    {"id": 1003, "name": "VestKucing", "price": 50000, "stock": 5, "type": "Vest", "material": "Rajut", "color": "Hitam", "category": "Kucing", "size": "Small", "brand": "HnMeow"},
    {"id": 1004, "name": "VestAnjing", "price": 70000, "stock": 7, "type": "Vest", "material": "Rajut", "color": "Putih", "category": "Anjing", "size": "Medium", "brand": "Gokgok"},
    {"id": 1005, "name": "BajuHamster", "price": 20000, "stock": 2, "type": "Baju", "material": "Rajut", "color": "Pink", "category": "Hamster", "size": "Small", "brand": "Unbrand"}
]

# masukan ke list
for item in init_data:
    products.append(Clothes(item["id"], item["name"], item["price"], item["stock"], item["type"], item["material"], item["color"], item["category"], item["size"], item["brand"]))

# looping menu utama
while (end == 0):
    os.system("cls")
    print("Petshop Dudul Miaw-miaw")
    print("(1) Menampilkan Data")
    print("(2) Menambahkan Data")
    print("(3) Keluar")
    
    menu = int(input(">> Pilih Menu: "))
    os.system("cls")
    
    # nested if
    # menampilkan produk
    if menu == 1:
        if not products:
            print("Data Kosong")
        else:
            # field
            header = ["ID", "Nama", "Harga", "Stok", "Tipe", "Bahan", "Warna", "Kategori", "Ukuran", "Merk"]
            
            # isi panjang field untuk spasi 
            spaceLen = []
            for title in header:
                spaceLen.append(len(title))
                
            # cari max panjang isi tabel
            for product in products:
                values = [
                    str(product.getId()), product.getName(), str(product.getPrice()), 
                    str(product.getStock()), product.getType(), product.getMaterial(), 
                    product.getColor(), product.getCategory(), product.getSize(), product.getBrand()
                ]
                
                for i in range(len(header)):
                    spaceLen[i] = max(spaceLen[i], len(values[i]))
                        
            # topline
            print("+", end="")
            for i in spaceLen:
                print("-" * (i + 2), end="+")
            print()
            
            # header
            print("|", end=" ")
            for i, title in enumerate(header):
                print(title.ljust(spaceLen[i]), end=" | ")
            print()  
            
            # topline
            print("+", end="")
            for i in spaceLen:
                print("-" * (i + 2), end="+")
            print()
            
            # print isi
            for product in products:
                values = [
                    str(product.getId()), product.getName(), str(product.getPrice()), 
                    str(product.getStock()), product.getType(), product.getMaterial(), 
                    product.getColor(), product.getCategory(), product.getSize(), product.getBrand()
                ]
                
                print("|", end=" ")
                for i, value in enumerate(values):
                    print(value.ljust(spaceLen[i]), end=" | ")
                print()  # Move to the next row
                
            # bottomline
            print("+", end="")
            for i in spaceLen:
                print("-" * (i + 2), end="+")
            print()
        
        # tunggu enter
        input("Tekan Enter untuk kembali...")
        
    # menambah produk
    elif menu == 2:
        print("Tambah Produk Petshop Dudul Miaw-miaw");
        
        # input data baru
        print("Masukan Data (ID Nama Harga Stok Jenis Material Warna Kategori Ukuran Merk)")
        new_id = int(input())
        new_name = input()
        new_price = int(input())
        new_stock = int(input())
        
        new_type = input()
        new_material = input()
        new_color = input()
        
        new_category = input()
        new_size = input()
        new_brand = input()
        
        # buat object dengan parameter dan langsung append ke list
        products.append(Clothes(new_id, new_name, new_price, new_stock, new_type, new_material, new_color, new_category, new_size, new_brand))
        
        print("Produk ditambahkan")
        
        input("Tekan Enter untuk kembali...")
    # keluar menu
    elif menu == 3:
        end = 1;
        print("Keluar...")
    else:
        print("Menu tidak ada")
        input("Tekan Enter untuk kembali...")
        
    
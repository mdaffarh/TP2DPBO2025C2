#include <bits/stdc++.h>
#include "Clothes.cpp"

using namespace std;

int main()
{
    // untuk break menu
    int end = 0;

    // vector untuk objek-objek
    vector<Clothes> products;

    // buat 5 objek awal
    int initID[5] = {1001, 1002, 1003, 1004, 1005};
    string initName[5] = {"BajuKucing", "BajuAnjing", "VestKucing", "VestAnjing", "BajuHamster"};
    int initPrice[5] = {30000, 50000, 50000, 70000, 20000};
    int initStock[5] = {3, 5, 5, 7, 2};
    string initType[5] = {"Baju", "Baju", "Vest", "Vest", "Baju"};
    string initMaterial[5] = {"Katun", "Rajut", "Rajut", "Rajut", "Rajut"};
    string initColor[5] = {"Kuning", "Oren", "Hitam", "Putih", "Pink"};
    string initCategory[5] = {"Kucing", "Anjing", "Kucing", "Anjing", "Hamster"};
    string initSize[5] = {"Medium", "Large", "Small", "Medium", "Small"};
    string initBrand[5] = {"Catqlo", "HushPuppies", "HnMeow", "Gokgok", "Unbrand"};

    for (int i = 0; i < 5; i++)
    {
        // buat objek langsung dengan parameter
        Clothes temp(initCategory[i], initSize[i], initBrand[i]);

        temp.setId(initID[i]);
        temp.setName(initName[i]);
        temp.setPrice(initPrice[i]);
        temp.setStock(initStock[i]);

        temp.setType(initType[i]);
        temp.setMaterial(initMaterial[i]);
        temp.setColor(initColor[i]);

        // push ke vector
        products.push_back(temp);
    }

    // looping menu
    while (end != 1)
    {
        // clear screen dan menampilkan menu
        system("cls");
        cout << "Petshop Dudul Miaw-miaw" << endl;
        cout << "(1) Menampilkan Data Baju" << endl;
        cout << "(2) Menambahkan Data Baju" << endl;
        cout << "(3) Keluar" << endl;
        cout << ">> Pilih Menu: ";

        // input menu
        int menu = 0;
        cin >> menu;
        cin.ignore(); // ignore inputan terakhir (untuk nunggu enter)

        system("cls"); // clear screen

        // switch menu
        switch (menu)
        {
        case 1:
        {
            // menampilkan produk
            cout << "List Produk Clothes Petshop Dudul Miaw-miaw" << endl;

            // jika produk kosong
            if (products.empty())
            {
                cout << "Data kosong" << endl;
            }
            else
            {
                // jika produk ada tampilkan seluruh data
                vector<int> spaceLen = {4, 5, 4, 4, 5, 5, 8, 6, 4};

                for (vector<Clothes>::iterator i = products.begin(); i != products.end(); i++)
                {
                    if (i->getName().length() > spaceLen[0])
                    {
                        spaceLen[0] = i->getName().length();
                    }

                    if (to_string(i->getPrice()).length() > spaceLen[1])
                    {
                        spaceLen[1] = to_string(i->getPrice()).length();
                    }

                    if (to_string(i->getStock()).length() > spaceLen[2])
                    {
                        spaceLen[2] = to_string(i->getStock()).length();
                    }

                    if (i->getType().length() > spaceLen[3])
                    {
                        spaceLen[3] = i->getType().length();
                    }

                    if (i->getMaterial().length() > spaceLen[4])
                    {
                        spaceLen[4] = i->getMaterial().length();
                    }

                    if (i->getColor().length() > spaceLen[5])
                    {
                        spaceLen[5] = i->getColor().length();
                    }

                    if (i->getCategory().length() > spaceLen[6])
                    {
                        spaceLen[6] = i->getCategory().length();
                    }

                    if (i->getSize().length() > spaceLen[7])
                    {
                        spaceLen[7] = i->getSize().length();
                    }

                    if (i->getBrand().length() > spaceLen[8])
                    {
                        spaceLen[8] = i->getBrand().length();
                    }
                }

                // garis atas
                cout << "+";
                for (int i = 0; i < 11; i++)
                {
                    cout << "-";
                }

                for (int i = 0; i < 9; i++)
                {
                    for (int j = 0; j < spaceLen[i] + 3; j++)
                    {
                        cout << "-";
                    }
                }
                cout << "+" << endl;
                //

                // table title
                cout << "| No | ID   |";
                cout << " Nama";
                for (int i = 0; i < spaceLen[0] - 4; i++)
                {
                    cout << " ";
                }
                cout << " | Harga";
                for (int i = 0; i < spaceLen[1] - 5; i++)
                {
                    cout << " ";
                }
                cout << " | Stok";
                for (int i = 0; i < spaceLen[2] - 4; i++)
                {
                    cout << " ";
                }
                cout << " | Tipe";
                for (int i = 0; i < spaceLen[3] - 4; i++)
                {
                    cout << " ";
                }
                cout << " | Bahan";
                for (int i = 0; i < spaceLen[4] - 5; i++)
                {
                    cout << " ";
                }
                cout << " | Warna";
                for (int i = 0; i < spaceLen[5] - 5; i++)
                {
                    cout << " ";
                }
                cout << " | Kategori";
                for (int i = 0; i < spaceLen[6] - 8; i++)
                {
                    cout << " ";
                }
                cout << " | Ukuran";
                for (int i = 0; i < spaceLen[7] - 6; i++)
                {
                    cout << " ";
                }
                cout << " | Merk";
                for (int i = 0; i < spaceLen[8] - 4; i++)
                {
                    cout << " ";
                }

                cout << " |" << endl;

                // garis atas
                cout << "+";
                for (int i = 0; i < 11; i++)
                {
                    cout << "-";
                }

                for (int i = 0; i < 9; i++)
                {
                    for (int j = 0; j < spaceLen[i] + 3; j++)
                    {
                        cout << "-";
                    }
                }
                cout << "+" << endl;
                //

                int no = 1;
                // print isi
                for (vector<Clothes>::iterator i = products.begin(); i != products.end(); i++, no++)
                {
                    cout << "| ";
                    cout << no << "  | "
                         << i->getId() << " | ";

                    cout << i->getName();
                    for (int j = 0; j < spaceLen[0] - i->getName().length(); j++)
                    {
                        cout << " ";
                    }

                    cout << " | " << i->getPrice();
                    for (int j = 0; j < spaceLen[1] - to_string(i->getPrice()).length(); j++)
                    {
                        cout << " ";
                    }
                    cout << " | " << i->getStock();
                    for (int j = 0; j < spaceLen[2] - to_string(i->getStock()).length(); j++)
                    {
                        cout << " ";
                    }
                    cout << " | " << i->getType();
                    for (int j = 0; j < spaceLen[3] - i->getType().length(); j++)
                    {
                        cout << " ";
                    }

                    cout << " | " << i->getMaterial();
                    for (int j = 0; j < spaceLen[4] - i->getMaterial().length(); j++)
                    {
                        cout << " ";
                    }

                    cout << " | " << i->getColor();
                    for (int j = 0; j < spaceLen[5] - i->getColor().length(); j++)
                    {
                        cout << " ";
                    }

                    cout << " | " << i->getCategory();
                    for (int j = 0; j < spaceLen[6] - i->getCategory().length(); j++)
                    {
                        cout << " ";
                    }

                    cout << " | " << i->getSize();
                    for (int j = 0; j < spaceLen[7] - i->getSize().length(); j++)
                    {
                        cout << " ";
                    }

                    cout << " | " << i->getBrand();
                    for (int j = 0; j < spaceLen[8] - i->getBrand().length(); j++)
                    {
                        cout << " ";
                    }

                    cout << " |" << endl;
                }
                // garis bawah
                cout << "+";
                for (int i = 0; i < 11; i++)
                {
                    cout << "-";
                }

                for (int i = 0; i < 9; i++)
                {
                    for (int j = 0; j < spaceLen[i] + 3; j++)
                    {
                        cout << "-";
                    }
                }
            }

            cout << "+" << endl;
            //

            // menunggu enter
            cout << "Tekan Enter untuk kembali...";
            cin.get();
            break;
        }
        case 2:
        {
            // menambah produk
            cout << "Tambah Produk Clothes Petshop Dudul Miaw-miaw" << endl;

            // variabel untuk atribut
            int id, price, stock;
            string name, type, material, color, category, size, brand;

            // input
            cout << "Masukan Data (ID Nama Harga Stok Jenis Material Warna Kategori Ukuran Merk): " << endl;
            cin >> id;
            cin >> name;
            cin >> price;
            cin >> stock;
            cin >> type;
            cin >> material;
            cin >> color;
            cin >> category;
            cin >> size;
            cin >> brand;

            // buat objek langsung dengan parameter
            Clothes temp(category, size, brand);
            temp.setId(id);
            temp.setName(name);
            temp.setPrice(price);
            temp.setStock(stock);

            temp.setType(type);
            temp.setMaterial(material);
            temp.setColor(color);

            // push ke vector
            products.push_back(temp);

            cout << "Produk ditambahkan" << endl;

            // menunggu enter
            cout << "Tekan Enter untuk kembali...";
            cin.ignore();
            cin.get();
            break;
        }
        case 3:
        {
            // keluar menu
            end = 1;
            cout << "Keluar..." << endl;
            break;
        }
        default:
        {
            // default
            cout << "Menu tidak ada" << endl;
            break;
        }
        }
    }

    return 0;
}
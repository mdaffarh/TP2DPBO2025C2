<?php
session_start();
// session_destroy(); reset session
require_once 'Clothes.php';

// inisialisasi session jika belum ada
if (!isset($_SESSION['products']) || empty($_SESSION['products'])) {
    $_SESSION['products'] = [];

    // 5 data awal
    $initData = [
        new Clothes(1001, "BajuKucing", 30000, 3, "baju_kucing.png", "Baju", "Katun", "Kuning", "Kucing", "Medium", "Catqlo"),
        new Clothes(1002, "BajuAnjing", 50000, 5, "baju_anjing.png", "Baju", "Rajut", "Oren", "Anjing", "Large", "HushPuppies"),
        new Clothes(1003, "VestKucing", 50000, 5, "vest_kucing.png", "Vest", "Rajut", "Hitam", "Kucing", "Small", "HnMeow"),
        new Clothes(1004, "VestAnjing", 70000, 7, "vest_anjing.png", "Vest", "Rajut", "Putih", "Anjing", "Medium", "Gokgok"),
        new Clothes(1005, "BajuHamster", 20000, 2, "baju_hamster.png", "Baju", "Rajut", "Pink", "Hamster", "Small", "Unbrand"),
    ];

    // Simpan produk ke dalam session
    foreach ($initData as $product) {
        $_SESSION['products'][] = serialize($product);
    }
}

// Ambil data produk dari session
$products = [];
foreach ($_SESSION['products'] as $data) {
    if (is_string($data)) {
        $products[] = unserialize($data);
    }
}

?>

<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Petshop Dudul Miaw-Miaw</title>
    <style>
        table {
            width: 100%;
            border-collapse: collapse;
        }

        table,
        th,
        td {
            border: 1px solid black;
        }

        th,
        td {
            padding: 8px;
            text-align: left;
        }

        img {
            max-width: 100px;
            height: auto;
        }
    </style>
</head>

<body>
    <h2>Petshop Dudul Miaw-miaw</h2>
    <!-- daftar produk -->
    <div>
        <h3>Daftar Produk Awal</h3>
        <table>
            <tr>
                <th>ID</th>
                <th>Nama</th>
                <th>Harga</th>
                <th>Stok</th>
                <th>Gambar</th>
                <th>Tipe</th>
                <th>Bahan</th>
                <th>Warna</th>
                <th>Kategori</th>
                <th>Ukuran</th>
                <th>Merk</th>
            </tr>
            <?php foreach ($products as $product): ?>
                <tr>
                    <td><?= $product->getId(); ?></td>
                    <td><?= $product->getName(); ?></td>
                    <td><?= $product->getPrice(); ?></td>
                    <td><?= $product->getStock(); ?></td>
                    <td>
                        <img src="images/<?= $product->getImage(); ?>" alt="<?= $product->getName(); ?>">
                    </td>

                    <td><?= $product->getType(); ?></td>
                    <td><?= $product->getMaterial(); ?></td>
                    <td><?= $product->getColor(); ?></td>

                    <td><?= $product->getCategory(); ?></td>
                    <td><?= $product->getSize(); ?></td>
                    <td><?= $product->getBrand(); ?></td>
                </tr>
            <?php endforeach; ?>

        </table>
    </div>

    <!-- tambah data -->
    <?php
    $newData = new Clothes(1006, "BajuAnakKucing", 25000, 2, "baju_anak_kucing.png", "Baju", "Rajut", "Pink", "Kucing", "Small", "Unbrand");

    // cek apakah produk sudah ada
    $exists = false;
    foreach ($products as $product) {
        if ($product->getId() == $newData->getId()) {
            $exists = true;
            break;
        }
    }

    if (!$exists) {
        $_SESSION['products'][] = serialize($newData);
        $products[] = $newData;
    }
    ?>

    <!-- daftar produk -->
    <div>
        <h3>Daftar Produk Setelah Tambah Data</h3>
        <table>
            <tr>
                <th>ID</th>
                <th>Nama</th>
                <th>Harga</th>
                <th>Stok</th>
                <th>Gambar</th>
                <th>Tipe</th>
                <th>Bahan</th>
                <th>Warna</th>
                <th>Kategori</th>
                <th>Ukuran</th>
                <th>Merk</th>
            </tr>
            <?php foreach ($products as $product): ?>
                <tr>
                    <td><?= $product->getId(); ?></td>
                    <td><?= $product->getName(); ?></td>
                    <td><?= $product->getPrice(); ?></td>
                    <td><?= $product->getStock(); ?></td>
                    <td>
                        <img src="images/<?= $product->getImage(); ?>" alt="<?= $product->getName(); ?>">
                    </td>

                    <td><?= $product->getType(); ?></td>
                    <td><?= $product->getMaterial(); ?></td>
                    <td><?= $product->getColor(); ?></td>

                    <td><?= $product->getCategory(); ?></td>
                    <td><?= $product->getSize(); ?></td>
                    <td><?= $product->getBrand(); ?></td>
                </tr>
            <?php endforeach; ?>

        </table>
    </div>
</body>

</html>
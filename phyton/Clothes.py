from Accessories import Accessories

class Clothes(Accessories):
    # konstruktor
    def __init__(self, id, name, price, stock, type, material, color, category, size, brand):
        super().__init__(id, name, price, stock, type, material, color)
        self.category = category
        self.size = size
        self.brand = brand
        
    # getter dan setter untuk category
    def setCategory(self, category):
        self.category = category
    
    def getCategory(self):
        return self.category
    
    # getter dan setter untuk size
    def setSize(self, size):
        self.size = size
    
    def getSize(self):
        return self.size
    
    # getter dan setter untuk brand
    def setBrand(self, brand):
        self.brand = brand
    
    def getBrand(self):
        return self.brand
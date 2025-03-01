class PetShop:
    # konstruktor
    def __init__(self, id, name, price, stock):
        self.id = id
        self.name = name
        self.price = price
        self.stock = stock
        
    # getter dan setter untuk id
    def setId(self, id):
        self.id = id
    
    def getId(self):
        return self.id
    
    # getter dan setter untuk name
    def setName(self, name):
        self.name = name
    
    def getName(self):
        return self.name
    
    # getter dan setter untuk price
    def setPrice(self, price):
        self.price = price
    
    def getPrice(self):
        return self.price
    
    # getter dan setter untuk stock
    def setStock(self, stock):
        self.stock = stock
    
    def getStock(self):
        return self.stock
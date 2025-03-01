from PetShop import PetShop

class Accessories(PetShop):
    # konstruktor
    def __init__(self, id, name, price, stock, type, material, color,):
        super().__init__(id, name, price, stock)
        self.type = type
        self.material = material
        self.color = color
        
    # getter dan setter untuk type
    def setType(self, type):
        self.type = type
    
    def getType(self):
        return self.type
    
    # getter dan setter untuk material
    def setMaterial(self, material):
        self.material = material
    
    def getMaterial(self):
        return self.material
    
    # getter dan setter untuk color
    def setColor(self, color):
        self.color = color
    
    def getColor(self):
        return self.color
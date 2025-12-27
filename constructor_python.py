class Square:
     def __init__(self,side):
         self.side=side
     
     def getData(self):
         print('Side',self.side)

     def area(self):
         ar=self.side*self.side


sq=Square(9)
sq.getData()
sq.area()   
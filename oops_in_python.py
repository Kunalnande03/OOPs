class Employee:
      def setEmployee(self,empno,name,deptno,salary):
          self.emopno=empno;
          self.name=name;
          self.deptno=deptno;
          self.salary=salary;

      def getEmployee(self):
          print('Emp no ',self.empno);
          print('Name ',self.name);
          print('Dept no ',self.deptno);
          print('Salary ',self.salary);

manager=Employee()
manager.setEmployee(4027,'Kunal',02,50000)
manager.getEmployee()
// class student {
//   constructor() {
//     var name;
//     var marks;
//   }
//   getName() {
//     return this.name;
//   }
//   setName(Name) {
//     this.name = Name;
//   }
//   getMarks() {
//     return this.marks;
//   }
//   setMarks(Marks) {
//     this.marks = Marks;
//   }
// }
// var std = new student();
// std.setname("Mayank");
// std.setmarks(98);
// document.writeln(std.getname() + "" + std.getmarks());

class A {
  display() {
    document.writeln("A is invoked");
  }
}
class B extends A {}
var b = new B();
b.display();

// // function singer() {
// //   this.name = "arijit";
// //   this.nationality = "indian";
// // }
// // function indianidol() {
// //   singer.call(this);
// // }
// // indianidol.prototype = Object.create(singer.prototype);
// // const sing = new indianidol();
// // console.log(sing.name);
// // console.log(sing.nationality);
// let user = {};
// Object.defineProperty(user, "name", {
//   get() {
//     console.log("Getting Value...");
//     return val;
//   },
//   set(newVal) {
//     console.log("Setting Value...");
//     val = newVal;
//   },
// });
// user.name = "Mayank";
// console.log(user.name);
// let obj = {};
// Object.defineProperty(obj, "class", {
//   value: "12",
//   writetable: true,
// });
// console.log(obj.class);
// const obj1 = { property1: "initial_data" };

// // creating a second object which will freeze
// // the properties of the first object
// const obj2 = Object.freeze(obj1);

// // Updating the properties of the frozen object
// obj1.property1 = "new_data";

// // Displaying the properties of the  frozen object
// console.log(obj2.property1);
// var num1 = [1, 2, 3, 4, 5],
//   num2 = [3, 4, 8],
//   num3 = [5, 6, 7];
// var num4 = num1.concat(num2, num3);
// console.log(num4);
// var abc = ["b", "c", "cf", "cf", "df"];
// console.log(abc.concat(1, 2, 3, 4, 5, 6, 7, 8, 90));
// class employee {
//   cconstructor(id, name) {
//     this.id = id;
//     this.name = name;
//   }
//   detail() {
//     document.write(this.id + "" + this.name + "");
//   }
// }
// var e = new employee(101, "Mayank");
// e.detail();
// class student {
//   constructor() {
//     var name;
//     var marks;
//   }
//   getname() {
//     return this.name;
//   }
//   setname(name) {
//     this.name = name;
//   }
//   getmarks() {
//     return this.marks;
//   }
//   setmarks(marks) {
//     this.marks = marks;
//   }
// }
// var std = new student();
// std.setname("Mayank");
// std.setmarks(98);
// document.writeln(std.getname() + "" + std.getmarks());  0jh
// hoisting is phenomena in js which you can access varianle and function even before you have intialisation  

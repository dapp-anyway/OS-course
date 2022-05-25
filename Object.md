### Object ###

---
#### Object.assign() ####
`Object.assign(target, ...sources)` method copies all enumerable own properties from one or more `source` objects to a `target` object. It returns the modified target object.

**Example:**
```
const target = { a: 1, b: 2 };
const source = { b: 4, c: 5 };

const returnedTarget = Object.assign(target, source);

console.log(target);
// expected output: Object { a: 1, b: 4, c: 5 }

console.log(returnedTarget);
// expected output: Object { a: 1, b: 4, c: 5 }
```
---

#### Object.entries() ####
`Object.entries(object)` method returns an array of a given `object's` own enumerable string-keyed property [key, value] pairs. This is the same as iterating with a for...in loop, except that a for...in loop enumerates properties in the prototype chain as well.

**Example:**
```
const object1 = {
  a: 'somestring',
  b: 42
};

for (const [key, value] of Object.entries(object1)) {
  console.log(`${key}: ${value}`);
}

// expected output:
// "a: somestring"
// "b: 42"
```
---

#### Object.keys() ####
`Object.keys(object)` method returns an array of a given `object's` own enumerable property names, iterated in the same order that a normal loop would

**Example:**
```
const object1 = {
  a: 'somestring',
  b: 42,
  c: false
};

console.log(Object.keys(object1));
// expected output: Array ["a", "b", "c"]
```
---

#### Object.values() ####
`Object.values(object)` method returns an array of a given `object's` own enumerable property values, in the same order as that provided by a for...in loop. (The only difference is that a for...in loop enumerates properties in the prototype chain as well.)

**Example:**
```
const object1 = {
  a: 'somestring',
  b: 42,
  c: false
};

console.log(Object.values(object1));
// expected output: Array ["somestring", 42, false]
```
---

#### Object.toString() ####
`Object.toString()` method returns a string representing the object

**Example:**
```
function Dog(name) {
  this.name = name;
}

const dog1 = new Dog('Gabby');

Dog.prototype.toString = function dogToString() {
  return `${this.name}`;
};

console.log(dog1.toString());
// expected output: "Gabby"
```
---

#### Object.valueOf() ####
`Object.valueOf()` method returns the primitive value of the specified object

**Example:**
```
function MyNumberType(n) {
  this.number = n;
}

MyNumberType.prototype.valueOf = function() {
  return this.number;
};

const object1 = new MyNumberType(4);

console.log(object1 + 3);
// expected output: 7
```
---






### Number ###

---
#### Number.isFinite() ####
`Number.isFinite(value)` method determines whether the passed `value` is a finite number — that is, it checks that the type of a given value is Number, and the number is neither positive Infinity, negative Infinity, nor NaN

**Example:**
```
console.log(Number.isFinite(1 / 0));
// expected output: false

console.log(Number.isFinite(10 / 5));
// expected output: true

console.log(Number.isFinite(0 / 0));
// expected output: false
```
---

#### Number.isFinite() ####
`Number.isInteger(value)` method determines whether the passed `value` is an integer

**Example:**
```
a = Number.isInteger(1 / 2)
b = Number.isInteger(2 / 2)
console.log(a, b);
// expected output: false true
```
---

#### Number.isNaN() ####
`Number.isNaN(value)` method determines whether the passed `value` is NaN and its type is Number

**Example:**
```
a = Number.isNaN('100F'));
b = Number.isNaN(NaN));

console.log(a, b);
// expected output: false true
```
---

#### Number.parseFloat() ####
`Number.parseFloat(argument)` method parses an `argument` and returns a floating point number. If a number cannot be parsed from the argument, it returns NaN

**Example:**
```
a = Number.parseFloat('4.567abcdefgh');
b = Number.parseFloat('abcdefgh');

console.log(a, b);
// expected output: 4.567 NaN
```
---

#### Number.parseInt() ####
`Number.parseInt(string, radix)` method parses a `string` argument and returns an integer of the specified `radix`

**Example:**
```
a = Number.parseFloat('4.567abcdefgh', 16);
b = Number.parseFloat('abcdefgh', 2);

console.log(a, b);
// expected output: 15 NaN
```
---

#### Number.toFixed() ####
`Number.toFixed(number)` method formats a `number` using fixed-point notation

**Example:**
```
a = (123.456).toFixed(2);
b = (0.004).toFixed(2);

console.log(a, b);
// expected output: "123.46" "0.00"
```
---

#### Number.toString() ####
`Number.toString(radix)` method returns a string representing the specified Number object

**Example:**
```
a = (233).toString(16);
b = (11).toString(16);

console.log(a, b);
// expected output: "e9" "b"
```
---

#### Number.valueOf() ####
`Number.valueOf()` method returns the wrapped primitive value of a Number object

**Example:**
```
const numObj = new Number(42);
console.log(numObj.valueOf());
// expected output: 42
```
---



















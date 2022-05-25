### Object ###

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

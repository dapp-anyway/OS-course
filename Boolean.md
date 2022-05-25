### Boolean ###
The Boolean object is an object wrapper for a boolean value
#### Description ####
The value passed as the first parameter is converted to a boolean value, if necessary. If the value is omitted or is 0, -0, null, false, NaN, undefined, or the empty string (""), the object has an initial value of false. All other values, including any object, an empty array ([]), or the string "false", create an object with an initial value of true.

---
#### Boolean.toString() ####
Boolean.concat() method returns a string representing the specified Boolean object

**Example:**
```
const flag1 = new Boolean(true);
const flag2 = new Boolean(1);

console.log(flag1.toString(), );
// expected output: "true" "true"
```
---

#### Boolean.valueOf() ####
Boolean.valueOf() method returns the primitive value of a Boolean object

**Example:**
```
const x = new Boolean();
const y = new Boolean('Mozilla');

console.log(x.valueOf(), y.valueOf());
// expected output: false true
```
---

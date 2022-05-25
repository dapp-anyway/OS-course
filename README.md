# String.slice() #
String.slice(first, last, []) will aplly slice method and return substring from **first-th** to (last-1)-th position

`Example:`
```
const str = 'The quick brown fox jumps over the lazy dog.';
console.log(str.slice(31));
// expected output: "the lazy dog."
```

# String.fromCharCode() #
String.fromCharCode(num1, num2, ..., numN) returns a string created from the specified sequence of UTF-16 code units

`Example:`
```
console.log(String.fromCharCode(189, 43, 190, 61));
// expected output: "½+¾="
```

###String.indexOf()###
String.indexOf(searchTerm) takes a substring to search for, searches the entire calling string, and returns the index of the first occurrence of the specified substring
`Example:`
```
const paragraph = 'The quick brown fox jumps over the lazy dog. If the dog barked, was it really lazy?';
const searchTerm = 'dog';
const indexOfFirst = paragraph.indexOf(searchTerm);
console.log(`The index of the first "${searchTerm}" from the beginning is ${indexOfFirst}`);
// expected output: "The index of the first "dog" from the beginning is 40"
```

###String.replace()###
String.replace(regexp, newSubstr) method returns a new string with some or all matches of a pattern replaced by a replacement. The pattern can be a string or a RegExp, and the replacement can be a string or a function called for each match. If pattern is a string, only the first occurrence will be replaced.
`Example:`
```
const p = 'The quick brown fox jumps over the lazy dog. If the dog reacted, was it really lazy?';
console.log(p.replace('dog', 'monkey'));
// expected output: "The quick brown fox jumps over the lazy monkey. If the dog reacted, was it really lazy?"

const regex = /Dog/i;
console.log(p.replace(regex, 'ferret'));
// expected output: "The quick brown fox jumps over the lazy ferret. If the dog reacted, was it really lazy?"
```

###String.split()###
String.split(separator) method divides a String into an ordered list of substrings, puts these substrings into an array, and returns the array
`Example:`
```
const str = 'The quick brown fox jumps over the lazy dog.';

const words = str.split(' ');
console.log(words[3]);
// expected output: "fox"
```

###String.toLowerCase()###
String.toLowerCase() method returns the calling string value converted to lower case
`Example:`
```
const sentence = 'The quick brown fox jumps over the lazy dog.';

console.log(sentence.toLowerCase());
// expected output: "the quick brown fox jumps over the lazy dog."
```

###String.toUpperCase()###
String.toUpperCase() method returns the calling string value converted to uppercase (the value will be converted to a string if it isn't one)
`Example:`
```
const sentence = 'The quick brown fox jumps over the lazy dog.';

console.log(sentence.toUpperCase());
// expected output: "THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG."
```

###String.substring()###
String.substring(indexStart, indexEnd) method returns the part of the string between the start and end indexes, or to the end of the string
`Example:`
```
const str = 'Mozilla';

console.log(str.substring(1, 3));
// expected output: "oz"
```

###String.charAt()###
String.charAt(index) method returns a new string consisting of the single UTF-16 code unit located at the specified offset into the string
`Example:`
```
const sentence = 'The quick brown fox jumps over the lazy dog.';

const index = 4;

console.log(`The character at index ${index} is ${sentence.charAt(index)}`);
// expected output: "The character at index 4 is q"
```

###String.charCodeAt()###
String.charCodeAt(index) method returns an integer between 0 and 65535 representing the UTF-16 code unit at the given index
`Example:`
```
const sentence = 'The quick brown fox jumps over the lazy dog.';

const index = 4;

console.log(`The character code ${sentence.charCodeAt(index)} is equal to ${sentence.charAt(index)}`);
// expected output: "The character code 113 is equal to q"
```

###String.concat()###
String.concat(str1, str2, ... , strN) method concatenates the string arguments to the calling string and returns a new string
```
const str1 = 'Hello';
const str2 = 'World';

console.log(str1.concat(' ', str2));
// expected output: "Hello World"
```

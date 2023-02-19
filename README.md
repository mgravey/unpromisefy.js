# unpromise.js
A Node.js addon to convert a resolved Promise into a non-Promise value.

## How to use ?

`````javascript
const unpromise = require('./build/Release/unpromise');
let promise=Promise.resolve(123);
console.log(promise)
console.log(unpromise.unPromised(promise));
```
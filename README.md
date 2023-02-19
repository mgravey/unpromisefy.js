# unpromisefy.js
A Node.js addon to convert a resolved Promise into a non-Promise value.

## How to use ?

```javascript
const unpromisefy = require('unpromisefy');
let promise=Promise.resolve(123);
console.log(promise)
console.log(unpromisefy.unpromisefy(promise));
```
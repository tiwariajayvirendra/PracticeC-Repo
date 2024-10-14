// Custom polyfill for Array.prototype.filter
Array.prototype.customFilter = function(callback, thisArg) {
    if (this == null) {
        throw new TypeError('Array.prototype.customFilter called on null or undefined');
    }
    if (typeof callback !== 'function') {
        throw new TypeError(callback + ' is not a function');
    }

    const result = [];
    const array = Object(this);
    const len = array.length >>> 0;

    for (let i = 0; i < len; i++) {
        if (i in array) {
            const element = array[i];
            if (callback.call(thisArg, element, i, array)) {
                result.push(element);
            }
        }
    }

    return result;
};

// Example usage
const numbers = [1, 2, 3, 4, 5, 6];
const evenNumbers = numbers.customFilter(num => num % 2 === 0);
console.log(evenNumbers); // Output: [2, 4, 6]


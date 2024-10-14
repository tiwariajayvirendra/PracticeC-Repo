if (!Array.prototype.includes) {
    Array.prototype.includes = function(element, start) {
        'use strict';
        if (this == null) {
            throw new TypeError('Array.prototype.includes called on null or undefined');
        }

        const array = Object(this);
        const length = array.length >>> 0;
        if (length === 0) {
            return false;
        }

        const n = start | 0;
        let k = Math.max(n >= 0 ? n : length - Math.abs(n), 0);

        while (k < length) {
            if (array[k] === element || (isNaN(array[k]) && isNaN(element))) {
                return true;
            }
            k++;
        }

        return false;
    };
}

// Example usage
const numbers = [1, 2, 3, 4, 5];
console.log(numbers.includes(3)); // Output: true
console.log(numbers.includes(6)); // Output: false


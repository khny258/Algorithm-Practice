/**
 * @param {string} s
 * @return {number}
 */
var romanToInt = function(s) {
    const numHash = {
        "I" : 1,
        "V" : 5,
        "X" : 10,
        "L" : 50,
        "C" : 100,
        "D" : 500,
        "M" : 1000
    }


let num = [];
    let arr = s.split("");
    for(let i = 0; i < arr.length; i++) {
        if (numHash[arr[i]] < numHash[arr[i+1]]) {
            num.push(numHash[arr[i+1]] - numHash[arr[i]]), i++
        } else {num.push(numHash[arr[i]]);
               }
    }
    console.log(num)
    return num.reduce((accumulator, currentVal) => accumulator + currentVal);

};
/*given [10, 15, 3, 7] and value of 17, return true if there are any sum of two numbers in the array = to 17. Example (10 + 7 is 17).*/

//subtract the current number from the answer.
//then look for the checkvalue in the array

function FindSumC(numbers, answer) {
    let checkValue = 0
    let found = false

    for (let i = 0; i <= numbers.length - 1; i++) {
        checkValue = answer - numbers[i]
        if (numbers.includes(checkValue, i + 1)) {
            found = true
            break
        }
    }
    console.log(found)
}

FindSumC([10, 15, 3, 7], 17)
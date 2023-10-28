let array=[23,25,31,42,36]
let array2=[1,2,3,4,5]
let num=[88,21,23,41,51]
delete array[0]
console.log(array)
console.log(array.length)
let b=array.concat(array2,num)   //does not change original array
console.log(array2)
console.log(b)
array.sort()


let compare=(a,b)=>{
    return b-a;
}

console.log(array)
array.sort(compare)
console.log(array)

//Splice and slice
num.splice(1,3,13,2019,"barbad")   // modifies source array
console.log(num)
num.reverse()
console.log(num)
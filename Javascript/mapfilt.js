let array=[45,23,21];
let a=array.map((value)=>{
    console.log(value);
    return value+1;
})
console.log(a) //used for new elements
let array2=[45,23,21];
let b=array.map((value,index,array2)=>{
    console.log(value);
    return value+array2[index];
})
console.log(b)
// console.clear()

let c=array2.filter((a)=>{
    return a>29;
})
console.log(c);
let arr3=[22,33,41,64];
let newarr3=arr3.reduce((h1,h2)=>{
    return h1+h2;
})
console.log(newarr3);
let d=array.filter((e)=>{
    return e<40;
})
console.log(d)
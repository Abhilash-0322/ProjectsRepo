console.log('hello world');
let a="abc".toUpperCase();
console.log(a);
string="this is the best thing about strings that they are actually arrays";
console.log(string);
// string.push('.');
console.log(string);
function myhellofunction(){
    console.log("this is my function");
    console.log("we will learn javascript and score good in college");
}
myhellofunction();
function myloop(n){
console.log(`this is iteration no:${n}`);
if(n<=0){
    return;
}
myloop(n-1);
}
myloop(3);
function sum(a,b){
    c=a+b;
    console.log(c);
    return c;
}
let d=sum(1,3);
for(let i=0;i<10;i++){
    console.log(`printing ${d} for iteration no:${i+1}`);
}
console.log(d);
function multiplication(){
    return a*b;
}
let arrow=()=>{
    console.log("this is arrow function");
};
arrow();
let divide=(a,b)=>{
    console.log("this is an arrow function and it is working fine");
    console.log(a/b);
}
divide(5,2);
const hello=()=>{
    console.log("hello this is hello called so im logging");
}
hello();
let countervowels=(string)=>{
    let counter1=0;
    for (const char of string){
        console.log(char);
        if(char==='a'||
        char==='e'||
        char==='i'||
        char==='o'||
        char==='u'){
            counter1++;
        }
    }
    console.log(`The number of vowels in provided string is :${counter1}`)
}
countervowels(string);
const samework=(string)=>{
    countervowels(string);
}
samework(string);
let arr=[1,3,4,5,6,7,8,"pune","delhi","mumbai"]
let arr2=arr.pop[-3];
arr.forEach((element,index) => {
    console.log(element,index);
});
arr.forEach((element)=>{
    console.log(element*element)
}
)
let newarr=arr.map((element)=>{
    return element*2;
});
console.log(newarr);
console.log(arr2);
let arreven=arr.filter((element)=>{
    return element%2===0;
})
console.log(arreven);
let biggest=arr.reduce((element,previous)=>{
    return previous>element?previous:element;
})
console.log(biggest);
let marks=[89,60,90,99,97,,98,99,95,93,92,79];
let toppers=marks.filter((element)=>{
    return element>90;
})
console.log(toppers);
let promparray=[];
let n=prompt("Enter your number");
for (let i=1;i<=n;i++){
    promparray[i-1]=i;
}
document.write(promparray);
let promparraysum=0;
for(let i=1;i<=n;i++){
    promparraysum+=i;
    console.log(`sum up to ${i} is : ${promparraysum}`);
    sum(promparraysum,i-i);
}
let fact=promparray.reduce((res,curr)=>{
    return res*curr;
})
console.log(`factorial is ${fact}`);
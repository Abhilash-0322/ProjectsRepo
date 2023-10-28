// const readline =require('readline');

// const rl = readline.createInterface({
//   input: process.stdin,
//   output: process.stdout
// });

// rl.question('Enter your age: ', (answer) => {
//   const age = parseInt(answer);
//   if (!isNaN(age)) {
//     console.log(`You entered: ${age}`);
//   } else {
//     console.log('Invalid input. Please enter a number.');
//   }
//   rl.close();
// });
let a=prompt("valid age");
a=Number.parseInt(a);
if(a<0){
    alert("invalid age")
}
// else{
//     alert("YOU are born")
// }
switch (a){
    case 18:{
        alert("YOu are old")
    }
}
const student={
    fullName:"Abhishek Dixit",
    marks:89,
    printmarks:function(){
        console.log("marks are "+this.marks)
    }
};
const employee={
    calctax(){
        console.log("the tax for them is 10%")
    },
    calctax1:function(){
        console.log("tax rate is maybe 20% now")
    },
    calctax3:()=>{
        console.log("tax rate is maybe 30% now as this is an arrow function")
    },
};
let Arjun={
    salary:50000,
};
Arjun.__proto__=employee;
let Abhishek={

}
Abhishek.__proto__=student;
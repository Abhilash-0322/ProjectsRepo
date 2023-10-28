let age=prompt("enter your age");
if(age>10 && age<20){
    alert("Good");
}
else{
    document.write("it's not the time\n");
    alert("your age is not in range"); 
}
// question2
age=Number.parseInt(age)
switch (age){
    case 1:{
        console.log("your age is 1");
        break;
    }
    case 2:{
        console.log("your age is 2");
        break;
    }
    case 3:{
        console.log("your age is 3");
        break;
    }
    case 4:{
        console.log("your age is 4");
        break;
    }
    case 5:{
        console.log("yuor age is 5");
        break;
    }
    default:{
        console.log("your age is not what we are looking for");
        document.write("your are not what we re looking for");
    }
}
if (age%2==0 && age %3==0){
    document.write("What Do You Mean");
}
document.write(age<18? "under":" \n adult");
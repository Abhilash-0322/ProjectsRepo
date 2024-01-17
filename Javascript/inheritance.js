class Person{
    constructor(){
        this.specie="homo sapian";
    }
    eat(){
        console.log("Eating");
    }
    sleep(){
        console.log("Sleeping");
    }
    work(){
        console.log("we are consumers")
    }
}
class Engineer extends Person{
    work(){
        console.log("working on project");
    }
}
class Doctor extends Person{
    work(){
        console.log("Treat Person")
    }
}
let zuckeberg=new Engineer();
let p1=new Person();
let e1=new Engineer();
class ToyotaCar{
    constructor(brand,milage){
        this.engine="V8";
        this.milage=milage;
        this.brand=brand;
        console.log("New Car created and the car is "+brand+" it has milage of "+milage)
    }
    start(){
        console.log("the car is started")
    }
    stop(){
        console.log("the car is stopped")
    }
    setBrand(brand){
        this.brand=brand;
    }
}
let fortuner=new ToyotaCar("Fortuner",60);
fortuner.setBrand("SUV");
console.log(fortuner)
let Corolla=new ToyotaCar("Corolla",90);
let lexus=new ToyotaCar("Lexus",80);
class Supercar extends ToyotaCar{
    constructor(brand,milage){
        super(brand,milage);
        console.log("\0 Its a super car")
    }
    nitro(){
        console.log("Nitro used")
    }
    turbo(){
        console.log("turbo turned on")
    }
}
let Supta=new Supercar("Supra",21)
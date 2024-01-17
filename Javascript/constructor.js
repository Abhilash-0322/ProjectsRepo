let data="very big secret ghost";
class user{
    constructor(name,email){
        this.name=name;
        this.email=email;
    }
    viewdata(){
        console.log("data=",data)
    }
}
let student1=new user("Shradha","Shrasha@123.com")
class Admin extends user{
    editdata(){
        try{
        data=prompt("Enter new data")
        super.viewdata()
        }
        catch(err){
            console.log(err)
        }
    }
}
let teacher1=new Admin("Dhiramdra sir Physics","dhirendra@kiet.edu");
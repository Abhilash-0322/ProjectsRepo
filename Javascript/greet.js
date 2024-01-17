function greet(name){
    console.log("HI "+name)
}
greet("Anjana");
function makeAdjectifier(adjective){
    return function string(string){
        return adjective +" "+string;
    }
}
var coolifier=makeAdjectifier("cool");
let text=coolifier("confrence");
console.log(text)
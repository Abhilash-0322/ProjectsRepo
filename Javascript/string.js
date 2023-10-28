const name="Harry";
console.log(name.length);
let friend ="Prateek";
console.log(friend);
console.log(name[4]);
//tempelate literals
let boy1="Promod";
let boy2="Nikhil";
let sentence=`${boy1} is a friend of ${boy2}`;
console.log(sentence);
let fruit="banana\'1";
console.log(fruit)
// fruit=Number.parseInt(fruit.length)
console.log(fruit)
console.log(name.toUpperCase())
console.log(name.slice(2,4))
console.log(name.replace("arr","unn"))
console.log(name.concat(" is a friend of",boy2,"ok"));
for(let i of "harry"){
    if(i =="r"){
        continue
    }
    console.log(i);
}
for (let i in name){
    console.log(name[i]);
}

const word='fox';
console.log(sentence.includes(word))
console.log(`The word "${word}"${sentence.includes(word)?'is':'is not '}in the sentence`)
//question 2
console.log(sentence.toLowerCase())
console.log(sentence.toUpperCase())
str2=sentence.slice(0,13)
console.log(str2)
let frined="Cinderella";
console.log(friend)  //it's not changed cause strings are immutable
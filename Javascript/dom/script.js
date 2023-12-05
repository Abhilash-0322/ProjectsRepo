console.log(window);
window.console.log("hello");
console.dir(window.Object);
console.dir(document);
console.dir(document.body.childNodes[1]);
document.getElementsByTagName("div")[0].innerText="I changed the div content with javascript";
document.getElementsByTagName("p")[0].innerText="This Para Is Changed due to javascript isn't it awesome?"
let h1=document.getElementsByTagName("h1")[0];
h1.innerText="This Is Manipulated Using Javascript"
h1.innerText+=" , this text is added using concatination";
document.getElementsByClassName("div")[0].innerText="These Are the div of our documents";
document.getElementById("hello").innerText="we are fool";
let button=document.getElementById("button");
button.style.color="grey";
let para=document.querySelector("p");
para.innerText="We changed this by query selector";
let paras=document.querySelectorAll("p");
paras.innerText="This text is for all the paras";
document.getElementById("hello").parentElement.innertext="idk";
document.body.children[2].innerText="This element got its id because this is a children of body";
let child3=document.body.children[3];
child3.innerText="this is third child";
child3.nextElementSibling.innerHTML="This text is inside a div<div></div><div></div>";
child3.nextElementSibling.children[0].innerText="great to see we got some text inside unseeable div";
child3.nextElementSibling.children[1].innerHTML="<h1 id=\"hidden\">Fruits\n<tr></tr></h1>";
document.body.innerHTML+="<div>Bro this is new child of this body of the DOM but this is not done using append</div>";
let divs=document.querySelectorAll(".box");
// divs[0].innerText="This String for box 1";
// divs[1].innerText="This String for box 2";
// divs[2].innerText="This String for box 3";
let index=1;
for (let div of divs){
    div.innerText=`new string for box ${index}`;
    index++;
}
let id=divs[0].getAttribute("id");
console.log(id);
let newBtn=document.createElement("button");
newBtn.innerText="click Me";
newBtn.style.backgroundColor="white";
newBtn.backgroundColor="red";
document.querySelector("body").prepend(newBtn);
let Para1=document.querySelector("#para1");
Para1.innerHTML="<i>Hello this is My Para given text with javascript</i>";
Para1.style.color="Lime";
Para1.classList.add("newClass");
Para1.classList.add("newClass2");
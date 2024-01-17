let div=document.querySelector("#div");
let a=prompt("enter the value to print pattern of stars");
let colors=["red","green","blue","yellow","teal","pink","lime","blueviolet"];
for(let i=1;i<=a;i++){
    const randomindex=Math.floor(Math.random() * colors.length);
    let rowDiv = document.createElement("div");
    rowDiv.style.color=colors[randomindex];
    for(let j=1;j<=i;j++){
        let starSpan = document.createElement("span");
        starSpan.innerText="*";
        rowDiv.appendChild(starSpan);
    }
    div.appendChild(rowDiv);
}
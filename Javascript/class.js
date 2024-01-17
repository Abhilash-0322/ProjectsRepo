const readline = require('readline');

class Student {
    constructor() {
        this.rollno = 0;
        this.age = 0;
        this.name = '';
        this.section = '';
        this.cgpa = 0.0;
        this.gender = '';
    }
}

async function main() {
    const tag = [];
    const pronoun = [];
    const n = await prompt("Enter the number of students in the class:");
    const IT = [];

    for (let i = 0; i < n; i++) {
        IT[i] = new Student();

        IT[i].rollno = await prompt(`Enter the roll number for student ${i + 1}:`);
        IT[i].name = await prompt(`Enter the name for student ${i + 1}:`);
        IT[i].age = await prompt(`Enter the age for student ${i + 1}:`);
        IT[i].section = await prompt(`Enter the section for student ${i + 1}:`);
        IT[i].cgpa = await prompt(`Enter the CGPA for student ${i + 1}:`);
        IT[i].gender = await prompt(`Enter the gender for student ${i + 1}:`);
    }

    for (let i = 0; i < n; i++) {
        if (IT[i].gender.toUpperCase() === 'F') {
            tag[i] = 'her';
            pronoun[i] = 'she';
        } else {
            tag[i] = 'his';
            pronoun[i] = 'he';
        }

        console.log(`\nRoll No ${IT[i].rollno} is ${IT[i].name} ${tag[i]} age is ${IT[i].age}, ${pronoun[i]} got CGPA of ${IT[i].cgpa} in section ${IT[i].section} \0`);
        // if(IT[i].gender.toUpperCase()==='F'){
        //     console.log("you know she is beatutiful");
        // }
    }
}

function prompt(question) {
    const rl = readline.createInterface({
        input: process.stdin,
        output: process.stdout
    });

    return new Promise(resolve => {
        rl.question(question + ' ', answer => {
            rl.close();
            resolve(answer);
        });
    });
}

main();
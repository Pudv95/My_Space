/*

Number(${somthing}) convers somthing to number 
same thing is done by the uniray operator +

Number("5") = +"5"

therefore:->
        5+ +"5"
            gives us 10;

*/

let a = 5;

console.log(a+ +"5");

let b = 6;

a=b;  // like each operator this will also return a value that is the value that is assigned int this case 6

a = 5;

console.log(a=b);


/*
    == this operator tries to convert the two operand to same form while comparing
    === this operator  just compares no conversion bullshit
*/

console.log(0 == false); // true
console.log(0 === false); // false

/*
    null == undefined is true but null === undefined is false
*/

/*
    equality in null operator doesnot perform any conversions
    therfore 5 == null is false
    BUT BUT BUT.......
    any other comparison operator converts it into a number
    and null converted  to number is zero;
    so null >= 0 is true
    but null > 0 is false
*/

/**
 * undefined on conversion convers to null 
 * therefore undefined == 0 is false  so as undefined > 0 and undefined < 0
 */


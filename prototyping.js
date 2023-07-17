function Person(fname, lname){
    this.firstname= fname
    this.lastname= lname
}
const person1 = new Person('aman','kumar')
const person2 = new Person('aman','tiwari')

//this fn is soecific to person1 applied only to person1 but in order to apply on all th einstances of person we use prototype
// person1.getfullname = function(){
//     return this.firstname +" "+ this.lastname;
// }

//prototype its geenraic 
Person.prototype.getfullname =  function() {
    return this.firstname+" "+this.lastname
}

console.log(person2.getfullname())

console.log(person1.getfullname())

//new starting no link with the upper code

//clasees in js 
class person{
    constructor(fname,lname){
        this.firstname = fname
        this.lastname = lname

    }

//bcoz js is the dynamicaaly typed language we can anytime change it 
//a method of class
saymyname(){
    return this.firstname+" "+ this.lastname
}
}

//creating instances of the class
const person3 = new person('aman ', 'kumar tiwari')
console.log(person3.saymyname())

//now inheriteting the class
class superhero extends person{
    constructor(fname, lname){
        //super is method provided by js
        // this will call the person name class constructor
        //once we call the super we set the superhero properrties and methods in class 
        super(fanme, lname)
        this.issuperhero = true
    }
    fightcrime(){
        console.log('fighting crime')

    }
}

const batman = new superhero('aman' ,' kumar')
console.log(batman.saymyname())



//iterable protocols 
//new loc nothing to do with the previous code
const obj = {
    [symbol.iterator]:function(){
        //need to take care of states 
        let step = 0;
        //creating object 
        const iterator = {
            //method
            next:function () {
                step++
                if(step == 1){
                    return { value:"hello", done: false}

                }
                else{
                    return { value:'world', done :false};
                }
                return {value:undefined,done:true}
                //value gives the current element and done is a boolean value will check if there are any other to be iterative
            }
        }
        return iterator
        //the method should return and obj which contain two things, 1st value, 2nd done
    },
}
for(const word of obj){
    console.log(word);
    //output  hello world
}

//generator function
function* myGenerator() {
    yield "hello"
    yield "AMan"
}

const generatorobj = myGenerator()
//generatorobj is a generator onject
for(const word of generatorobj){
    console.log(word)
    //output hello world
} 
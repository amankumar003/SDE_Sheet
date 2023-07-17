function greet(){
    console.log("heelo aman")
}

setTimeout(greet, 2000)
//output hello aman in conslole after 2 seconds

//promises in js
//creating promises 
const promise = new Promise() //promise with new keyword is a constructor function

// how to fulfill or reject the promises 
//by creating arrow function
const promises = new Promise((resolve, reject)=>{
//resolve and reject both are fn when 
//resolve is called it changes the states form pending to fullfill
resolve()
//and reject chnages from pending to rejected
reject()

//but both this are called after the async fn

//as in dinner case sceneraio friends takes time to go and text you
//like if food truck was found we call resolve after 5 seconda and if not we will call reject after 5 seconds

})
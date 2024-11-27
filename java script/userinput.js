// function data(){
//     let selectedname =document.querySelector('#name');
//     let name = selectedname.value;
//     let selectedage =document.querySelector('#age');
//     let age = selectedage.value;
//     console.log(name);
//     console.log(age);

//     return false;
// }


// ========================================================

function registration(){
    let name = document.querySelector('#name').value;
    let email = document.querySelector('#email').value;
    let mobile = document.querySelector('#mobile').value;
    let password = document.querySelector('#password').value;
    let cpassword = document.querySelector('#cpassword').value;

    console.log(name,email,mobile,password,cpassword);

    if(name ===""){
        document.querySelector('#errorname').innerHTML = "please enter your name";
        let selectname = document.querySelector('#name');
        selectname.style.borderColor = "red"
        selectname.style.outlineColor = "red"
        return false;

    }
    else if(email === ""){
        document.querySelector('#erroremail').innerHTML ="please enter your email";
        let selectemail = document.querySelector('#email');
        selectemail.style.borderColor = "red";
        selectemail.style.outlineColor ="red"
        return false;
    }
    else if(!(email.include('@')&& email.includes(".com"))){
        document.querySelector('#erroremail').innerHTML= "please enter email";
        let selectname = document.querySelector('#email');
        selectname.style.borderColor = "red"
        selectname.style.outlineColor = "red"
        return false;

    }
    else if(mobile === ""){
        document.querySelector('#errormobile').innerHTML ="please enter your mobile";
        let selectname = document.querySelector('#mobile');
        selectname.style.borderColor = "red";
        selectname.style.outlineColor ="red"
        return false;
    }
    else if(mobile.length !==10){
        document.querySelector('#errormobile').innerHTML= "mobile number shouid be 10 digit";
        let selectname = document.querySelector('#mobile');
        selectname.style.borderColor = "red"
        selectname.style.outlineColor = "red"
        return false;

    }
    else if(isNaN(mobile)){
        document.querySelector('#errormobile').innerHTML= "mobile number shouid be 10 digit";
        let selectname = document.querySelector('#mobile');
        selectname.style.borderColor = "red"
        selectname.style.outlineColor = "red"
        return false;

    }

    else if(password === ""){
        document.querySelector('#errorpassword').innerHTML ="please enter your password";
        let selectname = document.querySelector('#password');
        selectname.style.borderColor = "red";
        selectname.style.outlineColor ="red"
        return false;
    }
    else if(!(password.match([/1234567890/])&& password.match(/[@#$%^&*()]/)&& password.match(/[qwertyuiopasdfghjklzxcvbnm]/)&& password.match(/[QWERTYUIOPASDFGHJKLZXCVBNM]/))){
        document.querySelector('#errorpassword').innerHTML= "password contain atleast 1 lower , upper , special and number";
        let selectname = document.querySelector('#password');
        selectname.style.borderColor = "red"
        selectname.style.outlineColor = "red"
        return false;

    }
    else if(password != cpassword){
       window.alert("password and confirm password not match");
       document.querySelector('#cpassword').value ="";
       document.querySelector('#password').value ="";
       document.querySelector('#password')
    }
    // else if(password != cpassword){
    //     document.querySelector('#errorcpassword').innerHTML ="please enter your cpassword";
    //     let selectname = document.querySelector('#cpassword');
    //     selectname.style.borderColor = "red";
    //     selectname.style.outlineColor ="red"
    //     return false;
    // }
    
    }


function s(arg){
    // let selectedinput = document.querySelector('#name');
    // let selecterrorname = document.querySelector('#errorname');
    console.log(arg)
        let selectedinput = document.querySelector(`#${arg}`);
        console.log(selectedinput);
    selectedinput.style.borderColor = "black";
    selectedinput.style.outlineColor = "black";

    let selectederrordiv = document.querySelector(`#error${arg}`);
    selectederrordiv.innerHTML =""

}



// console.log("code is right");
// return false;
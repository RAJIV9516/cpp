// function threenumber(){
//     let num1 =parseInt(window.prompt("enter number one"));
//     let num2 =parseInt(window.prompt("enter number two"));
//     let num3 =parseInt(window.prompt("enter number three"));

//     if(num1>num2 && num1>num3){
//         window.alert("number one is greater" + num1);
//     }
//     else if(num2>num1 && num2>num3){
//         window.alert("number two is greater" + num2);
//     }
//     else{
//         window.alert("number three is greater" num3);
//     }

// }

function evenodd(){
    let num =parseInt(window.prompt("enter a number"));

    if(num%2==0){
        window.alert("even");
    }
    else{
        window.alert("odd")
    }
}
evenodd();
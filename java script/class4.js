function check1(){
    let res = window.confirm("do you really want to logout");
    // if(res){}
    // console.log(res);
    if(res){
        window.location.href="login.html"
    }
    else{
        window.alert("invalid click")
    }

}
check1();
// function call  
// window.location.href="login.html"(tranfer one page to another page) 
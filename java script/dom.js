// function dom(){
//     let a = document.querySelector('#text');
//     a.style.color = "red";
//     a.style.fontSize = "50px";
//     let b = document.querySelector('.heading');
//     b.style.color = "blue";
//     b.style.fontSize = "50px";



//     console.log(a);
//     console.log(b);

// }
function zoomin(){
    let selecteding = document.querySelector('#img1');
    selecteding.style.scale = "1.2";
    selecteding.style.transition = "scale 0.5s";
    console.log(selecteding);
    
}

function initial(){
    let selecteding = document.querySelector('#img1')
    selecteding.style.scale ="1";
    selecteding.style.transition = "scale 0.5s"
}
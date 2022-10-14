let X = true;
window.onload=function()
{
var square = document.getElementById("board").children;
var stat = document.getElementById("status");
for (let a = 0; a < square.length; a++)
    {
    square[a].setAttribute("class","square");
    square[a].addEventListener("mouseover",function()
    {
        square[a].classList.add("hover");
    })
    square[a].addEventListener("mouseout",function()
    {
        square[a].classList.remove("hover");
    })
    square[a].addEventListener("click",function()
    {
        if (X == false)
        {   
            square[a].innerHTML = "X"; square[a].classList.add("X");
            X = true   
        }
        else
        {
            square[a].innerHTML = "O"; square[a].classList.add("O");
            X = false
        }
    for (let a = 0; a<square.length; a += 3)
    {
        if(square[a].innerHTML == square[a+1].innerHTML&&square[a].innerHTML == square[a+2].innerHTML && square[a+1].innerHTML != "")
        {
            if (X == false) 
            {
            stat.innerHTML = ("Congratulations! O is the Winner! "); stat.classList.add("You have won");
            }
            else
            {
                stat.innerHTML = ("Congratulations! X is the Winner!"); stat.classList.add("You have won");             
            }
        }
    }  
    for (let a = 0; a < 3; a += 3)
    {
       if(square[a].innerHTML==square[a+3].innerHTML&&square[a].innerHTML==square[a+6].innerHTML&&square[a].innerHTML!="") 
       {
        if (X != true) 
        {
            stat.innerHTML=("Congratulations! O is the Winner!");
            stat.classList.add("you have won");
        }
        else
        {
            stat.innerHTML=("Congratulations! X is the Winner! ");
            stat.classList.add("you have won");
        }
       }
    } 
    if(square[2].innerHTML == square[4].innerHTML && square[2].innerHTML == square[6].innerHTML && square[2].innerHTML != "")
        {
            if (X != true)
            {
                stat.innerHTML=("Congratulations! X is the Winner!"); stat.classList.add("you have won");                
            }
            else
            {
                stat.innerHTML=("Congratulations! O is the Winner!"); stat.classList.add("you have won");                
            }
        }
    })
    if(square[0].innerHTML == square[4].innerHTML && square[0].innerHTML == square[8].innerHTML && square[0].innerHTML != "")
        {   
            if (X != true)
            {
            stat.innerHTML=("Congratulations! X is the Winner!"); stat.classList.add("you have won");                
            }
            else
            {
                stat.innerHTML=("Congratulations! O is the Winner!"); stat.classList.add("you have won");            
            }
        }
    }
   
}

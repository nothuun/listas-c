const count = document.getElementById("num");
const incBtn = document.getElementById("inc");
const decBtn = document.getElementById("dec");
const resetBtn = document.getElementById("resetCount");

let num = parseInt(count.textContent, 10);

incBtn.addEventListener('click', () => { 

    num++;
    count.textContent = num;
})

decBtn.addEventListener('click', () => { 

    num--;
    count.textContent = num;
})

resetBtn.addEventListener('click', () => { 

    num = 0;
    count.textContent = num;
})

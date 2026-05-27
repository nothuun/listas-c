const display = document.getElementById("timer");
const pause = document.getElementById("pause");
const start = document.getElementById("start");
const resetTimer = document.getElementById("resetTimer");

let timer = 0;
let time = parseInt(display.textContent, 10);

start.addEventListener('click', () => { 

    if (!timer) {

        timer = setInterval(() => {

            time++;
            display.textContent = time;
            
        }, 1000);
    }
})

pause.addEventListener('click', () => { 

    clearInterval(timer);
    timer = 0;
})

resetTimer.addEventListener('click', () => { 

    clearInterval(timer);

    timer = 0;
    display.textContent = timer;
})


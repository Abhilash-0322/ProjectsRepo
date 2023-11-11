const canvas = document.createElement('canvas');
const ctx = canvas.getContext('2d');
document.body.appendChild(canvas);

const canvasWidth = 1500;
const canvasHeight = 710;
canvas.width = canvasWidth;
canvas.height = canvasHeight;

const gridSize = 20;
const gridWidth = canvasWidth / gridSize;
const gridHeight = canvasHeight / gridSize;

let snake = [{ x: 10, y: 10 }];
let direction = 'right';
let food = generateFood();
let score = 0;

function gameLoop() {
    ctx.clearRect(0, 0, canvasWidth, canvasHeight);
    moveSnake();

    if (checkCollision()) {
        gameOver();
        return;
    }

    if (snake[0].x === food.x && snake[0].y === food.y) {
        snake.push({});
        food = generateFood();
        score += 1;
    }

    drawSnake();
    drawFood();
    drawScore();

    setTimeout(gameLoop, 100);
}

function moveSnake() {
    const newHead = { x: snake[0].x, y: snake[0].y };

    if (direction === 'up') newHead.y--;
    if (direction === 'down') newHead.y++;
    if (direction === 'left') newHead.x--;
    if (direction === 'right') newHead.x++;

    snake.unshift(newHead);
    snake.pop();
}

function checkCollision() {
    if (
        snake[0].x < 0 ||
        snake[0].x >= gridWidth ||
        snake[0].y < 0 ||
        snake[0].y >= gridHeight
    ) {
        return true;
    }

    for (let i = 1; i < snake.length; i++) {
        if (snake[i].x === snake[0].x && snake[i].y === snake[0].y) {
            return true;
        }
    }

    return false;
}

function generateFood() {
    return {
        x: Math.floor(Math.random() * gridWidth),
        y: Math.floor(Math.random() * gridHeight),
    };
}

function drawSnake() {
    colors=['yellow','blue','green','pink','cyan'];
    // ctx.fillStyle = 'green';
    ctx.fillStyle=colors[score%5];
    for (let i = 0; i < snake.length; i++) {
        ctx.fillRect(
            snake[i].x * gridSize,
            snake[i].y * gridSize,
            gridSize,
            gridSize
        );
    }
}

function drawFood() {
    ctx.fillStyle = 'red';
    ctx.fillRect(food.x * gridSize, food.y * gridSize, gridSize, gridSize);
}

function drawScore() {
    ctx.fillStyle = 'black';
    ctx.font = '20px Arial';
    ctx.fillText('Score: ' + score, 10, 30);
}

function gameOver() {
    alert('Game Over. Your score: ' + score);
    snake = [{ x: 10, y: 10 }];
    direction = 'right';
    food = generateFood();
    score = 0;
}

document.addEventListener('keydown', (event) => {
    if (event.key === 'ArrowUp' && direction !== 'down') {
        direction = 'up';
    } else if (event.key === 'ArrowDown' && direction !== 'up') {
        direction = 'down';
    } else if (event.key === 'ArrowLeft' && direction !== 'right') {
        direction = 'left';
    } else if (event.key === 'ArrowRight' && direction !== 'left') {
        direction = 'right';
    }
});

gameLoop();
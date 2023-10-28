import pygame
import sys
import random

# Initialize Pygame
pygame.init()

# Constants
WIDTH, HEIGHT = 400, 400
GRID_SIZE = 20
GRID_WIDTH = WIDTH // GRID_SIZE
GRID_HEIGHT = HEIGHT // GRID_SIZE
WHITE = (255, 255, 255)
GREEN = (0, 255, 0)
RED = (255, 0, 0)
SNAKE_SPEED = 3

# Create the game window
window = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("Snake Game")

# Snake starting position
snake = [(GRID_WIDTH // 2, GRID_HEIGHT // 2)]
snake_direction = (0, 1)

# Food starting position
food = (random.randint(0, GRID_WIDTH - 1), random.randint(0, GRID_HEIGHT - 1))

# Game loop
clock = pygame.time.Clock()
while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            sys.exit()
        elif event.type == pygame.KEYDOWN:
            if event.key == pygame.K_w and snake_direction != (0, 1):
                snake_direction = (0, -1)
            elif event.key == pygame.K_s and snake_direction != (0, -1):
                snake_direction = (0, 1)
            elif event.key == pygame.K_a and snake_direction != (1, 0):
                snake_direction = (-1, 0)
            elif event.key == pygame.K_d and snake_direction != (-1, 0):
                snake_direction = (1, 0)

    # Move the snake
    new_head = (snake[0][0] + snake_direction[0], snake[0][1] + snake_direction[1])
    snake.insert(0, new_head)

    # Check for collisions with the food
    if snake[0] == food:
        food = (random.randint(0, GRID_WIDTH - 1), random.randint(0, GRID_HEIGHT - 1))
    else:
        snake.pop()

    # Check for collisions with the walls
    if (
        snake[0][0] < 0
        or snake[0][0] >= GRID_WIDTH
        or snake[0][1] < 0
        or snake[0][1] >= GRID_HEIGHT
    ):
        pygame.quit()
        sys.exit()

    # Check for collisions with itself
    if snake[0] in snake[1:]:
        pygame.quit()
        sys.exit()
        
    # Draw everything
    window.fill(WHITE)
    for segment in snake:
        pygame.draw.rect(
            window, GREEN, (segment[0] * GRID_SIZE, segment[1] * GRID_SIZE, GRID_SIZE, GRID_SIZE)
        )
    pygame.draw.rect(
        window, RED, (food[0] * GRID_SIZE, food[1] * GRID_SIZE, GRID_SIZE, GRID_SIZE)
    )
    pygame.display.update()

    # Cap the frame rate
    clock.tick(SNAKE_SPEED)

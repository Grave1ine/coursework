# T-Rex Game Project

## Introduction

This is a project for the course "LevelUP Stage I ".
The project is a 2D game in the style of the GOOGLE arcade game "T-Rex Runner" from Google Chrome.

## How to play

You can jump with the SPACE bar or the UP arrow.
Collect Bonus points by jumping over the cacti.

## Game design

This is an MVC game. The model is the game logic, the view is the game graphics and the controller is the game input and
the game loop.

![MVC_Model](./img/MVC-Process.svg)

### Model

Derived Class from the abstract class "Drawable".

### View

Board class is the view. It is responsible for the game graphics.

### Controller

Controller is the game input and the game loop. Presented by the class Game.





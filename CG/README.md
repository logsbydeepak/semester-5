# CG

Computer Graphics lab programs (Turbo C `graphics.h`). Each program links to its source in [`code`](./code) and shows its output from [`output`](./output).

## Contents

1. [Digital Differential Analyzer Algorithm](#1-digital-differential-analyzer-algorithm)
2. [Bresenham's Line Drawing Algorithm](#2-bresenhams-line-drawing-algorithm)
3. [Midpoint Circle Generation Algorithm](#3-midpoint-circle-generation-algorithm)
4. [Ellipse Generation Algorithm](#4-ellipse-generation-algorithm)
5. [Creating various types of texts and fonts](#5-creating-various-types-of-texts-and-fonts)
6. [Creating two dimensional objects](#6-creating-two-dimensional-objects)
7. [Two Dimensional Transformations](#7-two-dimensional-transformations)
8. [Coloring the Pictures](#8-coloring-the-pictures)
9. [Three Dimensional Transformations](#9-three-dimensional-transformations)
10. [Curve Generation](#10-curve-generation)
11. [Simple Animations using transformations](#11-simple-animations-using-transformations)
12. [Key Frame Animation](#12-key-frame-animation)

## 1. Digital Differential Analyzer Algorithm

[program](./code/01-digital-differential-analyzer-algorithm.c)

![DDA](./output/01-dda.jpeg)

## 2. Bresenham's Line Drawing Algorithm

[program](./code/02-bresenham-line-drawing-algorithm.c)

![Bresenham line](./output/02-bresenham-line.png)

## 3. Midpoint Circle Generation Algorithm

[program](./code/03-midpoint-circle-generation-algorithm.c)

![Midpoint circle](./output/03-midpoint-circle.png)

## 4. Ellipse Generation Algorithm

[program](./code/04-ellipse-generation-algorithm.c)

![Ellipse](./output/04-ellipse.png)

## 5. Creating various types of texts and fonts

[program](./code/05-text-and-fonts.c)

![Text and fonts](./output/05-text-and-fonts.png)

## 6. Creating two dimensional objects

| Object | Program | Output |
| --- | --- | --- |
| House | [program](./code/06-house.c) | ![House](./output/06-house.jpeg) |
| Car | [program](./code/06-car.c) | ![Car](./output/06-car.png) |
| Fish | [program](./code/06-fish.c) | ![Fish](./output/06-fish.png) |
| Man | [program](./code/06-man.c) | ![Man](./output/06-man.jpeg) |
| Triangle using `drawpoly()` | [program](./code/06-drawpoly.c) | ![drawpoly](./output/06-drawpoly.png) |

## 7. Two Dimensional Transformations

### Translation

[program](./code/07-translation.c)

![Translation](./output/07-translation.jpeg)

### Scaling

[program](./code/07-scaling.c)

![Scaling](./output/07-scaling.png)

### Rotation

[program](./code/07-rotation.c)

![Rotation](./output/07-rotation.png)

### Reflection about x-axis

[program](./code/07-reflection-x-axis.c)

Before reflection:

![Before reflection](./output/07-reflection-before.png)

After reflection about x-axis:

![Reflection about x-axis](./output/07-reflection-x-axis.png)

### Reflection about y-axis

[program](./code/07-reflection-y-axis.c)

Before reflection:

![Before reflection](./output/07-reflection-before.png)

After reflection about y-axis:

![Reflection about y-axis](./output/07-reflection-y-axis.png)

### X-shear

[program](./code/07-x-shear.c)

The red rectangle is the object after x-shear.

![X-shear](./output/07-x-shear.png)

### Y-shear

[program](./code/07-y-shear.c)

The red rectangle is the object after y-shear.

![Y-shear](./output/07-y-shear.png)

## 8. Coloring the Pictures

### Flood fill

4-connected: [program](./code/08-flood-fill-4-connected.c)

![4-connected flood fill](./output/08-flood-fill-4-connected.png)

8-connected: [program](./code/08-flood-fill-8-connected.c)

![8-connected flood fill](./output/08-flood-fill-8-connected.png)

### Boundary fill

4-connected: [program](./code/08-boundary-fill-4-connected.c)

![4-connected boundary fill](./output/08-boundary-fill-4-connected.png)

8-connected: [program](./code/08-boundary-fill-8-connected.c)

![8-connected boundary fill](./output/08-boundary-fill-8-connected.png)

### Scan line polygon fill

[program](./code/08-scan-line-polygon-fill.c)

![Scan line fill 1](./output/08-scan-line-1.png) ![Scan line fill 2](./output/08-scan-line-2.png)

### Using inbuilt graphics functions

| Function | Program | Output |
| --- | --- | --- |
| `fillpoly` | [program](./code/08-fillpoly.c) | ![fillpoly](./output/08-fillpoly.png) |
| `floodfill` | [program](./code/08-floodfill.c) | ![floodfill](./output/08-floodfill.png) |
| `setfillstyle` | [program](./code/08-setfillstyle.c) | not shown in the manual |
| `setcolor` | [program](./code/08-setcolor.c) | ![setcolor](./output/08-setcolor.png) |
| `fillellipse` | [program](./code/08-fillellipse.c) | ![fillellipse](./output/08-fillellipse.png) |

## 9. Three Dimensional Transformations

### Translation

[program](./code/09-3d-translation.c)

![3D translation input and original](./output/09-3d-translation-1.png) ![3D translation result](./output/09-3d-translation-2.png)

### Scaling

[program](./code/09-3d-scaling.c)

![3D scaling 1](./output/09-3d-scaling-1.png) ![3D scaling 2](./output/09-3d-scaling-2.png) ![3D scaling 3](./output/09-3d-scaling-3.png) ![3D scaling 4](./output/09-3d-scaling-4.png) ![3D scaling 5](./output/09-3d-scaling-5.png)

### Rotation

[program](./code/09-3d-rotation.c)

![3D rotation 1](./output/09-3d-rotation-1.png) ![3D rotation 2](./output/09-3d-rotation-2.png)

## 10. Curve Generation

Bezier curve: [program](./code/10-bezier-curve.c)

![Bezier 1](./output/10-bezier-1.png) ![Bezier 2](./output/10-bezier-2.png)

## 11. Simple Animations using transformations

Moving circle in different directions: [program](./code/11-moving-circle.c)

![Moving circle 1](./output/11-moving-circle-1.png) ![Moving circle 2](./output/11-moving-circle-2.png) ![Moving circle 3](./output/11-moving-circle-3.png) ![Moving circle 4](./output/11-moving-circle-4.png)

## 12. Key Frame Animation

Done in Adobe Flash Professional (timeline and key frames); there is no C program for this one.

## Running in DOSBox

```
# mount host ~/dosboxx as C: drive
mount c ~/dosboxx

# add turbo c to path
SET PATH=C:\TC\BIN;Z:\;Z:\SYSTEM;Z:\BIN;Z:\DOS

# compile
TC\BIN\TCC.EXE -IC:\TC\INCLUDE -LC:\TC\LIB C:\1.c GRAPHICS.LIB

# run
1.EXE
```

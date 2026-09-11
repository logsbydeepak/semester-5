# CG

1. Digital Differential Analyzer Algorithm [program](./code/01-digital-differential-analyzer-algorithm.c)
2. Bresenham's Line Drawing Algorithm [program](./code/02-bresenham-line-drawing-algorithm.c)

3. Midpoint Circle Generation Algorithm [program](./code/03-midpoint-circle-generation-algorithm.c)

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


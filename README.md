# Fractals-Explorer
Project that I did in my studies at 42Berlin, It's about exploring the beauty of fractals, more specifically the Mandelbrot and Julia sets.
# Description
<h3>What is a fractal?</h3>
<p>The term <b>fractal</b> was first used by mathematician Benoit Mandelbrot in 1974. He based
it on the Latin word fractus which means "broken" or "fractured".
A fractal is an abstract mathematical object, like a curve or a surface, which pattern
remains the same at every scale.
Various natural phenomena – like the romanesco cabbage – have some fractal features.</p>
<h3>Objective</h3>
<p>Create a basic <b>computer graphics project</b>.</p>
<p>You are going to use the 42school graphical library: the <b>MiniLibX</b>! This library was
developed internally and includes basic necessary tools to open a window, create images
and deal with keyboard and mouse events.</p>
<p>More about <b>MiniLibX</b>: https://harm-smits.github.io/42docs/</p>
<p>This will be the opportunity for you to get familiar with the <b>MiniLibX</b>, to discover
or use the mathematical notion of <b>complex numbers</b>, to take a peek at the concept of
<b>optimization in computer graphics</b> and practice <b>event handling</b>.</p>
<h3>Install and Run</h3>
*(tested on Ubuntu)*

```
git clone https://github.com/VulpesDev/Fractals-Explorer.git ~/Fractol
cd ~/Fractol && make && ./fractol m
```
<p>Different parameters to use</p>

```
./fractol m
```
```
./fractol j
```
```
./fractol j r<0-500> i<0-500>
```
<sub>(for example: "./fractol j r450 i210)</sub>

```
./fractol t
```

<h3>Challenges that I faced</h3>
<p>At first it was really hard to imagine how fractals should be rendered overall. What I end up doing in the beginning was creating a line drawing function (<a href="https://en.wikipedia.org/wiki/Bresenham%27s_line_algorithm">Bresenham's line algorithm</a>), this turned out to be useless for the project so I deleted it and started it over. Then I found it difficult to translate complex number calculations (we were not allowed to use the <a href="https://pubs.opengroup.org/onlinepubs/009695399/basedefs/complex.h.html">complex.h</a>), but in the end the project turned out to be quite simple and took me 3-4 days to finish.

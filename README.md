# What is this?

It's just my attempt of trying out how one library can use other hot-swappable modules without actually linking itself with them. This will keep the size of the library small and will let the users of the library decide which module they wants to plug.

# Important Note

The actual code and structures might look like some types in FreeType. These are not related. I just wanted to give them meaningful names, that's it. I just invented all of this. It's all dummy anyway.

# Code

`libfreetype` contains the main library. This is the thing that depends on an `SVG Rendering Module`. It contains two structures. 

1. `FT_SVGHooks` This is a structure that can store pointers to SVG Rendering Module's functions.
2. `FT_Config` This is a structure that holds the configuration of this library as it is initialized and used by a `user` program.

It also contains two functions:

1. `FT_InjectSVGHooks`: This function is used to inject an instance of `FT_SVGHooks`. This function will store it in the `FT_Config` structure.
2. `renderSVG`: This function will be used by the actual `user` program to render SVGs.

`svg_renderer_one` Is one of the SVG rendering modules which should be pluggable in `libfreetype`.

`svg_renderer_two` is just another one of those.

`main.c` is the actual `user` program which is going to include `freetype`, include any one of the SVG rendering modules and inject the `FT_SVGHooks` object in`freetype` and then call `renderSVG` to see if it works.
#include <svg_renderer_one.h>
#include <stdio.h>

void renderer_glyph_header(){
   printf("---- Renderer A --- Header ------------\n"); 
}

void renderer_glyph_main(char* message){
    printf("%s", message);
}

void renderer_glyph_footer(){
   printf("---- Renderer A --- Footer ------------\n"); 
}

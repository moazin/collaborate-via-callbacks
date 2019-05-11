#include <svg_renderer_two.h>
#include <stdio.h>

void renderer_glyph_header(){
   printf("---- Renderer B --- Header ------------\n"); 
}

void renderer_glyph_main(char* message){
    printf("%s", message);
}

void renderer_glyph_footer(){
   printf("---- Renderer B --- Footer ------------\n"); 
}

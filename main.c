#include <freetype.h>
#include <svg_renderer_two.h>

int main(void){
    FT_SVGHooks hooks;
    hooks.renderer_glyph_header = &renderer_glyph_header;
    hooks.renderer_glyph_main = &renderer_glyph_main;
    hooks.renderer_glyph_footer = &renderer_glyph_footer;
    FT_Config config;
    FT_InjectSVGHooks(&config, &hooks);
    renderSVG(&config, "hello world, this is working");
    return 0;
}

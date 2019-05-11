#include <freetype.h>

void FT_InjectSVGHooks(FT_Config* config, FT_SVGHooks* hooks){
    config->hooks = hooks;
}

void renderSVG(FT_Config* config, char* glyph){
    FT_SVGHooks* hooks = config->hooks;
    (*(hooks->renderer_glyph_header))();
    (*(hooks->renderer_glyph_main))(glyph);
    (*(hooks->renderer_glyph_footer))();
}

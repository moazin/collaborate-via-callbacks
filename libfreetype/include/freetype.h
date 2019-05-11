
// function headers for FreeType functions

typedef struct _FT_SVGHooks {
    void (*renderer_glyph_header)();
    void (*renderer_glyph_main)(char*);
    void (*renderer_glyph_footer)();
} FT_SVGHooks;

typedef struct _FT_Config {
    FT_SVGHooks* hooks;
} FT_Config;

void FT_InjectSVGHooks(FT_Config* config, FT_SVGHooks* hooks);

void renderSVG(FT_Config* config, char* glylph);

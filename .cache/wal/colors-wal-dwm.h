static const char norm_fg[] = "#a7cddd";
static const char norm_bg[] = "#031525";
static const char norm_border[] = "#748f9a";

static const char sel_fg[] = "#a7cddd";
static const char sel_bg[] = "#546998";
static const char sel_border[] = "#a7cddd";

static const char urg_fg[] = "#a7cddd";
static const char urg_bg[] = "#0470AC";
static const char urg_border[] = "#0470AC";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};

const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#031525", /* black   */
  [1] = "#0470AC", /* red     */
  [2] = "#546998", /* green   */
  [3] = "#BA72AD", /* yellow  */
  [4] = "#1D91B3", /* blue    */
  [5] = "#5DA2BF", /* magenta */
  [6] = "#23A6C6", /* cyan    */
  [7] = "#a7cddd", /* white   */

  /* 8 bright colors */
  [8]  = "#748f9a",  /* black   */
  [9]  = "#0470AC",  /* red     */
  [10] = "#546998", /* green   */
  [11] = "#BA72AD", /* yellow  */
  [12] = "#1D91B3", /* blue    */
  [13] = "#5DA2BF", /* magenta */
  [14] = "#23A6C6", /* cyan    */
  [15] = "#a7cddd", /* white   */

  /* special colors */
  [256] = "#031525", /* background */
  [257] = "#a7cddd", /* foreground */
  [258] = "#a7cddd",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;

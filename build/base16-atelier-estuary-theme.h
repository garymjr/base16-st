/*
* base16-atelier-estuary-theme.h 
*
* Base16: (https://github.com/chriskempson/base16)
*
* Authors:
*
* Scheme: Bram de Haan (http://atelierbramdehaan.nl)
* Template: Honza Pokorny <me@honza.ca>
*
*/

static const char *colorname[] = {
  "#302f27", /* base01 */
  "#ba6236", /* base08 */
  "#7d9726", /* base0B */
  "#a5980d", /* base0A */
  "#36a166", /* base0D */
  "#9d6c7c", /* base0F */
  "#5b9d48", /* base0C */
  "#e7e6df", /* base06 */
  "#22221b", /* base00 */
  "#ae7313", /* base09 */
  "#5f5e4e", /* base02 */
  "#6c6b5a", /* base03 */
  "#878573", /* base04 */
  "#5f9182", /* base0E */
  "#929181", /* base05 */
  "#f4f3ec", /* base07 */
};

/*
* Default colors (colorname index)
* foreground, background, cursor, reverse
* cursor
*/
unsigned int defaultfg = 12;
unsigned int defaultbg = 8;
static unsigned int defaultcs = 14;
static unsigned int defaultrcs = 15;

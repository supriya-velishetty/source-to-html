/*
 * Project     : Source-to-HTML-Converter
 * File        : s2html_conv.h
 * Author      : Supriya Velishetty
 * Description : Function declarations for HTML conversion.
 */

#ifndef S2HTML_CONV_H
#define S2HTML_CONV_H

/* constants */

#define HTML_OPEN	1
#define HTML_CLOSE	0

/********** function prototypes **********/

void html_begin(FILE* dest_fp, int type); /* type => not used, but can be used to add differnet HTML tags */
void html_end(FILE* dest_fp, int type); /* type => not used, but can be used to add differnet HTML tags */
void source_to_html(FILE* fp, pevent_t *event);

#endif


/*
 * GnomeSword Bible Study Tool
 * navbar_versekey.h - glue between all navbar_versekey and sword
 *
 * Copyright (C) 2000,2001,2002,2003 GnomeSword Developer Team
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Library General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */
 
#ifndef  _NAVBAR_VERSEKEY_H_
#define _NAVBAR_VERSEKEY_H_

#ifdef __cplusplus
extern "C"
{
#endif
	

enum {
	NB_MAIN,
	NB_PARALLEL,
	NB_DIALOG,
	NB_EDITOR
};

typedef struct _navbar_versekey NAVBAR_VERSEKEY;
struct _navbar_versekey {	
	GtkWidget *navbar;
	GtkWidget *button_sync;
	GtkWidget *button_history_back;
	GtkWidget *button_history_next;
	GtkWidget *button_history_menu;	
	
	GtkWidget *button_book_up;
	GtkWidget *button_book_down;
	GtkWidget *button_chapter_up;
	GtkWidget *button_chapter_down;
	GtkWidget *button_verse_up;
	GtkWidget *button_verse_down;
	
	GtkWidget *button_book_menu;
	GtkWidget *button_chapter_menu;
	GtkWidget *button_verse_menu;
	GtkWidget *label_book_menu;
	GtkWidget *label_chapter_menu;
	GtkWidget *label_verse_menu;
	GtkWidget *book_menu;
	GtkWidget *chapter_menu;
	GtkWidget *verse_menu;
	
	GtkWidget *lookup_entry;
  	//GtkTooltips *tooltips;	
	GString *key;
	gchar *book;
	GString *module_name;
	gboolean dialog;
	gint testaments;
	gint type;	
};
extern NAVBAR_VERSEKEY navbar_versekey;
extern NAVBAR_VERSEKEY navbar_parallel;

const char *main_get_valid_key(char * key);
GtkWidget *main_versekey_drop_down_book_menu(NAVBAR_VERSEKEY navbar, 
						gint nb_type,
						gpointer dialog,
						gpointer editor);
GtkWidget *main_versekey_drop_down_verse_menu(NAVBAR_VERSEKEY navbar, 
						gint nb_type,
						gpointer dialog,
						gpointer editor);
GtkWidget *main_versekey_drop_down_chapter_menu(NAVBAR_VERSEKEY navbar, 
						gint nb_type,
						gpointer dialog,
						gpointer editor);
void main_navbar_versekey_spin_book(NAVBAR_VERSEKEY navbar, int direction);
void main_navbar_versekey_spin_chapter(NAVBAR_VERSEKEY navbar, int direction);
void main_navbar_versekey_spin_verse(NAVBAR_VERSEKEY navbar, int direction);
void main_navbar_versekey_book_prev(void);
void main_navbar_versekey_book_next(void);
void main_navbar_versekey_chapter_prev(void);
void main_navbar_versekey_chapter_next(void);
void main_navbar_versekey_verse_prev(void);
void main_navbar_versekey_verse_next(void);
void main_setup_navbar_versekey(char * module_name, char * key);
void main_navbar_versekey_set(NAVBAR_VERSEKEY navbar, const char * key);

#ifdef __cplusplus
}
#endif

#endif /* _NAVBAR_VERSEKEY_H_ */

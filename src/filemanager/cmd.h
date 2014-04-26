/** \file cmd.h
 *  \brief Header: routines invoked by a function key
 *
 *  They normally operate on the current panel.
 */

#ifndef MC__CMD_H
#define MC__CMD_H

#include "lib/global.h"

/*** typedefs(not structures) and defined constants **********************************************/

/*** enums ***************************************************************************************/

typedef enum
{
    LINK_HARDLINK = 0,
    LINK_SYMLINK_ABSOLUTE,
    LINK_SYMLINK_RELATIVE
} link_type_t;

/* selection flags */
typedef enum
{
    SELECT_FILES_ONLY = 1 << 0,
    SELECT_MATCH_CASE = 1 << 1,
    SELECT_SHELL_PATTERNS = 1 << 2
} select_flags_t;

/*** structures declarations (and typedefs of structures)*****************************************/

/*** global variables defined in .c file *********************************************************/

/*** declarations of public functions ************************************************************/

void undelete_cmd (void);
void smart_dirsize_cmd (void);
void single_dirsize_cmd (void);
void dirsizes_cmd (void);
gboolean view_file_at_line (const vfs_path_t * filename_vpath, gboolean plain_view,
                            gboolean internal, long start_line);
gboolean view_file (const vfs_path_t * filename_vpath, gboolean normal, gboolean internal);
void view_file_cmd (void);
void edit_file_at_line (const vfs_path_t * what_vpath, gboolean internal, long start_line);
void rename_cmd (void);
void mkdir_cmd (void);
void reread_cmd (void);
void vfs_list (void);
void hotlist_cmd (void);
void panel_tree_cmd (void);
void link_cmd (link_type_t link_type);
void select_invert_cmd (void);
void unselect_cmd (void);
void select_cmd (void);
void swap_cmd (void);
void view_other_cmd (void);
void quick_cd_cmd (void);
void save_setup_cmd (void);
char *get_random_hint (int force);
void user_file_menu_cmd (void);
void info_cmd (void);
void listing_cmd (void);
void quick_cmd_no_menu (void);
void info_cmd_no_menu (void);
void quick_view_cmd (void);
void toggle_listing_cmd (void);
#ifdef HAVE_CHARSET
void encoding_cmd (void);
#endif

/*** inline functions ****************************************************************************/
#endif /* MC__CMD_H */

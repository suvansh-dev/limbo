/*
 * Copyright © 2010 Codethink Limited
 *
 * This library is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * licence, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307,
 * USA.
 *
 * Author: Ryan Lortie <desrt@desrt.ca>
 */

#if defined(G_DISABLE_SINGLE_INCLUDES) && !defined (__GLIB_H_INSIDE__) && !defined (GLIB_COMPILATION)
#error "Only <glib.h> can be included directly."
#endif

#ifndef __G_TIME_ZONE_H__
#define __G_TIME_ZONE_H__

#include <glib/gtypes.h>

G_BEGIN_DECLS

typedef struct _GTimeZone GTimeZone;

GTimeZone *             g_time_zone_new                                 (const gchar *identifier);
GTimeZone *             g_time_zone_new_utc                             (void);
GTimeZone *             g_time_zone_new_local                           (void);

GTimeZone *             g_time_zone_ref                                 (GTimeZone   *tz);
void                    g_time_zone_unref                               (GTimeZone   *tz);

G_END_DECLS

#endif /* __G_TIME_ZONE_H__ */

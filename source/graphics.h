/*
 * Copyright (c) 2011 Eddie Ringle <eddie@eringle.net>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef __included_graphics_h
#define __included_graphics_h

#include "universal_include.h"

#include "entity.h"
#include "hashtable.h"

struct texture {
    /* SDL_Surface *surface; */
    unsigned int id;

    unsigned int originalWidth;
    unsigned int originalHeight;

    bool         damaged;
    unsigned int alpha;
};

typedef struct texture Texture;

bool    crb_gfx_initialize();
bool    crb_gfx_setup_window(int _width, int _height, int _bpp, bool _windowed);
bool    crb_gfx_flip();
bool    crb_gfx_bind_textures(Texture *_tex);
bool    crb_gfx_bind_texture_by_id(unsigned int _id);
int     crb_gfx_tex_from_image(const char *_image);
bool    crb_gfx_draw_entity(struct entity *_entity);
bool    crb_gfx_destroy_window();
bool    crb_gfx_finish();

#endif /* __included_graphics_h */

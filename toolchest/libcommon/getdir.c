/*
 * Copyright (c) 2016 Simon Schmidt
 * THIS FILE HAS BEEN MODIFIED
 *
 * Copyright (c) 2003 Gunnar Ritter
 *
 * This software is provided 'as-is', without any express or implied
 * warranty. In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute
 * it freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 *
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 *
 * 3. This notice may not be removed or altered from any source distribution.
 */
/*	Sccsid @(#)getdir.c	1.20 (gritter) 5/14/06	*/

#include	<sys/types.h>
#include	<sys/stat.h>
#include	<stdlib.h>
#include	<errno.h>
#include	<string.h>
#include    <dirent.h>
#include    <unistd.h>

#include	"getdir.h"

#define	DIBSIZE	5120

struct	getdb {
	DIR * dir;
	struct direc d;
	char data [4000];
};

struct getdb *
getdb_alloc(const char *path, int fd)
{
	struct getdb	*db;
	fd = dup(fd);
	if(fd<0) return NULL;
	if ((db = malloc(sizeof *db)) == NULL)
		goto ERR;
	db->dir = fdopendir(fd);
	if(db->dir)
		return db;
	free(db);
ERR:
	close(fd);
	return NULL;
}

void
getdb_free(struct getdb *db)
{
	closedir(db->dir);
	free(db);
}

struct direc *
getdir(struct getdb *db, int *err)
{
	struct dirent* dr;
	dr = readdir(db->dir);
	strncpy(db->data,dr->d_name,4000);
	db->data[3999]=0;
	db->d.d_ino = dr->d_ino;
	db->d.d_name = db->data;
	return &(db->d);
}


#-
# ==========================================================================
# Copyright (c) 2011 Autodesk, Inc.
# All rights reserved.
# 
# These coded instructions, statements, and computer programs contain
# unpublished proprietary information written by Autodesk, Inc., and are
# protected by Federal copyright law. They may not be disclosed to third
# parties or copied or duplicated in any form, in whole or in part, without
# the prior written consent of Autodesk, Inc.
# ==========================================================================
#+

EXTRA_C++FLAGS = -ftemplate-depth-60
EXTRA_INCLUDES = -I$(DEVKIT_ALEMBIC_INCDIR) \
                 -I$(DEVKIT_ALEMBIC_INCDIR)/AlembicPrivate \
                 -I$(DEVKIT_ALEMBIC_INCDIR)/AlembicPrivate/ilmbase
EXTRA_LFLAGS   = -L$(DEVKIT_ALEMBIC_LIBDIR)

include Makefile.inc

CC = gcc
OBJ = CFcurl
CFLAGS = -fPIC -Wall -O2 -m64 -D__cdecl= -I$(curlINC) -c 
LIBNAME = $(OBJ).$(EXT)
OBJNAME = $(OBJ).o
DEFNAME = $(OBJ).def
SHFLAGS = -m64 -shared -L$(curlLIB) -L$(LIB) 

vpath %.ox .
vpath %.c .
vpath %.h $(INC)
vpath %.oxo $(LIB)
vpath %.$(EXT) $(LIB)

$(LIBNAME) : $(OBJNAME) 

%.oxo : %.ox %.h
	$(OX) $(OXFLAGS) -i$(INC) -c $<
	$(COPY) $@ $(LIB)
	$(ERASE) $@

%.o : %.c
	$(CC) $(CFLAGS) -fPIC $< 

%.$(EXT) : %.o
	$(ERASE) $@
	$(CC) $(SHFLAGS) -o $(LIBNAME) $^ -l$(LCNAME) -loxwin CFcurl.def
	$(COPY) $@ $(LIB)$(SLASH)lib$@ 
	$(ERASE) $@

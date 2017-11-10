Version := OxMetrics7
OS := Linux

CFcurlHOME = ..
INC := $(CFcurlHOME)/include
LIB := $(CFcurlHOME)/lib
curlINC = $(INC)
curlLIB = $(LIB)

ifeq ($(OS), Windows)
	OX := "C:\Program Files\$(Version)\Ox\bin64\oxl.exe"
	LCNAME=curldll
    	EXT = dll
	OXFLAGS := -d 
	ECHO := echo
	CD := dir
	COPY := copy
	OXDOC := "C:\Program Files (x86)\oxdoc\bin\oxdoc.bat"
	SED := "C:\Program Files (x86)\GnuWin32\bin\sed.exe"
	ERASE := erase
else ifeq ($(OS), Darwin)
	OX := oxl
	OXFLAGS := -d 
	curlLIB = /usr/lib64
	LCNAME=curl
	ECHO := printf
	CD := cd
	COPY := cp
	ERASE := rm -f 
	SED := sed
    	EXT = so
else ifeq ($(OS), Linux)
	OX := /home/ferrallc/bin/$(Version)/ox/bin64/oxl
	OXFLAGS := -DMPI -d 
	curlLIB = /usr/lib64
	LCNAME=curl
	ECHO := printf
	CD := cd
	COPY := cp
	ERASE := rm -f 
	SED := sed
    	EXT = so
endif

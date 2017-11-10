Version := OxMetrics7
OS := Windows

CFcurlHOME = ..
INC := $(CFcurlHOME)\include
LIB := $(CFcurlHOME)\lib
curlINC = $(INC)

ifeq ($(OS), Windows)
	OX := "C:\Program Files\$(Version)\Ox\bin64\oxl.exe"
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
	ECHO := printf
	CD := cd
	COPY := cp
	ERASE := rm
	SED := sed
    EXT = so
else ifeq ($(OS), Linux)
	OX := /home/ferrallc/bin/$(Version)/ox/bin64/oxl
	OXFLAGS := -DMPI -d 
	ECHO := printf
	CD := cd
	COPY := cp
	ERASE := rm
	SED := sed
    EXT = so
endif

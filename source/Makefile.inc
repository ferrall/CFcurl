Version := OxMetrics7
CFcurlHOME = ..

ifdef ComSpec
    PATHSEP2=\\
else
    PATHSEP2=/
endif
SLASH=$(strip $(PATHSEP2))
INC := $(CFcurlHOME)$(SLASH)include
LIB := $(CFcurlHOME)$(SLASH)lib
curlINC = $(INC)

ifdef ComSpec
	OX := "C:\Program Files\$(Version)\Ox\bin64\oxl.exe"
    curlLIB = $(LIB)
	LCNAME=curldll
    EXT = dll
	OXFLAGS := -d 
	ECHO := echo
	CD := dir
	COPY := copy
	OXDOC := "C:\Program Files (x86)\oxdoc\bin\oxdoc.bat"
	SED := "C:\Program Files (x86)\GnuWin32\bin\sed.exe"
	ERASE := erase
else 
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


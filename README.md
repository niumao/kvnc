=======================================
Qt-only version of the KRDC VNC backend
=======================================

In order to build it, you need the LibVNCClient (LibVNCServer)
library (version 0.9.1 or newer required):
  http://sourceforge.net/project/showfiles.php?group_id=32584&package_id=24717

Copy these files into a folder and run:
  qmake
  make

In order to try it out, type:
  ./krdc-vnc-qtonly vnc://:password@server:1 1
  (the last argument defines the quality as second argument (1-3, where 1 is
  the best). Default is 2.)

If you use these code in your project, make sure that QTONLY is defined (see
krdc-vnc-qtonly.pro).

IMPORTANT NOTICE
================
If you do any fixes or improvements in these files, please backport them to the original sources.
Please send a patch with the changes to <uwolfer @ kde.org>. Thanks a lot!


## It's simple Separate from KRDC from me
Please keep their rules

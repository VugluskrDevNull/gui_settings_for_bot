TEMPLATE = subdirs


libtimebomb.subdir  = lib/timebomb
libqircbot.subdir   = lib/qircbot
timebomb.subdir     = apps/timebomb
qircbot.subdir      = apps/qircbot
sett.subdir         = apps/sett          #
qircgui.subdir      = apps/qircgui  #add

SUBDIRS = common      \
          libtimebomb \
          libqircbot  \
                      \
          timebomb    \
          qircbot     \
          sett        \                    #
          qircgui                    #add

libqircbot.depends   = common
timebomb.depends     = common libtimebomb
qircbot.depends      = common libqircbot
+qircgui.depends      = common libqircbot libtimebomb
+sett.depends        = common libqircbot     #



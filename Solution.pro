#message(MySubdirTest2.pro begin)

TEMPLATE = subdirs

SUBDIRS += \ 
    src/StaticLib \
    src/SharedLib \
    src/App

# build must be last:
CONFIG += ordered
#SUBDIRS += build

#message(MySubdirTest2.pro end)


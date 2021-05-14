# Common parameters for all files


PROJECT_ROOT_PATH = $${PWD}

CONFIG *= -debug_andrelease debug_and_release_target

win32: OS_SUFFIX = win32
linux-g++: OS_SUFFIX = linux

CONFIG(debug, debug|release) {
        BUILD_FLAG = debug
        BUILD_SUFFIX = d
        message(common.pri : CONFIG=debug)
}
else {
        BUILD_FLAG = release
        message(common.pri : CONFIG=release)
}

#global folders
BIN_PATH = $${PROJECT_ROOT_PATH}/bin/$${OS_SUFFIX}/$${BUILD_FLAG}
BUILD_PATH = $${PROJECT_ROOT_PATH}/build/$$OS_SUFFIX/$$BUILD_FLAG
LIBS_PATH = $${PROJECT_ROOT_PATH}/libs/$$OS_SUFFIX
IMPORT_PATH = $${PROJECT_ROOT_PATH}/import
INC_PATH  = $${PROJECT_ROOT_PATH}/include

##bin
#DESTDIR = $${BIN_PATH}

#build
RCC_DIR = $${BUILD_PATH}/rcc
UI_DIR = $${BUILD_PATH}/ui
MOC_DIR = $${BUILD_PATH}/moc
OBJECTS_DIR = $${BUILD_PATH}/obj

#libs
LIBS += -L$${LIBS_PATH}
INCLUDEPATH += $${INC_PATH}
INCLUDEPATH += $${IMPORT_PATH}

#messages
message("common.pri file is loaded")
message("BIN_PATH = "$$BIN_PATH)
message("BUILD_PATH = "$$BUILD_PATH)
message("LIBS_PATH = "$$LIBS_PATH)

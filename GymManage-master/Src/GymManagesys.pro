#-------------------------------------------------
#
# Project created by QtCreator
#
#-------------------------------------------------

QT       += core gui
QT       +=sql
QT       +=gui widgets
QT       +=widgets

CONFIG += qaxcontainer #导出excel




greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = HotelManagesys
TEMPLATE = app

INCLUDEPATH +=$$PWD/../

SOURCES += main.cpp\
    $$PWD/widget.cpp \
    $$PWD/../app/iconhelper.cpp \
    $$PWD/../app/frmmessagebox.cpp \
    $$PWD/../app/mysqlapi.cpp \
    $$PWD/../app/myapp.cpp \
    $$PWD/../app/myhelper.cpp \
    $$PWD/../app/mythread.cpp \
    $$PWD/logindialog.cpp \
    $$PWD/registerdialog.cpp \
    $$PWD/promanage.cpp \
    $$PWD/costomerregisterinfodialog.cpp \
    $$PWD/customerwindget.cpp \
    $$PWD/romminfo.cpp \
    $$PWD/modiftvenueprice.cpp \
    $$PWD/checkcutomdialog.cpp \
    $$PWD/logblogdialog.cpp \
    $$PWD/modifypwddialog.cpp \
    $$PWD/venuepicdialog.cpp \
    $$PWD/backupdatanasedialog.cpp \
    $$PWD/checkoutdialog.cpp \
    out.cpp

HEADERS  += widget.h \
    $$PWD/../app/iconhelper.h \
    $$PWD/../app/frmmessagebox.h \
    $$PWD/../app/myapp.h \
    $$PWD/../app/myhelper.h \
    $$PWD/../app/mythread.h \
    $$PWD/../app/Connection.h \
    $$PWD/../app/mysqlapi.h \
    $$PWD/logindialog.h \
    $$PWD/registerdialog.h \
    $$PWD/promanage.h \
    $$PWD/costomerregisterinfodialog.h \
    $$PWD/customerwindget.h \
    $$PWD/romminfo.h \
    $$PWD/modiftvenueprice.h \
    $$PWD/checkcutomdialog.h \
    $$PWD/logblogdialog.h \
    $$PWD/modifypwddialog.h \
    $$PWD/venuepicdialog.h \
    $$PWD/backupdatanasedialog.h \
    $$PWD/checkoutdialog.h \
    out.h

FORMS    += widget.ui \
    $$PWD/../app/frmmessagebox.ui \
    $$PWD/logindialog.ui \
    $$PWD/registerdialog.ui \
    $$PWD/promanage.ui \
    $$PWD/costomerregisterinfodialog.ui \
    $$PWD/customerwindget.ui \
    $$PWD/romminfo.ui \
    $$PWD/modiftvenueprice.ui \
    $$PWD/checkcutomdialog.ui \
    $$PWD/logblogdialog.ui \
    $$PWD/modifypwddialog.ui \
    $$PWD/venuepicdialog.ui \
    $$PWD/backupdatanasedialog.ui \
    $$PWD/checkoutdialog.ui \
    out.ui

DES_FILE    =$$PWD/../tempFiles
MOC_DIR =$${DES_FILE}/moc
RCC_DIR =$${DES_FILE}/rcc
UI_DIR =$${DES_FILE}/ui
OBJECTS_DIR =$${DES_FILE}/obj
DESTDIR = $$PWD/../bin

win32:RC_FILE=main.rc

RESOURCES += \
    image.qrc

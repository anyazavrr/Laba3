/****************************************************************************
** Meta object code from reading C++ file 'delwindow.h'
**
** Created: Sun 16. Dec 13:16:42 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../delwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'delwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_delwindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,
      29,   10,   10,   10, 0x08,
      50,   10,   10,   10, 0x08,
      70,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_delwindow[] = {
    "delwindow\0\0on_back_clicked()\0"
    "on_forward_clicked()\0on_ok_but_clicked()\0"
    "on_cancel_but_clicked()\0"
};

const QMetaObject delwindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_delwindow,
      qt_meta_data_delwindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &delwindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *delwindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *delwindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_delwindow))
        return static_cast<void*>(const_cast< delwindow*>(this));
    return QDialog::qt_metacast(_clname);
}

int delwindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_back_clicked(); break;
        case 1: on_forward_clicked(); break;
        case 2: on_ok_but_clicked(); break;
        case 3: on_cancel_but_clicked(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

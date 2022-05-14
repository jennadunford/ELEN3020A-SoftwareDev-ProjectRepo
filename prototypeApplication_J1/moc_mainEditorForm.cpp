/****************************************************************************
** Meta object code from reading C++ file 'mainEditorForm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainEditorForm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainEditorForm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mainEditorForm_t {
    QByteArrayData data[9];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mainEditorForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mainEditorForm_t qt_meta_stringdata_mainEditorForm = {
    {
QT_MOC_LITERAL(0, 0, 14), // "mainEditorForm"
QT_MOC_LITERAL(1, 15, 15), // "generateCompare"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 17), // "EnergyConverCheck"
QT_MOC_LITERAL(4, 50, 18), // "EnergyConsumpCheck"
QT_MOC_LITERAL(5, 69, 10), // "priceCheck"
QT_MOC_LITERAL(6, 80, 14), // "distanceSelect"
QT_MOC_LITERAL(7, 95, 11), // "speedSelect"
QT_MOC_LITERAL(8, 107, 15) // "transportSelect"

    },
    "mainEditorForm\0generateCompare\0\0"
    "EnergyConverCheck\0EnergyConsumpCheck\0"
    "priceCheck\0distanceSelect\0speedSelect\0"
    "transportSelect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mainEditorForm[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void mainEditorForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mainEditorForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->generateCompare(); break;
        case 1: _t->EnergyConverCheck(); break;
        case 2: _t->EnergyConsumpCheck(); break;
        case 3: _t->priceCheck(); break;
        case 4: _t->distanceSelect(); break;
        case 5: _t->speedSelect(); break;
        case 6: _t->transportSelect(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject mainEditorForm::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_mainEditorForm.data,
    qt_meta_data_mainEditorForm,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mainEditorForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mainEditorForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mainEditorForm.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int mainEditorForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

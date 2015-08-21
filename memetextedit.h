#ifndef MEMETEXTEDIT_H
#define MEMETEXTEDIT_H

#include <QTextEdit>
#include <QMimeData>

class MemeTextEdit : public QTextEdit
{
public:
    MemeTextEdit(QWidget* parent):QTextEdit(parent) {}
    virtual void insertFromMimeData(const QMimeData *source);
//    QMimeData *createMimeDataFromSelection() const {}
//    bool canInsertFromMimeData(const QMimeData *source) const {}
};

#endif // MEMETEXTEDIT_H

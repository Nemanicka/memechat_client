#include "memetextedit.h"

void MemeTextEdit::insertFromMimeData(const QMimeData *source)
{
    if(source->hasText())
    {
        QString text = source->text();
        if(source->hasUrls())
        {
            setTextColor(QColor(100,100,5,100));
            qDebug("hasUrl!");
            this->insertHtml("<a href="+text+">"+text+"</a>");
        }
        else
        {
            this->append(text);
        }
    }
}


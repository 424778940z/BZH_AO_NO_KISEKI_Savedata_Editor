#ifndef BZH_ANK_SE_CONFIG_RW_H
#define BZH_ANK_SE_CONFIG_RW_H

#include "mainwindow.h"

#include <QFile>
#include <QTextStream>

QList<QString> savedata_text_read(QString rw_file_path)
{
    QFile rw_file;
    rw_file.setFileName(rw_file_path);
    rw_file.open(rw_file.ReadOnly);

    QTextStream rw_file_stream(&rw_file);
    rw_file_stream.setCodec("UTF-8");

    QList<QString> text_string;

    for(int i = 0;!(rw_file_stream.atEnd());i++)
    {
        text_string.append(rw_file_stream.readLine(0));
    }

    rw_file.close();
    return text_string;
}

void savedata_text_write(QString rw_file_path, QList<QString> text_string)
{
    QFile rw_file;
    rw_file.setFileName(rw_file_path);
    rw_file.open(rw_file.WriteOnly);

    QTextStream rw_file_stream(&rw_file);
    rw_file_stream.setCodec("UTF-8");

    for(int i = 0;i < text_string.size();i++)
    {
        rw_file_stream << text_string.at(i) << endl;
    }

    rw_file_stream.flush();
    rw_file.close();
}

#endif // BZH_ANK_SE_CONFIG_RW_H

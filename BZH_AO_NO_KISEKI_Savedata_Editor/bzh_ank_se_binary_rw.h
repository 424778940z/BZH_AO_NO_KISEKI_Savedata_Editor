#ifndef BZH_ANK_SE_BINARY_RW_H
#define BZH_ANK_SE_BINARY_RW_H

#include "mainwindow.h"

#include <QFile>
#include <QBitArray>

quint64 savedata_binary_read_quint64(QString rw_file_path, qint64 pos)
{
    QFile rw_file;
    rw_file.setFileName(rw_file_path);
    rw_file.open(rw_file.ReadOnly);
    rw_file.seek(pos);

    QDataStream rw_file_stream(&rw_file);
    rw_file_stream.setVersion(rw_file_stream.Qt_5_1);
    rw_file_stream.setByteOrder(rw_file_stream.LittleEndian);
    quint64 data_u64;
    rw_file_stream >> data_u64;

    rw_file.close();
    return data_u64;
}

quint32 savedata_binary_read_quint32(QString rw_file_path,qint64 pos)
{
    QFile rw_file;
    rw_file.setFileName(rw_file_path);
    rw_file.open(rw_file.ReadOnly);
    rw_file.seek(pos);

    QDataStream rw_file_stream(&rw_file);
    rw_file_stream.setVersion(rw_file_stream.Qt_5_1);
    rw_file_stream.setByteOrder(rw_file_stream.LittleEndian);
    quint32 data_u32;
    rw_file_stream >> data_u32;

    rw_file.close();
    return data_u32;
}

quint16 savedata_binary_read_quint16(QString rw_file_path,qint64 pos)
{
    QFile rw_file;
    rw_file.setFileName(rw_file_path);
    rw_file.open(rw_file.ReadOnly);
    rw_file.seek(pos);

    QDataStream rw_file_stream(&rw_file);
    rw_file_stream.setVersion(rw_file_stream.Qt_5_1);
    rw_file_stream.setByteOrder(rw_file_stream.LittleEndian);
    quint16 data_u16;
    rw_file_stream >> data_u16;

    rw_file.close();
    return data_u16;
}

quint8 savedata_binary_read_quint8(QString rw_file_path,qint64 pos)
{
    QFile rw_file;
    rw_file.setFileName(rw_file_path);
    rw_file.open(rw_file.ReadOnly);
    rw_file.seek(pos);

    QDataStream rw_file_stream(&rw_file);
    rw_file_stream.setVersion(rw_file_stream.Qt_5_1);
    rw_file_stream.setByteOrder(rw_file_stream.LittleEndian);
    quint8 data_u8;
    rw_file_stream >> data_u8;

    rw_file.close();
    return data_u8;
}


void savedata_binary_write_quint64(QString rw_file_path,qint64 pos,quint64 data_u64)
{
    QFile rw_file;
    rw_file.setFileName(rw_file_path);
    rw_file.open(rw_file.ReadWrite);

    rw_file.seek(pos);

    QDataStream rw_file_stream(&rw_file);
    rw_file_stream.setVersion(rw_file_stream.Qt_5_1);
    rw_file_stream.setByteOrder(rw_file_stream.LittleEndian);
    rw_file_stream << data_u64;

    rw_file.close();
}

void savedata_binary_write_quint32(QString rw_file_path,qint64 pos,quint32 data_u32)
{
    QFile rw_file;
    rw_file.setFileName(rw_file_path);
    rw_file.open(rw_file.ReadWrite);
    rw_file.seek(pos);

    QDataStream rw_file_stream(&rw_file);
    rw_file_stream.setVersion(rw_file_stream.Qt_5_1);
    rw_file_stream.setByteOrder(rw_file_stream.LittleEndian);
    rw_file_stream << data_u32;

    rw_file.close();
}

void savedata_binary_write_quint16(QString rw_file_path,qint64 pos,quint16 data_u16)
{
    QFile rw_file;
    rw_file.setFileName(rw_file_path);
    rw_file.open(rw_file.ReadWrite);
    rw_file.seek(pos);

    QDataStream rw_file_stream(&rw_file);
    rw_file_stream.setVersion(rw_file_stream.Qt_5_1);
    rw_file_stream.setByteOrder(rw_file_stream.LittleEndian);
    rw_file_stream << data_u16;

    rw_file.close();
}

void savedata_binary_write_quint8(QString rw_file_path,qint64 pos,quint8 data_u8)
{
    QFile rw_file;
    rw_file.setFileName(rw_file_path);
    rw_file.open(rw_file.ReadWrite);
    rw_file.seek(pos);

    QDataStream rw_file_stream(&rw_file);
    rw_file_stream.setVersion(rw_file_stream.Qt_5_1);
    rw_file_stream.setByteOrder(rw_file_stream.LittleEndian);
    rw_file_stream << data_u8;

    rw_file.close();
}

/*****************************************************************************************/

QBitArray savedata_binary_read_quint8_to_QBitArray(QString rw_file_path, qint64 pos)
{
    quint8 data_u8 = savedata_binary_read_quint8(rw_file_path,pos);

    QBitArray data;
    data.resize(8);

    for (int i = 0;i < 8;i++)
    {
        if (data_u8 & (0x80 >> i))//高位在前,低位在前改为(0x01<<i)
        {
            data.setBit(i);
        }
        else
        {
            data.clearBit(i);
        }
    }

    return data;
}

void savedata_binary_write_quint8_from_QBitArray(QString rw_file_path, qint64 pos,QBitArray data)
{
    quint8 data_u8 = 0x00;

    for (int i = 0;i < 8;i++)
    {
        if (data.at(i))//高位在前,低位在前改为(0x01<<i)
        {
            data_u8 |= (0x80 >> i);
        }
        else
        {
            data_u8 &= ~(0x80 >> i);
        }
    }

    savedata_binary_write_quint8(rw_file_path,pos,data_u8);
}

#endif // BZH_ANK_SE_BINARY_RW_H

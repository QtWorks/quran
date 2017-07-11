#include "PageModel.h"
#include <QDebug>
#include <QSqlError>

PageModel::PageModel(QObject *parent)
{

}

PageModel::PageModel(QSqlDatabase *db, QObject *parent) : SqlQueryModel(parent)
{
    this->db = db;
    page = -1;
}

void PageModel::getAya(const int sura1, const int aya1)
{
    setQuery(QString("SELECT quran_text.*, id_indonesian.text AS translation FROM quran_text JOIN id_indonesian ON quran_text.id = id_indonesian.id WHERE quran_text.sura = %1 AND quran_text.aya = %2").arg(sura1).arg(aya1), *db);
}

void PageModel::getAyas(const int sura1, const int aya1)
{
    setQuery(QString("SELECT quran_text.*, id_indonesian.text AS translation FROM quran_text JOIN id_indonesian ON quran_text.id = id_indonesian.id WHERE quran_text.id >= (SELECT id FROM quran_text WHERE sura = %1 AND aya = %2)").arg(sura1).arg(aya1), *db);
}

void PageModel::getAyas(const int sura1, const int aya1, const int sura2, const int aya2)
{
    setQuery(QString("SELECT quran_text.*, id_indonesian.text AS translation FROM quran_text JOIN id_indonesian ON quran_text.id = id_indonesian.id WHERE quran_text.id >= (SELECT id FROM quran_text WHERE sura = %1 AND aya = %2) AND quran_text.id < (SELECT id FROM quran_text WHERE sura = %3 AND aya = %4)").arg(sura1).arg(aya1).arg(sura2).arg(aya2), *db);
}

void PageModel::setPage(int value)
{
    page = value;
}

int PageModel::getPage() const
{
    return page;
}

void PageModel::setJuz(const QVariantMap &value)
{
    juz = value;
}

void PageModel::setSura(const QVariantMap &value)
{
    sura = value;
}

QString PageModel::getSuraEname() const
{
    return sura.value("ename").toString();
}

QString PageModel::getSuraName() const
{
    return sura.value("name").toString();
}

int PageModel::getSuraId() const
{
    return sura.value("id").toInt();
}

QString PageModel::getJuzName() const
{
    return juz.value("name").toString();
}

int PageModel::getJuzId() const
{
    return juz.value("id").toInt();
}

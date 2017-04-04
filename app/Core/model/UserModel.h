#ifndef USERMODEL_H
#define USERMODEL_H
#include <QtCore>
#include <QColor>
#include "user.h"

class UserModel : public QAbstractListModel
{
    Q_OBJECT
public:
    UserModel(QObject * parent = 0);
    int rowCount(const QModelIndex &parent) const;
    int columnCount(const QModelIndex &parent) const;

    QVariant data(const QModelIndex &index, int role) const;

public Q_SLOTS:
    void ask();
    void receive();




private:
    QList<User> mDatas;
};

#endif // USERMODEL_H

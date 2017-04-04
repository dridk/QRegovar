#include "UserModel.h"

UserModel::UserModel(QObject *parent)
    :QAbstractListModel(parent)
{




}

int UserModel::rowCount(const QModelIndex &parent) const
{
    return mDatas.size();
}

int UserModel::columnCount(const QModelIndex &parent) const
{
    return 2;
}

QVariant UserModel::data(const QModelIndex &index, int role) const
{

    if (!index.isValid())
        return QVariant();

    if ( role == Qt::DisplayRole)
    {

        if ( index.column() == 0)
            return mDatas[index.row()].firstname();

        if ( index.column() == 1)
            return mDatas[index.row()].lastname();

    }

    if ( role == Qt::BackgroundRole)
    {
        if (  mDatas[index.row()].firstname() == "olivier")
            return QColor("green");
    }


    return QVariant();

}

void UserModel::ask()
{

    qDebug()<<"salut";
    // Create ta requete
    // connect le succes de la requete aux receive

    receive();

}

void UserModel::receive()
{

    beginResetModel();

    mDatas.clear();
    mDatas.append(User(34,"sacha","schutz"));
    mDatas.append(User(31,"olivier","gueudelot"));
    mDatas.append(User(34,"sacha","schutz"));
    mDatas.append(User(31,"olivier","gueudelot"));
    mDatas.append(User(34,"sacha","schutz"));
    mDatas.append(User(31,"olivier","gueudelot"));
    mDatas.append(User(34,"sacha","schutz"));
    mDatas.append(User(31,"olivier","gueudelot"));

    endResetModel();




}

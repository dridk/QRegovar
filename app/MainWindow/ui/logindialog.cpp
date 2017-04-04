#include "logindialog.h"

LoginDialog::LoginDialog(QWidget *parent)
    :QDialog(parent)
{

    mUsername  = new QComboBox;
    mPassword  = new QLineEdit();
    mBoxButton = new QDialogButtonBox();
    mPassword->setEchoMode(QLineEdit::Password);
    QGroupBox * loginBox = new QGroupBox;

    QStringList list;
    list<<"sacha"<<"boby"<<"olivier";
    QStringListModel * userModel = new QStringListModel;
    userModel->setStringList(list);

    mUsername->setModel(userModel);
    mUsername->setEditable(true);


    mBoxButton->addButton(tr("Login"), QDialogButtonBox::AcceptRole);
    mBoxButton->addButton(("Cancel"), QDialogButtonBox::RejectRole);

    QVBoxLayout * mLayout = new QVBoxLayout;

    QFormLayout * fLayout = new QFormLayout;
    fLayout->addRow(tr("Username"), mUsername);
    fLayout->addRow(tr("Password"), mPassword);


    loginBox->setLayout(fLayout);


    mLayout->addWidget(loginBox);
    mLayout->addStretch();
    mLayout->addWidget(mBoxButton);

    setLayout(mLayout);

    setWindowTitle("Login");

    connect(mBoxButton,SIGNAL(accepted()),this,SLOT(accept()));
    connect(mBoxButton,SIGNAL(rejected()),this,SLOT(reject()));

}

#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H
#include <QtWidgets>

class LoginDialog : public QDialog
{
public:
    LoginDialog(QWidget * parent = 0);

private:
    QComboBox * mUsername;
    QLineEdit * mPassword;
    QDialogButtonBox * mBoxButton;

};

#endif // LOGINDIALOG_H

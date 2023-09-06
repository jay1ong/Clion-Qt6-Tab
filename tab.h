//
// Created by gxzc on 2023/9/6.
//

#ifndef QTTAB_TAB_H
#define QTTAB_TAB_H


class tab {

};

#include <QDialog>

QT_BEGIN_NAMESPACE
class QDialogButtonBox;

class QFileInfo;

class QTabWidget;

QT_END_NAMESPACE

//! [0]
class GeneralTab : public QWidget {
Q_OBJECT

public:
    explicit GeneralTab(const QFileInfo &fileInfo, QWidget *parent = nullptr);
};
//! [0]


//! [1]
class PermissionsTab : public QWidget {
Q_OBJECT

public:
    explicit PermissionsTab(const QFileInfo &fileInfo, QWidget *parent = nullptr);
};
//! [1]


//! [2]
class ApplicationsTab : public QWidget {
Q_OBJECT

public:
    explicit ApplicationsTab(const QFileInfo &fileInfo, QWidget *parent = nullptr);
};
//! [2]


//! [3]

class Tab : public QWidget {
Q_OBJECT

public:
    explicit Tab(const QString &fileName, QWidget *parent = nullptr);

private:
    QTabWidget *tabWidget;
    QDialogButtonBox *buttonBox;
};

//! [3]


#endif //QTTAB_TAB_H

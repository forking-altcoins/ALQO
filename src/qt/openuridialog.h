// Copyright (c) 2019 The PIVX developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ALQO_QT_OPENURIDIALOG_H
#define ALQO_QT_OPENURIDIALOG_H

#include <QDialog>

namespace Ui
{
class OpenURIDialog;
}

class OpenURIDialog : public QDialog
{
    Q_OBJECT

public:
    explicit OpenURIDialog(QWidget* parent);
    ~OpenURIDialog();

    QString getURI();
    void showEvent(QShowEvent *event) override;

protected slots:
    void accept() override;

private slots:
    void on_selectFileButton_clicked();

private:
    Ui::OpenURIDialog* ui;
};

#endif // ALQO_QT_OPENURIDIALOG_H

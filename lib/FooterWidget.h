/*********************************************************************
* Copyright (C) 2020 Miguel Revilla Rodríguez
*                    and the OJudge Platform project contributors
*
* This file is part of the OJudge Platform
*
* Read the LICENSE file for information on license terms
*********************************************************************/

#ifndef FOOTERWIDGET_H
#define FOOTERWIDGET_H

#include <Wt/WContainerWidget.h>
#include <Wt/Auth/Login.h>

class SettingStore;

class FooterWidget : public Wt::WContainerWidget {
public:
FooterWidget(SettingStore *settingStore);
void login(Wt::Auth::Login& login);
void logout();

private:
SettingStore *settingStore_;

};

#endif // FOOTERWIDGET_H

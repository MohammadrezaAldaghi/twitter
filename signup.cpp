#include "signup.h"
#include "ui_signup.h"


SignUp::SignUp(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SignUp)
{
    ui->setupUi(this);
}

SignUp::~SignUp()
{
    delete ui;
}

void SignUp::on_RegisterButton_clicked()
{
    User* currnetUser = new User();
    currnetUser->SetUsername(ui->UsernameLineEdit->text());
    currnetUser->SetBirthday(ui->BirthdayLineEdit->text());
    currnetUser->SetPassword(ui->PasswordLineEdit->text());
    currnetUser->SetPhoneNember(ui->PhoneNemberLineEdit->text());
    currnetUser->SetContry(ui->CountryLineEdit->text());
    currnetUser->SetName(ui->NameLineEdit->text());
    currnetUser->SetFollowers();
    currnetUser->SetFollowings();
    currnetUser->SetUserAttribute();


}


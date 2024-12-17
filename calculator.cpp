#include "calculator.h"
#include "./ui_calculator.h"
#include <string>
#include <cmath>
#include <QtGui>
#include <QInputDialog>
#include <iostream>
#include <QDebug>

using namespace std;

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
}

Calculator::~Calculator()
{
    delete ui;
}
void Calculator::on_zero_button_clicked()
{
    std::string oldText = ui->result_label->text().toStdString();
    if (!(oldText.length() > 30)) {
        math_sums += "0";
        oldText += "0";
        ui->result_label->setText(QString::fromStdString(oldText));
    }

}


void Calculator::on_one_button_clicked()
{
    std::string oldText = ui->result_label->text().toStdString();
    if (!(oldText.length() > 30)) {
        math_sums += "1";
        oldText += "1";
        ui->result_label->setText(QString::fromStdString(oldText));
    }
}


void Calculator::on_two_button_clicked()
{
    std::string oldText = ui->result_label->text().toStdString();
    if (!(oldText.length() > 30)) {
        math_sums += "2";
        oldText += "2";
        ui->result_label->setText(QString::fromStdString(oldText));
    }
}


void Calculator::on_three_button_clicked()
{
    std::string oldText = ui->result_label->text().toStdString();
    if (!(oldText.length() > 30)) {
        math_sums += "3";
        oldText += "3";
        ui->result_label->setText(QString::fromStdString(oldText));
    }
}


void Calculator::on_four_button_clicked()
{
    std::string oldText = ui->result_label->text().toStdString();
    if (!(oldText.length() > 30)) {
        math_sums += "4";
        oldText += "4";
        ui->result_label->setText(QString::fromStdString(oldText));
    }
}


void Calculator::on_five_button_clicked()
{
    std::string oldText = ui->result_label->text().toStdString();
    if (!(oldText.length() > 30)) {
        math_sums += "5";
        oldText += "5";
        ui->result_label->setText(QString::fromStdString(oldText));
    }
}


void Calculator::on_six_button_clicked()
{
    std::string oldText = ui->result_label->text().toStdString();
    if (!(oldText.length() > 30)) {
        math_sums += "6";
        oldText += "6";
        ui->result_label->setText(QString::fromStdString(oldText));
    }
}


void Calculator::on_seven_button_clicked()
{
    std::string oldText = ui->result_label->text().toStdString();
    if (!(oldText.length() > 30)) {
        math_sums += "7";
        oldText += "7";
        ui->result_label->setText(QString::fromStdString(oldText));
    }
}


void Calculator::on_eight_button_clicked()
{
    std::string oldText = ui->result_label->text().toStdString();
    if (!(oldText.length() > 30)) {
        math_sums += "8";
        oldText += "8";
        ui->result_label->setText(QString::fromStdString(oldText));
    }
}


void Calculator::on_nine_button_clicked()
{
    std::string oldText = ui->result_label->text().toStdString();
    if (!(oldText.length() > 30)) {
        math_sums += "9";
        oldText += "9";
        ui->result_label->setText(QString::fromStdString(oldText));
    }
}


void Calculator::on_plus_button_clicked()
{
    std::string oldText = ui->result_label->text().toStdString();
    if (!(oldText.length() > 30)) {
        math_sums += "+";
        oldText += "+";
        ui->result_label->setText(QString::fromStdString(oldText));
    }
}


void Calculator::on_minus_button_clicked()
{
    std::string oldText = ui->result_label->text().toStdString();
    if (!(oldText.length() > 30)) {
        math_sums += "_";
        oldText += "-";
        ui->result_label->setText(QString::fromStdString(oldText));
    }
}


void Calculator::on_multpl_button_clicked()
{
    std::string oldText = ui->result_label->text().toStdString();
    if (!(oldText.length() > 30)) {
        math_sums += "*";
        oldText += "×";
        ui->result_label->setText(QString::fromStdString(oldText));
    }
}


void Calculator::on_divide_button_clicked()
{
    std::string oldText = ui->result_label->text().toStdString();
    if (!(oldText.length() > 30)) {
        math_sums += "/";
        oldText += "÷";
        ui->result_label->setText(QString::fromStdString(oldText));
    }
}


void Calculator::on_sqroot_button_clicked()
{
    std::string oldText = ui->result_label->text().toStdString();
    if (!(oldText.length() > 30)) {
        math_sums += "sqrt";
        oldText += "√";
        ui->result_label->setText(QString::fromStdString(oldText));
    }
}


void Calculator::on_cos_button_clicked()
{
    std::string oldText = ui->result_label->text().toStdString();
    if (!(oldText.length() > 30)) {
        math_sums += "cos";
        oldText += "cos";
        ui->result_label->setText(QString::fromStdString(oldText));
    }
}

/*
void Calculator::on_root_button_clicked()
{

    bool ok;
    QString text = QInputDialog::getText(this,
                                 QString::fromUtf8("Введите текст"),
                                 QString::fromUtf8("Ваш текст:"),
                                 QLineEdit::Normal,
                                 QDir::home().dirName(), &ok);
    if (ok && !text.isEmpty()){
        std::string oldText = ui->result_label->text().toStdString();
        if (!(oldText.length() > 30)) {
            if (text.toStdString() == "0") {
                math_sums = math_sums + "root[" + text.toStdString() + "]";
                oldText = oldText + "⁰√";
                ui->result_label->setText(QString::fromStdString(oldText));
            }
            if (text.toStdString() == "1") {
                math_sums = math_sums + "root[" + text.toStdString() + "]";
                oldText = oldText + "¹√";
                ui->result_label->setText(QString::fromStdString(oldText));
            }
            if (text.toStdString() == "2") {
                math_sums = math_sums + "root[" + text.toStdString() + "]";
                oldText = oldText + "²√";
                ui->result_label->setText(QString::fromStdString(oldText));
            }
            if (text.toStdString() == "3") {
                math_sums = math_sums + "root[" + text.toStdString() + "]";
                oldText = oldText + "³√";
                ui->result_label->setText(QString::fromStdString(oldText));
            }
            if (text.toStdString() == "4") {
                math_sums = math_sums + "root[" + text.toStdString() + "]";
                oldText = oldText + "⁴√";
                ui->result_label->setText(QString::fromStdString(oldText));
            }
            if (text.toStdString() == "5") {
                math_sums = math_sums + "root[" + text.toStdString() + "]";
                oldText = oldText + "⁵√";
                ui->result_label->setText(QString::fromStdString(oldText));
            }
            if (text.toStdString() == "6") {
                math_sums = math_sums + "root[" + text.toStdString() + "]";
                oldText = oldText + "⁶√";
                ui->result_label->setText(QString::fromStdString(oldText));
            }
            if (text.toStdString() == "7") {
                math_sums = math_sums + "root[" + text.toStdString() + "]";
                oldText = oldText + "⁷√";
                ui->result_label->setText(QString::fromStdString(oldText));
            }
            if (text.toStdString() == "8") {
                math_sums = math_sums + "root[" + text.toStdString() + "]";
                oldText = oldText + "⁸√";
                ui->result_label->setText(QString::fromStdString(oldText));
            }
            if (text.toStdString() == "9") {
                math_sums = math_sums + "root[" + text.toStdString() + "]";
                oldText = oldText + "⁹√";
                ui->result_label->setText(QString::fromStdString(oldText));
            }

        }
    }

}
*/
void Calculator::on_root_button_clicked() {
    std::string oldText = ui->result_label->text().toStdString();
    if (!(oldText.length() > 30)) {
        math_sums += "$";
        oldText += "√";
        ui->result_label->setText(QString::fromStdString(oldText));
    }
}

void Calculator::on_e_button_clicked()
{
    std::string oldText = ui->result_label->text().toStdString();
    if (!(oldText.length() > 30)) {
        math_sums += "e";
        oldText += "e";
        ui->result_label->setText(QString::fromStdString(oldText));
    }
}


void Calculator::on_bracketL_button_clicked()
{
    std::string oldText = ui->result_label->text().toStdString();
    if (!(oldText.length() > 30)) {
        math_sums += "(";
        oldText += "(";
        ui->result_label->setText(QString::fromStdString(oldText));
    }
}


void Calculator::on_bracketR_button_clicked()
{
    std::string oldText = ui->result_label->text().toStdString();
    if (!(oldText.length() > 30)) {
        math_sums += ")";
        oldText += ")";
        ui->result_label->setText(QString::fromStdString(oldText));
    }
}


void Calculator::on_remove_button_clicked()
{
    std::string oldText = ui->result_label->text().toStdString();
    string sMult = "×"; //2 //1 // *
    string sDiv = "÷"; //2 //1  // /
    string sRoot = "√"; //3 //4 //sqrt
    string sCos = "cos"; //3 //3
    string sR0 = "⁰√"; //6 //7 //root(x)
    string sR1 = "¹√"; //5 //7 //root(x)
    string sR2 = "²√"; //5 //7 //root(x)
    string sR3 = "³√"; //5 //7 //root(x)
    string sR4 = "⁴√"; //6 //7 //root(x)
    string sR5 = "⁵√"; //6 //7 //root(x)
    string sR6 = "⁶√"; //6 //7 //root(x)
    string sR7 = "⁷√"; //6 //7 //root(x)
    string sR8 = "⁸√"; //6 //7 //root(x)
    string sR9 = "⁹√"; //6 //7 //root(x)
    string sLong2;
    string sLong3;
    string sLong5;
    string sLong6;

    if (oldText.size() >= 6) {
        sLong6 = oldText.substr(oldText.size()-6, 6);
        sLong5 = oldText.substr(oldText.size()-5, 5);
        sLong3 = oldText.substr(oldText.size()-3, 3);
        sLong2 = oldText.substr(oldText.size()-2, 2);
    }
    else if (oldText.size() >= 5) {
        sLong5 = oldText.substr(oldText.size()-5, 5);
        sLong3 = oldText.substr(oldText.size()-3, 3);
        sLong2 = oldText.substr(oldText.size()-2, 2);
    }
    else if (oldText.size() >= 3) {
        sLong3 = oldText.substr(oldText.size()-3, 3);
        sLong2 = oldText.substr(oldText.size()-2, 2);
    }
    else if (oldText.size() >= 2) {
        sLong2 = oldText.substr(oldText.size()-2, 2);
    } else {
        if (!oldText.empty()) {
            oldText.pop_back();
        }
        if (!math_sums.empty()) {
            math_sums.pop_back();
        }
        ui->result_label->setText(QString::fromStdString(oldText));
        return;
    }

    if (!oldText.empty() && !math_sums.empty()) {

        if (sMult == sLong2 || sDiv == sLong2) { //2 //1
            oldText.pop_back();
        }
        else if (sR1 == sLong5 || sR2 == sLong5 || sR3 == sLong5) { //5 //7 //root(x)
            oldText.pop_back(); //1
            oldText.pop_back(); //2
            oldText.pop_back(); //3
            oldText.pop_back(); //4
            math_sums.pop_back(); //1
            math_sums.pop_back(); //2
            math_sums.pop_back(); //3
            math_sums.pop_back(); //4
            math_sums.pop_back(); //5
            math_sums.pop_back(); //6
        }
        else if (sR0 == sLong6 ||
                   sR4 == sLong6 || sR5 == sLong6 || sR6 == sLong6 || sR7 == sLong6 || sR8 == sLong6 || sR9 == sLong6) { //6 //7 //root(x)
            oldText.pop_back(); //1
            oldText.pop_back(); //2
            oldText.pop_back(); //3
            oldText.pop_back(); //4
            oldText.pop_back(); //5
            math_sums.pop_back(); //1
            math_sums.pop_back(); //2
            math_sums.pop_back(); //3
            math_sums.pop_back(); //4
            math_sums.pop_back(); //5
            math_sums.pop_back(); //6
        }
        else if (sRoot == sLong3) { //3 //4
            oldText.pop_back();
            oldText.pop_back();
            math_sums.pop_back();
            math_sums.pop_back();
            math_sums.pop_back();
        }
        else if(sCos == sLong3) { //3 //3
            oldText.pop_back();
            oldText.pop_back();
            math_sums.pop_back();
            math_sums.pop_back();
        }

        oldText.pop_back();
        math_sums.pop_back();
    } else {
        return;
    }
    ui->result_label->setText(QString::fromStdString(oldText));
}


void Calculator::on_equal_button_clicked()
{
    string sum = math_sums;
    math_sums = "";
    ui->result_label->setText(QString::fromStdString(""));
    while (true) {
        if ((!(sum.find("(") == std::string::npos)) && (!(sum.find(")") == std::string::npos))) {
            if (sum.find(")", sum.find("(")+1) < sum.find("(", sum.find("(")+1)) {
                qInfo() << QString::fromStdString("celie skobki: " + sum.substr(sum.find("(")+1, sum.find(")")-1-sum.find("(")));
                sum = sum.substr(0, sum.find("(")) + calculate(sum.substr(sum.find("(")+1, sum.find(")")-1-sum.find("("))) + sum.substr(sum.find(")")+1);
                qInfo() << QString::fromStdString("sum: " + sum);
            } else if (sum.find("(", sum.find("(")+1) < sum.find(")", sum.find("(")+1)) {
                qInfo() << QString::fromStdString("necelie skobki: " + sum.substr( sum.find("(" ,(sum.find("(")+1))+1,sum.find(")")-1-sum.find("(" ,(sum.find("(")+1))) );
                sum = sum.substr(0, sum.find("(" ,sum.find("(")+1)) + calculate( sum.substr(sum.find("(" ,(sum.find("(")+1))+1,sum.find(")")-1-sum.find("(" ,(sum.find("(")+1))) ) + sum.substr(sum.find(")")+1);
            }
        } else if (!(sum.find("cos") == std::string::npos)) {
            int len[8];
            len[0] = sum.find("+", sum.find("cos")+3);
            len[1] = sum.find("_", sum.find("cos")+3);
            len[2] = sum.find("/", sum.find("cos")+3);
            len[3] = sum.find("*", sum.find("cos")+3);
            len[4] = sum.find("sqrt", sum.find("cos")+3);
            len[5] = sum.find("$", sum.find("cos")+3);
            len[6] = sum.find("cos", sum.find("cos")+3);
            len[7] = sum.find("e", sum.find("cos")+3);

            int min = sum.length();
            for (int i=0; i < 8; i++) {
                if (len[i] < min && len[i] != -1) {  //<---fix is here
                    min = len[i];
                }
            }
            if (min == sum.length()) {
                min = -1;
            }
            qInfo() << QString::fromStdString("min: " + to_string(min));
            if (min == std::string::npos || min == -1) {
                string sCos = sum.substr(sum.find("cos")+3);

                if (sCos.length() == 0) {
                    ui->result_label->setText(QString::fromStdString("Error"));
                    return;
                }

                qInfo() << QString::fromStdString("cos: " + sCos);
                float fCos = cos(atoi(sCos));
                sum = sum.substr(0, sum.find("cos"))+ to_string(fCos);
                ui->result_label->setText(QString::fromStdString(sum));
            } else {
                string sCos = sum.substr(sum.find("cos")+3, min-3-sum.find("cos"));

                if (sCos.length() == 0) {
                    ui->result_label->setText(QString::fromStdString("Error"));
                    return;
                }

                qInfo() << QString::fromStdString("cos: " + sCos);
                float fCos = cos(atoi(sCos));
                sum = sum.substr(0, sum.find("cos"))+ to_string(fCos) + sum.substr(min);
                ui->result_label->setText(QString::fromStdString(sum));
            }

        } else if (!(sum.find("e") == std::string::npos)) {
            int len[8];
            len[0] = sum.find("+", sum.find("e")+1);
            len[1] = sum.find("_", sum.find("e")+1);
            len[2] = sum.find("/", sum.find("e")+1);
            len[3] = sum.find("*", sum.find("e")+1);
            len[4] = sum.find("sqrt", sum.find("e")+1);
            len[5] = sum.find("$", sum.find("e")+1);
            len[6] = sum.find("cos", sum.find("e")+1);
            len[7] = sum.find("e", sum.find("e")+1);

            int min = sum.length();
            for (int i=0; i < 8; i++) {
                if (len[i] < min && len[i] != -1) {  //<---fix is here
                    min = len[i];
                }
            }
            if (min == sum.length()) {
                min = -1;
            }
            qInfo() << QString::fromStdString("min: " + to_string(min));
            if (min == std::string::npos || min == -1) {
                string sE = sum.substr(sum.find("e")+1);

                if (sE.length() == 0) {
                    ui->result_label->setText(QString::fromStdString("Error"));
                    return;
                }

                qInfo() << QString::fromStdString("e: " + sE);
                float fE = exp(atoi(sE));
                sum = sum.substr(0, sum.find("e"))+ to_string(fE);
                ui->result_label->setText(QString::fromStdString(sum));
            } else {
                string sE = sum.substr(sum.find("e")+1, min-1-sum.find("e"));

                if (sE.length() == 0) {
                    ui->result_label->setText(QString::fromStdString("Error"));
                    return;
                }

                qInfo() << QString::fromStdString("e: " + sE);
                float fE = exp(atoi(sE));
                sum = sum.substr(0, sum.find("e"))+ to_string(fE) + sum.substr(min);
                ui->result_label->setText(QString::fromStdString(sum));
            }
        } else if (!(sum.find("sqrt") == std::string::npos)) {
            int len[8];
            len[0] = sum.find("+", sum.find("sqrt")+4);
            len[1] = sum.find("_", sum.find("sqrt")+4);
            len[2] = sum.find("/", sum.find("sqrt")+4);
            len[3] = sum.find("*", sum.find("sqrt")+4);
            len[4] = sum.find("sqrt", sum.find("sqrt")+4);
            len[5] = sum.find("$", sum.find("sqrt")+4);
            len[6] = sum.find("cos", sum.find("sqrt")+4);
            len[7] = sum.find("e", sum.find("sqrt")+4);

            int min = sum.length();
            for (int i=0; i < 8; i++) {
                if (len[i] < min && len[i] != -1) {  //<---fix is here
                    min = len[i];
                }
            }
            if (min == sum.length()) {
                min = -1;
            }
            qInfo() << QString::fromStdString("min: " + to_string(min));
            if (min == std::string::npos || min == -1) {
                string sSQRT = sum.substr(sum.find("sqrt")+4);

                if (sSQRT.length() == 0) {
                    ui->result_label->setText(QString::fromStdString("Error"));
                    return;
                }

                qInfo() << QString::fromStdString("SQRT: " + sSQRT);
                float fSQRT = pow(atoi(sSQRT), (1./2));
                sum = sum.substr(0, sum.find("sqrt"))+ to_string(fSQRT);
                ui->result_label->setText(QString::fromStdString(sum));
            } else {
                string sSQRT = sum.substr(sum.find("sqrt")+4, min-4-sum.find("sqrt"));

                if (sSQRT.length() == 0) {
                    ui->result_label->setText(QString::fromStdString("Error"));
                    return;
                }

                qInfo() << QString::fromStdString("SQRT: " + sSQRT);
                float fSQRT = pow(atoi(sSQRT), (1./2));
                sum = sum.substr(0, sum.find("sqrt")) + to_string(fSQRT) + sum.substr(min);
                ui->result_label->setText(QString::fromStdString(sum));
            }
        } else if (!(sum.find("$") == std::string::npos)) {
             sum = defaultActions("$", sum);
        } else if ((!(sum.find("/") == std::string::npos)) || (!(sum.find("*") == std::string::npos))) {
            if ((sum.find("*") == std::string::npos) || (sum.find("/") < sum.find("*"))) {
                sum = defaultActions("/", sum);
            } else if ((sum.find("/") == std::string::npos) || (sum.find("*") < sum.find("/"))) {
                sum = defaultActions("*", sum);
            }
        } else if ((!(sum.find("_") == std::string::npos)) || (!(sum.find("+") == std::string::npos))) {
            if ((sum.find("+") == std::string::npos) || (sum.find("_") < sum.find("+"))) {
                sum = defaultActions("_", sum);
            } else if ((sum.find("_") == std::string::npos) || (sum.find("+") < sum.find("_"))) {
                sum = defaultActions("+", sum);
            }
        } else {return;}
        qInfo() << QString::fromStdString("\n");
    }
}


string Calculator::defaultActions(string action, string sum) {
    int len[8];
    len[0] = sum.find("+", sum.find(action)+1);
    len[1] = sum.find("_", sum.find(action)+1);
    len[2] = sum.find("/", sum.find(action)+1);
    len[3] = sum.find("*", sum.find(action)+1);
    len[4] = sum.find("sqrt", sum.find(action)+1);
    len[5] = sum.find("$", sum.find(action)+1);
    len[6] = sum.find("cos", sum.find(action)+1);
    len[7] = sum.find("e", sum.find(action)+1);

    int min = sum.length();
    for (int i=0; i < 8; i++) {
        if (len[i] < min && len[i] != -1) {  //<---fix is here
            min = len[i];
        }
    }
    if (min == sum.length()) {
        min = -1;
    }
    int lenR[8];
    lenR[0] = sum.rfind("+", sum.find(action)-1);
    lenR[1] = sum.rfind("_", sum.find(action)-1);
    lenR[2] = sum.rfind("/", sum.find(action)-1);
    lenR[3] = sum.rfind("*", sum.find(action)-1);
    lenR[4] = sum.rfind("sqrt", sum.find(action)-1);
    lenR[5] = sum.rfind("$", sum.find(action)-1);
    lenR[6] = sum.rfind("cos", sum.find(action)-1);
    lenR[7] = sum.rfind("e", sum.find(action)-1);

    int minR = -1;
    for (int i=0; i < 8; i++) {
        if (lenR[i] > minR && lenR[i] != -1) {  //<---fix is here
            minR = lenR[i];
        }
    }
    qInfo() << QString::fromStdString("min: " + to_string(min));
    qInfo() << QString::fromStdString("minR: " + to_string(minR));

    if ((min == std::string::npos || min == -1) && minR == -1) { // справа ничего и слева ничего
        string sDiv0 = sum.substr(0, sum.find(action));
        string sDiv1 = sum.substr(sum.find(action)+1);

        if ((sDiv0.length() == 0) || (sDiv1.length() == 0)) {
            ui->result_label->setText(QString::fromStdString("Error"));
            return "Error";
        }
        qInfo() << QString::fromStdString("left operand: " + sDiv0);
        qInfo() << QString::fromStdString("right operand: " + sDiv1);
        float fDiv0 = atoi(sDiv0);
        float fDiv1 = atoi(sDiv1);
        float fDiv;

        if(action=="$"){fDiv = pow(fDiv1, 1./fDiv0);}else if(action == "^"){fDiv = pow(fDiv0, fDiv1);}else if(action == "*"){fDiv = fDiv0*fDiv1;}else if(action == "/"){fDiv = fDiv0/fDiv1;}else if(action == "+"){fDiv = fDiv0+fDiv1;}else{fDiv = fDiv0-fDiv1;}

        if (fDiv == std::numeric_limits<float>::infinity()) {
            ui->result_label->setText(QString::fromStdString("Error"));
            return "Error";
        }

        sum = to_string(fDiv);
        ui->result_label->setText(QString::fromStdString(sum));
    } else if ((min == std::string::npos || min == -1) && minR != -1) { // справа ничего и слева что-то
        string sDiv0 = sum.substr(minR+1, sum.find(action)-1-minR);
        string sDiv1 = sum.substr(sum.find(action)+1);

        if ((sDiv0.length() == 0) || (sDiv1.length() == 0)) {
            ui->result_label->setText(QString::fromStdString("Error"));
            return "Error";
        }

        qInfo() << QString::fromStdString(sDiv0);
        qInfo() << QString::fromStdString(sDiv1);
        float fDiv0 = atoi(sDiv0);
        float fDiv1 = atoi(sDiv1);
        float fDiv;
        if(action=="$"){fDiv = pow(fDiv1, 1./fDiv0);}else if(action == "^"){fDiv = pow(fDiv0, fDiv1);}else if(action == "*"){fDiv = fDiv0*fDiv1;}else if(action == "/"){fDiv = fDiv0/fDiv1;}else if(action == "+"){fDiv = fDiv0+fDiv1;}else{fDiv = fDiv0-fDiv1;}

        if (fDiv == std::numeric_limits<float>::infinity()) {
            ui->result_label->setText(QString::fromStdString("Error"));
            return "Error";
        }

        sum = sum.substr(0, minR+1)+ to_string(fDiv);
        ui->result_label->setText(QString::fromStdString(sum));
    } else if ((!(min == std::string::npos || min == -1)) && minR == -1) { // справа что-то и слева ничего
        string sDiv0 = sum.substr(0, sum.find(action));
        string sDiv1 = sum.substr(sum.find(action)+1, min-1-sum.find(action));

        if ((sDiv0.length() == 0) || (sDiv1.length() == 0)) {
            ui->result_label->setText(QString::fromStdString("Error"));
            return "Error";
        }

        qInfo() << QString::fromStdString(sDiv0);
        qInfo() << QString::fromStdString(sDiv1);
        float fDiv0 = atoi(sDiv0);
        float fDiv1 = atoi(sDiv1);
        float fDiv;
        if(action=="$"){fDiv = pow(fDiv1, 1./fDiv0);}else if(action == "^"){fDiv = pow(fDiv0, fDiv1);}else if(action == "*"){fDiv = fDiv0*fDiv1;}else if(action == "/"){fDiv = fDiv0/fDiv1;}else if(action == "+"){fDiv = fDiv0+fDiv1;}else{fDiv = fDiv0-fDiv1;}
        if (fDiv == std::numeric_limits<float>::infinity()) {
            ui->result_label->setText(QString::fromStdString("Error"));
            return "Error";
        }
        sum = to_string(fDiv) + sum.substr(min);
        ui->result_label->setText(QString::fromStdString(sum));
    } else {                                                            // справа что-то и слева что-то
        string sDiv0 = sum.substr(minR+1, sum.find(action)-1-minR);
        string sDiv1 = sum.substr(sum.find(action)+1, min-1-sum.find(action));

        if ((sDiv0.length() == 0) || (sDiv1.length() == 0)) {
            ui->result_label->setText(QString::fromStdString("Error"));
            return "Error";
        }

        qInfo() << QString::fromStdString(sDiv0);
        qInfo() << QString::fromStdString(sDiv1);
        float fDiv0 = atoi(sDiv0);
        float fDiv1 = atoi(sDiv1);
        float fDiv;
        if(action=="$"){fDiv = pow(fDiv1, 1./fDiv0);}else if(action == "^"){fDiv = pow(fDiv0, fDiv1);}else if(action == "*"){fDiv = fDiv0*fDiv1;}else if(action == "/"){fDiv = fDiv0/fDiv1;}else if(action == "+"){fDiv = fDiv0+fDiv1;}else{fDiv = fDiv0-fDiv1;}

        if (fDiv == std::numeric_limits<float>::infinity()) {
            ui->result_label->setText(QString::fromStdString("Error"));
            return "Error";
        }

        sum = sum.substr(0, minR+1)+ to_string(fDiv) + sum.substr(min);
        ui->result_label->setText(QString::fromStdString(sum));
    }
    qInfo() << QString::fromStdString("\n");
    return sum;
}


string Calculator::calculate(string sum) {
    qInfo() << QString::fromStdString("start calculate; sum= " + sum);
    while (true) {
        if (!(sum.find("cos") == std::string::npos)) {
            int len[8];
            len[0] = sum.find("+", sum.find("cos")+3);
            len[1] = sum.find("_", sum.find("cos")+3);
            len[2] = sum.find("/", sum.find("cos")+3);
            len[3] = sum.find("*", sum.find("cos")+3);
            len[4] = sum.find("sqrt", sum.find("cos")+3);
            len[5] = sum.find("$", sum.find("cos")+3);
            len[6] = sum.find("cos", sum.find("cos")+3);
            len[7] = sum.find("e", sum.find("cos")+3);

            int min = sum.length();
            for (int i=0; i < 8; i++) {
                if (len[i] < min && len[i] != -1) {  //<---fix is here
                    min = len[i];
                }
            }
            if (min == sum.length()) {
                min = -1;
            }
            qInfo() << QString::fromStdString("min: " + to_string(min));
            if (min == std::string::npos || min == -1) {
                string sCos = sum.substr(sum.find("cos")+3);

                if (sCos.length() == 0) {
                    ui->result_label->setText(QString::fromStdString("Error"));
                    return sum;
                }

                qInfo() << QString::fromStdString("cos: " + sCos);
                float fCos = cos(atoi(sCos));
                sum = sum.substr(0, sum.find("cos"))+ to_string(fCos);
                ui->result_label->setText(QString::fromStdString(sum));
            } else {
                string sCos = sum.substr(sum.find("cos")+3, min-3-sum.find("cos"));

                if (sCos.length() == 0) {
                    ui->result_label->setText(QString::fromStdString("Error"));
                    return sum;
                }

                qInfo() << QString::fromStdString("cos: " + sCos);
                float fCos = cos(atoi(sCos));
                sum = sum.substr(0, sum.find("cos"))+ to_string(fCos) + sum.substr(min);
                ui->result_label->setText(QString::fromStdString(sum));
            }

        } else if (!(sum.find("e") == std::string::npos)) {
            int len[8];
            len[0] = sum.find("+", sum.find("e")+1);
            len[1] = sum.find("_", sum.find("e")+1);
            len[2] = sum.find("/", sum.find("e")+1);
            len[3] = sum.find("*", sum.find("e")+1);
            len[4] = sum.find("sqrt", sum.find("e")+1);
            len[5] = sum.find("$", sum.find("e")+1);
            len[6] = sum.find("cos", sum.find("e")+1);
            len[7] = sum.find("e", sum.find("e")+1);

            int min = sum.length();
            for (int i=0; i < 8; i++) {
                if (len[i] < min && len[i] != -1) {  //<---fix is here
                    min = len[i];
                }
            }
            if (min == sum.length()) {
                min = -1;
            }
            qInfo() << QString::fromStdString("min: " + to_string(min));
            if (min == std::string::npos || min == -1) {
                string sE = sum.substr(sum.find("e")+1);

                if (sE.length() == 0) {
                    ui->result_label->setText(QString::fromStdString("Error"));
                    return sum;
                }

                qInfo() << QString::fromStdString("e: " + sE);
                float fE = exp(atoi(sE));
                sum = sum.substr(0, sum.find("e"))+ to_string(fE);
                ui->result_label->setText(QString::fromStdString(sum));
            } else {
                string sE = sum.substr(sum.find("e")+1, min-1-sum.find("e"));

                if (sE.length() == 0) {
                    ui->result_label->setText(QString::fromStdString("Error"));
                    return sum;
                }

                qInfo() << QString::fromStdString("e: " + sE);
                float fE = exp(atoi(sE));
                sum = sum.substr(0, sum.find("e"))+ to_string(fE) + sum.substr(min);
                ui->result_label->setText(QString::fromStdString(sum));
            }
        } else if (!(sum.find("sqrt") == std::string::npos)) {
            int len[8];
            len[0] = sum.find("+", sum.find("sqrt")+4);
            len[1] = sum.find("_", sum.find("sqrt")+4);
            len[2] = sum.find("/", sum.find("sqrt")+4);
            len[3] = sum.find("*", sum.find("sqrt")+4);
            len[4] = sum.find("sqrt", sum.find("sqrt")+4);
            len[5] = sum.find("$", sum.find("sqrt")+4);
            len[6] = sum.find("cos", sum.find("sqrt")+4);
            len[7] = sum.find("e", sum.find("sqrt")+4);

            int min = sum.length();
            for (int i=0; i < 8; i++) {
                if (len[i] < min && len[i] != -1) {  //<---fix is here
                    min = len[i];
                }
            }
            if (min == sum.length()) {
                min = -1;
            }
            qInfo() << QString::fromStdString("min: " + to_string(min));
            if (min == std::string::npos || min == -1) {
                string sSQRT = sum.substr(sum.find("sqrt")+4);

                if (sSQRT.length() == 0) {
                    ui->result_label->setText(QString::fromStdString("Error"));
                    return sum;
                }

                qInfo() << QString::fromStdString("SQRT: " + sSQRT);
                float fSQRT = pow(atoi(sSQRT), (1./2));
                sum = sum.substr(0, sum.find("sqrt"))+ to_string(fSQRT);
                ui->result_label->setText(QString::fromStdString(sum));
            } else {
                string sSQRT = sum.substr(sum.find("sqrt")+4, min-4-sum.find("sqrt"));

                if (sSQRT.length() == 0) {
                    ui->result_label->setText(QString::fromStdString("Error"));
                    return sum;
                }

                qInfo() << QString::fromStdString("SQRT: " + sSQRT);
                float fSQRT = pow(atoi(sSQRT), (1./2));
                sum = sum.substr(0, sum.find("sqrt")) + to_string(fSQRT) + sum.substr(min);
                ui->result_label->setText(QString::fromStdString(sum));
            }
        } else if (!(sum.find("$") == std::string::npos)) {
             sum = defaultActions("$", sum);
        } else if ((!(sum.find("/") == std::string::npos)) || (!(sum.find("*") == std::string::npos))) {
            if ((sum.find("*") == std::string::npos) || (sum.find("/") < sum.find("*"))) {
                sum = defaultActions("/", sum);
            } else if ((sum.find("/") == std::string::npos) || (sum.find("*") < sum.find("/"))) {
                sum = defaultActions("*", sum);
            }
        } else if ((!(sum.find("_") == std::string::npos)) || (!(sum.find("+") == std::string::npos))) {
            if ((sum.find("+") == std::string::npos) || (sum.find("_") < sum.find("+"))) {
                sum = defaultActions("_", sum);
            } else if ((sum.find("_") == std::string::npos) || (sum.find("+") < sum.find("_"))) {
                sum = defaultActions("+", sum);
            }
        } else {return sum;}
        qInfo() << QString::fromStdString("\n");
    }
    return sum;
}


float Calculator::atoi(const std::string& str)
{
  return ::atof(str.c_str());
}


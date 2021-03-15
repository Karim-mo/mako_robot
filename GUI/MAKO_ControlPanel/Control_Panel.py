# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'Control_Panel.ui'
#
# Created by: PyQt5 UI code generator 5.15.2
#
# WARNING: Any manual changes made to this file will be lost when pyuic5 is
# run again.  Do not edit this file unless you know what you are doing.


from PyQt5 import QtCore, QtGui, QtWidgets


class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        MainWindow.setObjectName("MainWindow")
        MainWindow.resize(1280, 800)
        MainWindow.setMinimumSize(QtCore.QSize(1280, 800))
        MainWindow.setMaximumSize(QtCore.QSize(1280, 800))
        MainWindow.setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.130095, y1:0.131, x2:1, y2:1, stop:0.253731 rgba(0, 171, 255, 255), stop:1 rgba(255, 255, 255, 255));")
        self.centralwidget = QtWidgets.QWidget(MainWindow)
        self.centralwidget.setObjectName("centralwidget")
        self.grpBox = QtWidgets.QGroupBox(self.centralwidget)
        self.grpBox.setGeometry(QtCore.QRect(29, 19, 1231, 771))
        self.grpBox.setMinimumSize(QtCore.QSize(1100, 700))
        self.grpBox.setMaximumSize(QtCore.QSize(1300, 900))
        self.grpBox.setObjectName("grpBox")
        self.btnEmotion = QtWidgets.QPushButton(self.grpBox)
        self.btnEmotion.setGeometry(QtCore.QRect(30, 30, 291, 141))
        self.btnEmotion.setStyleSheet("background-color: rgb(255, 255, 255);")
        self.btnEmotion.setObjectName("btnEmotion")
        self.btnFace = QtWidgets.QPushButton(self.grpBox)
        self.btnFace.setGeometry(QtCore.QRect(480, 30, 291, 141))
        self.btnFace.setStyleSheet("background-color: rgb(255, 255, 255);")
        self.btnFace.setObjectName("btnFace")
        self.btnSpatial = QtWidgets.QPushButton(self.grpBox)
        self.btnSpatial.setGeometry(QtCore.QRect(920, 30, 291, 141))
        self.btnSpatial.setStyleSheet("background-color: rgb(255, 255, 255);")
        self.btnSpatial.setObjectName("btnSpatial")
        self.btnGreeting = QtWidgets.QPushButton(self.grpBox)
        self.btnGreeting.setGeometry(QtCore.QRect(30, 210, 291, 141))
        self.btnGreeting.setStyleSheet("background-color: rgb(255, 255, 255);")
        self.btnGreeting.setObjectName("btnGreeting")
        self.btnRead = QtWidgets.QPushButton(self.grpBox)
        self.btnRead.setGeometry(QtCore.QRect(480, 210, 291, 141))
        self.btnRead.setStyleSheet("background-color: rgb(255, 255, 255);")
        self.btnRead.setObjectName("btnRead")
        self.btnLang = QtWidgets.QPushButton(self.grpBox)
        self.btnLang.setGeometry(QtCore.QRect(920, 210, 291, 141))
        self.btnLang.setStyleSheet("background-color: rgb(255, 255, 255);")
        self.btnLang.setObjectName("btnLang")
        self.btnGames = QtWidgets.QPushButton(self.grpBox)
        self.btnGames.setGeometry(QtCore.QRect(30, 390, 291, 141))
        self.btnGames.setStyleSheet("background-color: rgb(255, 255, 255);")
        self.btnGames.setObjectName("btnGames")
        self.btnRobotCntrl = QtWidgets.QPushButton(self.grpBox)
        self.btnRobotCntrl.setGeometry(QtCore.QRect(480, 390, 291, 141))
        self.btnRobotCntrl.setStyleSheet("background-color: rgb(255, 255, 255);")
        self.btnRobotCntrl.setObjectName("btnRobotCntrl")
        self.btnRobotFaces = QtWidgets.QPushButton(self.grpBox)
        self.btnRobotFaces.setGeometry(QtCore.QRect(920, 390, 291, 141))
        self.btnRobotFaces.setStyleSheet("background-color: rgb(255, 255, 255);")
        self.btnRobotFaces.setObjectName("btnRobotFaces")
        self.btnRobotQuiz = QtWidgets.QPushButton(self.grpBox)
        self.btnRobotQuiz.setGeometry(QtCore.QRect(30, 570, 291, 141))
        self.btnRobotQuiz.setStyleSheet("background-color: rgb(255, 255, 255);")
        self.btnRobotQuiz.setObjectName("btnRobotQuiz")
        self.btnStop = QtWidgets.QPushButton(self.grpBox)
        self.btnStop.setGeometry(QtCore.QRect(920, 570, 291, 141))
        self.btnStop.setStyleSheet("background-color: rgb(255, 255, 255);\n"
"background-color: rgb(239, 41, 41);")
        self.btnStop.setObjectName("btnStop")
        MainWindow.setCentralWidget(self.centralwidget)

        self.retranslateUi(MainWindow)
        QtCore.QMetaObject.connectSlotsByName(MainWindow)

    def retranslateUi(self, MainWindow):
        _translate = QtCore.QCoreApplication.translate
        MainWindow.setWindowTitle(_translate("MainWindow", "MAKO Modules Control"))
        self.grpBox.setTitle(_translate("MainWindow", "MAKO\'s Educational Modules Control"))
        self.btnEmotion.setText(_translate("MainWindow", "Emotion Recognition"))
        self.btnFace.setText(_translate("MainWindow", "Faces Recognition"))
        self.btnSpatial.setText(_translate("MainWindow", "Spatial Prepositions"))
        self.btnGreeting.setText(_translate("MainWindow", "Greetings"))
        self.btnRead.setText(_translate("MainWindow", "Reading "))
        self.btnLang.setText(_translate("MainWindow", "WH Questions"))
        self.btnGames.setText(_translate("MainWindow", "Mini Games"))
        self.btnRobotCntrl.setText(_translate("MainWindow", "MAKO Movement Game"))
        self.btnRobotFaces.setText(_translate("MainWindow", "MAKO Faces Quiz Game"))
        self.btnRobotQuiz.setText(_translate("MainWindow", "MAKO Turn Taking \n"
"Emotion Quiz"))
        self.btnStop.setText(_translate("MainWindow", "Stop Current Module"))


if __name__ == "__main__":
    import sys
    app = QtWidgets.QApplication(sys.argv)
    MainWindow = QtWidgets.QMainWindow()
    ui = Ui_MainWindow()
    ui.setupUi(MainWindow)
    MainWindow.show()
    sys.exit(app.exec_())

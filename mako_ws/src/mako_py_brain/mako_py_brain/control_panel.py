import rclpy
import sys
import os
import threading
from rclpy.node import Node
from functools import partial
from PyQt5 import QtCore, QtGui, QtWidgets
from mako_nolang_interfaces.msg import MakoServerMessage


class ControlPanelNode(Node):
    def __init__(self):
        super().__init__("ctrl_panel_node")
        self.get_logger().info("Control Panel Node Started")
        self.moduleOn = False
        self.serverMsgPublisher = self.create_publisher(MakoServerMessage, "server_msg", 10)
        #self.moduleMsgSubscriber = self.create_subscription(MakoServerMessage, "module_msg", self.onModuleMessage, 10)
        self.app = QtWidgets.QApplication(sys.argv)
        self.MainWindow = QtWidgets.QMainWindow()
        self.setupUi()
        self.MainWindow.show()
        sys.exit(self.app.exec_())


    def setupUi(self):
        self.MainWindow.setObjectName("MainWindow")
        self.MainWindow.resize(1280, 800)
        self.MainWindow.setMinimumSize(QtCore.QSize(1280, 800))
        self.MainWindow.setMaximumSize(QtCore.QSize(1280, 800))
        self.MainWindow.setStyleSheet(
            "background-color: qlineargradient(spread:pad, x1:0.130095, y1:0.131, x2:1, y2:1, stop:0.253731 rgba(0, 171, 255, 255), stop:1 rgba(255, 255, 255, 255));")
        self.MainWindow.setTabShape(QtWidgets.QTabWidget.Rounded)
        self.centralwidget = QtWidgets.QWidget(self.MainWindow)
        self.centralwidget.setObjectName("centralwidget")
        self.grpBox = QtWidgets.QGroupBox(self.centralwidget)
        self.grpBox.setGeometry(QtCore.QRect(29, 19, 1231, 771))
        self.grpBox.setMinimumSize(QtCore.QSize(1100, 700))
        self.grpBox.setMaximumSize(QtCore.QSize(1300, 900))
        self.grpBox.setStyleSheet("color: rgba(0,36,61,255);")
        self.grpBox.setObjectName("grpBox")
        self.btnEmotion = QtWidgets.QPushButton(self.grpBox)
        self.btnEmotion.setGeometry(QtCore.QRect(30, 30, 291, 141))
        font = QtGui.QFont()
        font.setPointSize(-1)
        font.setBold(False)
        font.setWeight(50)
        self.btnEmotion.setFont(font)
        self.btnEmotion.setStyleSheet("background-color: \'white\';\n"
                                      "font-size:20px;")
        self.btnEmotion.setObjectName("btnEmotion")
        self.btnFace = QtWidgets.QPushButton(self.grpBox)
        self.btnFace.setGeometry(QtCore.QRect(480, 30, 291, 141))
        font = QtGui.QFont()
        font.setPointSize(-1)
        font.setBold(False)
        font.setUnderline(False)
        font.setWeight(50)
        font.setStrikeOut(False)
        self.btnFace.setFont(font)
        self.btnFace.setStyleSheet("background-color: \'white\';\n"
                                   "font-size:20px;")
        self.btnFace.setObjectName("btnFace")
        self.btnSpatial = QtWidgets.QPushButton(self.grpBox)
        self.btnSpatial.setGeometry(QtCore.QRect(920, 30, 291, 141))
        font = QtGui.QFont()
        font.setPointSize(-1)
        font.setBold(False)
        font.setUnderline(False)
        font.setWeight(50)
        font.setStrikeOut(False)
        self.btnSpatial.setFont(font)
        self.btnSpatial.setStyleSheet("background-color: \'white\';\n"
                                      "font-size:20px;")
        self.btnSpatial.setObjectName("btnSpatial")
        self.btnGreeting = QtWidgets.QPushButton(self.grpBox)
        self.btnGreeting.setGeometry(QtCore.QRect(30, 210, 291, 141))
        self.btnGreeting.setStyleSheet("background-color: \'white\';\n"
                                       "font-size:20px;")
        self.btnGreeting.setObjectName("btnGreeting")
        self.btnRead = QtWidgets.QPushButton(self.grpBox)
        self.btnRead.setGeometry(QtCore.QRect(480, 210, 291, 141))
        self.btnRead.setStyleSheet("background-color: \'white\';\n"
                                   "font-size:20px;")
        self.btnRead.setObjectName("btnRead")
        self.btnLang = QtWidgets.QPushButton(self.grpBox)
        self.btnLang.setGeometry(QtCore.QRect(920, 210, 291, 141))
        self.btnLang.setStyleSheet("background-color: \'white\';\n"
                                   "font-size:20px;")
        self.btnLang.setObjectName("btnLang")
        self.btnGames = QtWidgets.QPushButton(self.grpBox)
        self.btnGames.setGeometry(QtCore.QRect(30, 390, 291, 141))
        self.btnGames.setStyleSheet("background-color: \'white\';\n"
                                    "font-size:20px;")
        self.btnGames.setObjectName("btnGames")
        self.btnRobotCntrl = QtWidgets.QPushButton(self.grpBox)
        self.btnRobotCntrl.setGeometry(QtCore.QRect(480, 390, 291, 141))
        self.btnRobotCntrl.setStyleSheet("background-color: \'white\';\n"
                                         "font-size:20px;")
        self.btnRobotCntrl.setObjectName("btnRobotCntrl")
        self.btnRobotFaces = QtWidgets.QPushButton(self.grpBox)
        self.btnRobotFaces.setGeometry(QtCore.QRect(920, 390, 291, 141))
        self.btnRobotFaces.setStyleSheet("background-color: \'white\';\n"
                                         "font-size:20px;")
        self.btnRobotFaces.setObjectName("btnRobotFaces")
        self.btnRobotQuiz = QtWidgets.QPushButton(self.grpBox)
        self.btnRobotQuiz.setGeometry(QtCore.QRect(30, 570, 291, 141))
        self.btnRobotQuiz.setStyleSheet("background-color: \'white\';\n"
                                        "font-size:20px;")
        self.btnRobotQuiz.setObjectName("btnRobotQuiz")
        self.btnStop = QtWidgets.QPushButton(self.grpBox)
        self.btnStop.setGeometry(QtCore.QRect(920, 570, 291, 141))
        self.btnStop.setStyleSheet("background-color: rgb(150, 0, 0);\n"
                                   "font-size:20px;")
        self.btnStop.setObjectName("btnStop")
        self.lblStatus = QtWidgets.QLabel(self.grpBox)
        self.lblStatus.setGeometry(QtCore.QRect(480, 640, 111, 17))
        self.lblStatus.setStyleSheet("background-color: rgba(255, 255, 255, 0);\n"
                                     "color: rgba(0,36,61,255);")
        self.lblStatus.setObjectName("lblStatus")
        self.lblCurrentStatus = QtWidgets.QLabel(self.grpBox)
        self.lblCurrentStatus.setGeometry(QtCore.QRect(590, 640, 321, 17))
        self.lblCurrentStatus.setStyleSheet("background-color: rgba(255, 255, 255, 0);\n"
                                            "color: rgba(0,36,61,255);")
        self.lblCurrentStatus.setObjectName("lblCurrentStatus")
        self.MainWindow.setCentralWidget(self.centralwidget)

        self.retranslateUi()
        QtCore.QMetaObject.connectSlotsByName(self.MainWindow)
        self.initUI()

    def retranslateUi(self):
        _translate = QtCore.QCoreApplication.translate
        self.MainWindow.setWindowTitle(_translate(
            "MainWindow", "MAKO Modules Control"))
        self.grpBox.setTitle(_translate(
            "MainWindow", "MAKO\'s Educational Modules Control"))
        self.btnEmotion.setText(_translate(
            "MainWindow", "Emotion Recognition"))
        self.btnFace.setText(_translate("MainWindow", "Faces Recognition"))
        self.btnSpatial.setText(_translate(
            "MainWindow", "Spatial Prepositions"))
        self.btnGreeting.setText(_translate("MainWindow", "Greetings"))
        self.btnRead.setText(_translate("MainWindow", "Social Stories"))
        self.btnLang.setText(_translate("MainWindow", "WH Questions"))
        self.btnGames.setText(_translate("MainWindow", "Puzzle Games"))
        self.btnRobotCntrl.setText(_translate(
            "MainWindow", "MAKO Movement Game"))
        self.btnRobotFaces.setText(_translate("MainWindow", "MAKO Faces Quiz"))
        self.btnRobotQuiz.setText(_translate("MainWindow", "MAKO Turn Taking \n"
                                             "Emotion Quiz"))
        self.btnStop.setText(_translate("MainWindow", "Stop Current Module"))
        self.lblStatus.setText(_translate("MainWindow", "Current Status:"))
        self.lblCurrentStatus.setText(_translate(
            "MainWindow", "No Module Currently Running"))


    def initUI(self):
        self.btnEmotion.clicked.connect(self.btnEmotionClick)
        self.btnStop.clicked.connect(self.btnStopClick)

        
    # def onModuleMessage(self, msg):
    #     self.get_logger().info(str(msg))
    #     if(msg.message == "Request Received"):
    #         self.get_logger().info("xd")
    #         name = ""
    #         name += msg.module_name[0]
    #         for i, c in enumerate(msg.module_name, start=1):
    #             if(str.isupper(c)):
    #                 name += " "
    #             name += c

    #         self.lblCurrentStatus.setText(name + "is running")
    #         self.lblCurrentStatus.adjustSize()

    def btnStopClick(self):
        if(not self.moduleOn):
            return
        self.moduleOn = False
        self.get_logger().info("Sending Stop Signal to Server..")
        msg = MakoServerMessage()
        msg.type = "module_request"
        msg.message = "WaitMenu"
        self.serverMsgPublisher.publish(msg)
        self.lblCurrentStatus.setText("No Module Currently Running")
        self.lblCurrentStatus.adjustSize()

    def btnEmotionClick(self):
        if(self.moduleOn):
            return
        self.moduleOn = True
        self.get_logger().info("Sending Emotion Module Signal to Server..")
        msg = MakoServerMessage()
        msg.type = "module_request"
        msg.message = "EmotionModule"
        self.serverMsgPublisher.publish(msg)
        self.lblCurrentStatus.setText("Emotion module is running")
        self.lblCurrentStatus.adjustSize()
        

def ros_spin(node):
    rclpy.spin(node)
    rclpy.shutdown()


def main(args=None):
    rclpy.init(args=args)
    node = ControlPanelNode()
    ros_thread = threading.Thread(target=partial(ros_spin, node))


if __name__ == "__main__":
    main()

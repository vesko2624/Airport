import sys
import subprocess
from PyQt5.QtWidgets import QApplication, QWidget, QMainWindow
from PyQt5.QtGui import QIcon

class Window(QMainWindow):

    def __init__(self):
        super(Window, self).__init__()
        self.setFixedSize(640, 480)
        self.setWindowTitle('MyApp')
        self.setGeometry(960 - 640/2, 600 - 480/2, 640, 480)
        self.show()
 
subprocess.call("run", shell=True)
print(sys.argv)
app = QApplication(sys.argv)
GUI = Window()
sys.exit(app.exec_())
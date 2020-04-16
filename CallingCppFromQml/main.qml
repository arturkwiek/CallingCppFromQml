import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.5

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("C++ to Qml")

    Column {
        spacing: 10

        Button {
            text: "Call C++ method"
            onClicked: {
                CppWorker.regularSlot();
                textToShow.text = CppWorker.regularMethodWithReturn(" Text i inna wartość: ",89)
            }

        }

        Rectangle {
            width: textToShow.implicitWidth + 20
            height: textToShow.implicitHeight + 20
            color: "beige"

            Text {
                id: textToShow
                text: CppWorker.regularMethodWithReturn(" Text i wartość: ", 78)
                font.pointSize: 10
            }
        }

        Other  {
            id: other

        }
    }
}

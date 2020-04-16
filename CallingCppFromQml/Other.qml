import QtQuick 2.0

Item {

    Component.onCompleted:
        CppWorker.regularDebugMethod("Component completed")
}

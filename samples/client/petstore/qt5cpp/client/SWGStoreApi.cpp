/**
 * Swagger Petstore
 * This is a sample server Petstore server.  You can find out more about Swagger at [http://swagger.io](http://swagger.io) or on [irc.freenode.net, #swagger](http://swagger.io/irc/).  For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 * Contact: apiteam@swagger.io
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

#include "SWGStoreApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"
#include "SWGQObjectWrapper.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {

SWGStoreApi::SWGStoreApi() {}

SWGStoreApi::~SWGStoreApi() {}

SWGStoreApi::SWGStoreApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGStoreApi::deleteOrder(QString* order_id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/store/order/{orderId}");

    QString order_idPathParam("{"); order_idPathParam.append("orderId").append("}");
    fullPath.replace(order_idPathParam, stringValue(order_id));


    SWGHttpRequestWorker *worker = new SWGHttpRequestWorker();
    SWGHttpRequestInput input(fullPath, "DELETE");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &SWGHttpRequestWorker::on_execution_finished,
            this,
            &SWGStoreApi::deleteOrderCallback);

    worker->execute(&input);
}

void
SWGStoreApi::deleteOrderCallback(SWGHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit deleteOrderSignal();
    } else {
        emit deleteOrderSignalE(error_type, error_str);
        emit deleteOrderSignalEFull(worker, error_type, error_str);
    }
}

void
SWGStoreApi::getInventory() {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/store/inventory");



    SWGHttpRequestWorker *worker = new SWGHttpRequestWorker();
    SWGHttpRequestInput input(fullPath, "GET");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &SWGHttpRequestWorker::on_execution_finished,
            this,
            &SWGStoreApi::getInventoryCallback);

    worker->execute(&input);
}

void
SWGStoreApi::getInventoryCallback(SWGHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    QMap<QString, qint32>* output = new QMap<QString, qint32>();
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject obj = doc.object();

    foreach(QString key, obj.keys()) {
        qint32 val;
        setValue(&val, obj[key], "qint32", QString());
        output->insert(key, val);
    }
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit getInventorySignal(output);
    } else {
        emit getInventorySignalE(output, error_type, error_str);
        emit getInventorySignalEFull(worker, error_type, error_str);
    }
}

void
SWGStoreApi::getOrderById(qint64 order_id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/store/order/{orderId}");

    QString order_idPathParam("{"); order_idPathParam.append("orderId").append("}");
    fullPath.replace(order_idPathParam, stringValue(order_id));


    SWGHttpRequestWorker *worker = new SWGHttpRequestWorker();
    SWGHttpRequestInput input(fullPath, "GET");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &SWGHttpRequestWorker::on_execution_finished,
            this,
            &SWGStoreApi::getOrderByIdCallback);

    worker->execute(&input);
}

void
SWGStoreApi::getOrderByIdCallback(SWGHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    QString json(worker->response);
    SWGOrder* output = static_cast<SWGOrder*>(create(json, QString("SWGOrder")));
    auto wrapper = new SWGQObjectWrapper<SWGOrder*> (output);
    wrapper->deleteLater();
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit getOrderByIdSignal(output);
    } else {
        emit getOrderByIdSignalE(output, error_type, error_str);
        emit getOrderByIdSignalEFull(worker, error_type, error_str);
    }
}

void
SWGStoreApi::placeOrder(SWGOrder& swg_order) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/store/order");



    SWGHttpRequestWorker *worker = new SWGHttpRequestWorker();
    SWGHttpRequestInput input(fullPath, "POST");


    
    QString output = swg_order.asJson();
    input.request_body.append(output);
    


    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &SWGHttpRequestWorker::on_execution_finished,
            this,
            &SWGStoreApi::placeOrderCallback);

    worker->execute(&input);
}

void
SWGStoreApi::placeOrderCallback(SWGHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    QString json(worker->response);
    SWGOrder* output = static_cast<SWGOrder*>(create(json, QString("SWGOrder")));
    auto wrapper = new SWGQObjectWrapper<SWGOrder*> (output);
    wrapper->deleteLater();
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit placeOrderSignal(output);
    } else {
        emit placeOrderSignalE(output, error_type, error_str);
        emit placeOrderSignalEFull(worker, error_type, error_str);
    }
}


}

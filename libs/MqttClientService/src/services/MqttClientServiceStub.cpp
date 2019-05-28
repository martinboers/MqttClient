///////////////////////////////////////////////////////////////////////////////
//
//  Copyright PHOENIX CONTACT Electronics GmbH
//
///////////////////////////////////////////////////////////////////////////////
#include "Arp/System/Rsc/Services/RscException.hpp"
#include "Arp/System/Rsc/Services/RscServerContext.hpp"
#include "MqttClientServiceStub.hpp"
#include "MqttClientServiceImpl.hpp"

// DO NOT MODIFY THIS FILE, THIS FILE IS AUTOGENERATED BY IMqttClientService.cs

namespace PxceTcs { namespace MqttClient { namespace Services
{

MqttClientServiceStub::MqttClientServiceStub(MqttClientServiceImpl* pServiceImpl)
    : Base(pServiceImpl)
{
}

void MqttClientServiceStub::Invoke(int methodHandle, RscServerContext& context)
{
    switch(methodHandle)
    {
    case 1:
        this->Connect(context);
        break;
    case 2:
        this->CreateClient(context);
        break;
    case 3:
        this->DestroyClient(context);
        break;
    case 4:
        this->Disconnect(context);
        break;
    case 5:
        this->GetTimeout(context);
        break;
    case 6:
        this->IsConnected(context);
        break;
    case 7:
        this->Publish(context);
        break;
    case 8:
        this->Reconnect(context);
        break;
    case 9:
        this->SetTimeout(context);
        break;
    case 10:
        this->Subscribe(context);
        break;
    case 11:
        this->TryConsumeMessage(context);
        break;
    case 12:
        this->Unsubscribe(context);
        break;
    default:
        context.AbortRequest(RscErrors::UnknownMethodHandle);
        break;
    }
}

void MqttClientServiceStub::Connect(RscServerContext& context)
{
    RscReader& reader = context.GetReader();
    RscWriter& writer = context.GetWriter();

    int32 clientId = 0;
    reader.Read(clientId);
    ConnectOptions opts;
    reader.Read(opts);

    int32 result = this->pServiceImpl->Connect(clientId, opts);

    writer.WriteConfirmation();
    writer.Write(result);
}

void MqttClientServiceStub::CreateClient(RscServerContext& context)
{
    RscReader& reader = context.GetReader();
    RscWriter& writer = context.GetWriter();

    RscString<512> serverURI;
    reader.Read(serverURI);
    RscString<512> clientId;
    reader.Read(clientId);

    int32 result = this->pServiceImpl->CreateClient(serverURI, clientId);

    writer.WriteConfirmation();
    writer.Write(result);
}

void MqttClientServiceStub::DestroyClient(RscServerContext& context)
{
    RscReader& reader = context.GetReader();
    RscWriter& writer = context.GetWriter();

    int32 clientId = 0;
    reader.Read(clientId);

    int32 result = this->pServiceImpl->DestroyClient(clientId);

    writer.WriteConfirmation();
    writer.Write(result);
}

void MqttClientServiceStub::Disconnect(RscServerContext& context)
{
    RscReader& reader = context.GetReader();
    RscWriter& writer = context.GetWriter();

    int32 clientId = 0;
    reader.Read(clientId);
    int32 timeoutMS = 0;
    reader.Read(timeoutMS);

    int32 result = this->pServiceImpl->Disconnect(clientId, timeoutMS);

    writer.WriteConfirmation();
    writer.Write(result);
}

void MqttClientServiceStub::GetTimeout(RscServerContext& context)
{
    RscReader& reader = context.GetReader();
    RscWriter& writer = context.GetWriter();

    int32 clientId = 0;
    reader.Read(clientId);

    int32 result = this->pServiceImpl->GetTimeout(clientId);

    writer.WriteConfirmation();
    writer.Write(result);
}

void MqttClientServiceStub::IsConnected(RscServerContext& context)
{
    RscReader& reader = context.GetReader();
    RscWriter& writer = context.GetWriter();

    int32 clientId = 0;
    reader.Read(clientId);

    boolean result = this->pServiceImpl->IsConnected(clientId);

    writer.WriteConfirmation();
    writer.Write(result);
}

void MqttClientServiceStub::Publish(RscServerContext& context)
{
    RscReader& reader = context.GetReader();
    RscWriter& writer = context.GetWriter();

    int32 clientId = 0;
    reader.Read(clientId);
    RscString<512> topic;
    reader.Read(topic);
    RscVariant<512> payload;
    reader.Read(payload);
    uint32 length = 0;
    reader.Read(length);
    int32 qos = 0;
    reader.Read(qos);
    boolean retained = false;
    reader.Read(retained);

    int32 result = this->pServiceImpl->Publish(clientId, topic, payload, length, qos, retained);

    writer.WriteConfirmation();
    writer.Write(result);
}

void MqttClientServiceStub::Reconnect(RscServerContext& context)
{
    RscReader& reader = context.GetReader();
    RscWriter& writer = context.GetWriter();

    int32 clientId = 0;
    reader.Read(clientId);

    int32 result = this->pServiceImpl->Reconnect(clientId);

    writer.WriteConfirmation();
    writer.Write(result);
}

void MqttClientServiceStub::SetTimeout(RscServerContext& context)
{
    RscReader& reader = context.GetReader();
    RscWriter& writer = context.GetWriter();

    int32 clientId = 0;
    reader.Read(clientId);
    int32 timeoutMS = 0;
    reader.Read(timeoutMS);

    int32 result = this->pServiceImpl->SetTimeout(clientId, timeoutMS);

    writer.WriteConfirmation();
    writer.Write(result);
}

void MqttClientServiceStub::Subscribe(RscServerContext& context)
{
    RscReader& reader = context.GetReader();
    RscWriter& writer = context.GetWriter();

    int32 clientId = 0;
    reader.Read(clientId);
    RscString<512> topicFilter;
    reader.Read(topicFilter);

    int32 result = this->pServiceImpl->Subscribe(clientId, topicFilter);

    writer.WriteConfirmation();
    writer.Write(result);
}

void MqttClientServiceStub::TryConsumeMessage(RscServerContext& context)
{
    RscReader& reader = context.GetReader();
    RscWriter& writer = context.GetWriter();

    int32 clientId = 0;
    reader.Read(clientId);
    Message msg;

    int32 result = this->pServiceImpl->TryConsumeMessage(clientId, msg);

    writer.WriteConfirmation();
    writer.Write(msg);
    writer.Write(result);
}

void MqttClientServiceStub::Unsubscribe(RscServerContext& context)
{
    RscReader& reader = context.GetReader();
    RscWriter& writer = context.GetWriter();

    int32 clientId = 0;
    reader.Read(clientId);
    RscString<512> topicFilter;
    reader.Read(topicFilter);

    int32 result = this->pServiceImpl->Unsubscribe(clientId, topicFilter);

    writer.WriteConfirmation();
    writer.Write(result);
}


}}} // end of namespace PxceTcs::MqttClient::Services

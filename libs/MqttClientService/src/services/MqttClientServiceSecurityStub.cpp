///////////////////////////////////////////////////////////////////////////////
//
//  Copyright PHOENIX CONTACT Electronics GmbH
//
///////////////////////////////////////////////////////////////////////////////
#include "MqttClientServiceSecurityStub.hpp"

// DO NOT MODIFY THIS FILE, THIS FILE IS AUTOGENERATED BY IMqttClientService.cs

namespace PxceTcs { namespace MqttClient { namespace Services
{

int32 MqttClientServiceSecurityStub::Connect(int32 clientId, const ConnectOptions& opts)
{
    this->AuthorizeServiceInvocation("Connect");
    return ServiceImpl::Connect(clientId, opts);
}

int32 MqttClientServiceSecurityStub::CreateClient(const RscString<512>& serverURI, const RscString<512>& clientId)
{
    this->AuthorizeServiceInvocation("CreateClient");
    return ServiceImpl::CreateClient(serverURI, clientId);
}

int32 MqttClientServiceSecurityStub::DestroyClient(int32 clientId)
{
    this->AuthorizeServiceInvocation("DestroyClient");
    return ServiceImpl::DestroyClient(clientId);
}

int32 MqttClientServiceSecurityStub::Disconnect(int32 clientId, int32 timeoutMS)
{
    this->AuthorizeServiceInvocation("Disconnect");
    return ServiceImpl::Disconnect(clientId, timeoutMS);
}

int32 MqttClientServiceSecurityStub::GetTimeout(int32 clientId)
{
    this->AuthorizeServiceInvocation("GetTimeout");
    return ServiceImpl::GetTimeout(clientId);
}

boolean MqttClientServiceSecurityStub::IsConnected(int32 clientId)
{
    this->AuthorizeServiceInvocation("IsConnected");
    return ServiceImpl::IsConnected(clientId);
}

int32 MqttClientServiceSecurityStub::Publish(int32 clientId, const RscString<512>& topic, RscVariant<512> payload, uint32 length, int32 qos, boolean retained)
{
    this->AuthorizeServiceInvocation("Publish");
    return ServiceImpl::Publish(clientId, topic, payload, length, qos, retained);
}

int32 MqttClientServiceSecurityStub::Reconnect(int32 clientId)
{
    this->AuthorizeServiceInvocation("Reconnect");
    return ServiceImpl::Reconnect(clientId);
}

int32 MqttClientServiceSecurityStub::SetTimeout(int32 clientId, int32 timeoutMS)
{
    this->AuthorizeServiceInvocation("SetTimeout");
    return ServiceImpl::SetTimeout(clientId, timeoutMS);
}

int32 MqttClientServiceSecurityStub::Subscribe(int32 clientId, const RscString<512>& topicFilter)
{
    this->AuthorizeServiceInvocation("Subscribe");
    return ServiceImpl::Subscribe(clientId, topicFilter);
}

int32 MqttClientServiceSecurityStub::TryConsumeMessage(int32 clientId, Message& msg)
{
    this->AuthorizeServiceInvocation("TryConsumeMessage");
    return ServiceImpl::TryConsumeMessage(clientId, msg);
}

int32 MqttClientServiceSecurityStub::Unsubscribe(int32 clientId, const RscString<512>& topicFilter)
{
    this->AuthorizeServiceInvocation("Unsubscribe");
    return ServiceImpl::Unsubscribe(clientId, topicFilter);
}


}}} // end of namespace PxceTcs::MqttClient::Services

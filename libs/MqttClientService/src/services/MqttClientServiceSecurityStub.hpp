//
// Copyright (c) Phoenix Contact GmbH & Co. KG. All rights reserved.
// Licensed under the MIT. See LICENSE file in the project root for full license information.
// SPDX-License-Identifier: MIT
//
#pragma once
#include "Arp/System/Rsc/Services/RscServiceProxyBase.hxx"
#include "Arp/System/Rsc/Services/RscServiceSecurityStubBase.hxx"
#include "MqttClientServiceImpl.hpp"

// DO NOT MODIFY THIS FILE, THIS FILE IS AUTOGENERATED BY IMqttClientService.cs

namespace PxceTcs { namespace MqttClient { namespace Services
{

class MqttClientServiceSecurityStub : public RscServiceSecurityStubBase<MqttClientServiceImpl>
{
public: // construction/destruction
    /// <summary>Constructs an <see cref="MqttClientServiceSecurityStub" /> instance.</summary>
    MqttClientServiceSecurityStub(const char* providerName, IRscAuthorizator* pAuthorizator);
    /// <summary>Destructs this instance and frees all resouces.</summary>
    virtual ~MqttClientServiceSecurityStub(void) = default;

public: // IMqttClientService operations
    int32   Connect(int32 clientId, const ConnectOptions& opts)override;
    int32   CreateClient(const RscString<512>& serverURI, const RscString<512>& clientId)override;
    int32   DestroyClient(int32 clientId)override;
    int32   Disconnect(int32 clientId, int32 timeoutMS)override;
    boolean IsConnected(int32 clientId)override;
    int32   Publish(int32 clientId, const RscString<512>& topic, RscVariant<512> payload, uint32 length, int32 qos, boolean retained)override;
    int32   Reconnect(int32 clientId)override;
    int32   Subscribe(int32 clientId, const RscString<512>& topicFilter)override;
    int32   TryConsumeMessage(int32 clientId, Message& msg)override;
    int32   Unsubscribe(int32 clientId, const RscString<512>& topicFilter)override;

private: // fields
    MqttClientServiceImpl* pImpl;

private: // deleted methods (for non-copyable classes)
    MqttClientServiceSecurityStub(const MqttClientServiceSecurityStub& arg) = delete;
    MqttClientServiceSecurityStub& operator=(const MqttClientServiceSecurityStub& arg) = delete;
};

///////////////////////////////////////////////////////////////////////////////
//inline methods of class MqttClientServiceSecurityStub
inline MqttClientServiceSecurityStub::MqttClientServiceSecurityStub(const char* providerName, IRscAuthorizator* pAuthorizator)
    : RscServiceSecurityStubBase(providerName, pAuthorizator)
{
}

}}} // end of namespace PxceTcs::MqttClient::Services
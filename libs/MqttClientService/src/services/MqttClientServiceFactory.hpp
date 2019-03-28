//
// Copyright (c) Phoenix Contact GmbH & Co. KG. All rights reserved.
// Licensed under the MIT. See LICENSE file in the project root for full license information.
// SPDX-License-Identifier: MIT
//
#pragma once
#include "Arp/System/Rsc/Services/RscServiceFactoryBase.hpp"
#include "Arp/System/Rsc/Services/IRscServiceStub.hpp"

// DO NOT MODIFY THIS FILE, THIS FILE IS AUTOGENERATED BY IMqttClientService.cs

namespace PxceTcs { namespace MqttClient { namespace Services
{

using namespace Arp::System::Rsc::Services;

class MqttClientServiceFactory : public RscServiceFactoryBase
{
public: // typedefs

public: // construction/destruction
    /// <summary>Constructs an <see cref="MqttClientServiceFactory" /> instance.</summary>
    MqttClientServiceFactory(void);
    /// <summary>Destructs this instance and frees all resouces.</summary>
    virtual ~MqttClientServiceFactory(void) = default;

public: // static singleton operation
    ARP_CXX_SYMBOL_EXPORT static MqttClientServiceFactory&   GetInstance(void);

public: // IServiceFactory operations
    IRscService*     CreateServiceImpl(const char* providerName, IRscAuthorizator* pAuthorizator)override;
    IRscServiceStub* CreateServiceStub(const char* providerName, IRscAuthorizator* pAuthorizator)override;

private: // static fields
    static MqttClientServiceFactory  instance;
};

///////////////////////////////////////////////////////////////////////////////
// inline methods of class MqttClientServiceFactory

}}} // end of namespace PxceTcs::MqttClient::Services


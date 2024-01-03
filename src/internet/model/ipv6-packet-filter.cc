/*
 * Copyright (c) 2016 Universita' degli Studi di Napoli Federico II
 *               2016 University of Washington
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation;
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Authors:  Stefano Avallone <stavallo@unina.it>
 *           Tom Henderson <tomhend@u.washington.edu>
 *           Pasquale Imputato <p.imputato@gmail.com>
 */

#include "ipv6-packet-filter.h"

#include "ipv6-queue-disc-item.h"

#include "ns3/enum.h"
#include "ns3/log.h"
#include "ns3/uinteger.h"

namespace ns3
{

NS_LOG_COMPONENT_DEFINE("Ipv6PacketFilter");

NS_OBJECT_ENSURE_REGISTERED(Ipv6PacketFilter);

TypeId
Ipv6PacketFilter::GetTypeId()
{
    static TypeId tid =
        TypeId("ns3::Ipv6PacketFilter").SetParent<PacketFilter>().SetGroupName("Internet");
    return tid;
}

Ipv6PacketFilter::Ipv6PacketFilter()
{
    NS_LOG_FUNCTION(this);
}

Ipv6PacketFilter::~Ipv6PacketFilter()
{
    NS_LOG_FUNCTION(this);
}

bool
Ipv6PacketFilter::CheckProtocol(Ptr<QueueDiscItem> item) const
{
    NS_LOG_FUNCTION(this << item);
    return bool(DynamicCast<Ipv6QueueDiscItem>(item));
}

// ------------------------------------------------------------------------- //

} // namespace ns3

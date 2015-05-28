// Generated by binpac_quickstart

#ifndef ANALYZER_PROTOCOL_RIP_RIP_H
#define ANALYZER_PROTOCOL_RIP_RIP_H

#include "events.bif.h"


#include "analyzer/protocol/udp/UDP.h"

#include "rip_pac.h"

namespace analyzer { namespace RIP {

class RIP_Analyzer

: public analyzer::Analyzer {

public:
	RIP_Analyzer(Connection* conn);
	virtual ~RIP_Analyzer();

	// Overriden from Analyzer.
	virtual void Done();

	virtual void DeliverPacket(int len, const u_char* data, bool orig,
					int seq, const IP_Hdr* ip, int caplen);


	static analyzer::Analyzer* InstantiateAnalyzer(Connection* conn)
		{ return new RIP_Analyzer(conn); }

protected:
	binpac::RIP::RIP_Conn* interp;

};

} } // namespace analyzer::*

#endif

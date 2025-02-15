//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (CDXTicket)
+ (id)dataWithSockAddr:(const struct sockaddr *)arg1;	// IMP=0x008000000006bc34
- (_Bool)CDXTicketIsRelatedToTicket:(id)arg1;	// IMP=0x0010000000002b3b
- (_Bool)CDXTicketWellFormed;	// IMP=0x0010000000002a93
- (id)CDXTicketTrimmed;	// IMP=0x0010000000002a4f
- (_Bool)CDXTicketIsStub;	// IMP=0x0010000000002a18
- (_Bool)CDXTicketIsHolePunch;	// IMP=0x00100000000029fe
- (_Bool)CDXTicketIsReflected;	// IMP=0x00100000000029e7
- (unsigned long long)CDXTicketSID;	// IMP=0x00100000000029c6
- (struct CDXTicket *)mutableCDXTicket;	// IMP=0x00100000000029b4
- (const struct CDXTicket *)CDXTicket;	// IMP=0x00100000000029a2
- (unsigned long long)CDXTicketRevision;	// IMP=0x0010000000002984
- (id)CDXTicketExpirationDate;	// IMP=0x001000000000294a
- (long long)CDXTicketPCNT;	// IMP=0x0010000000002933
- (long long)CDXTicketPID;	// IMP=0x001000000000291c
- (struct sockaddr *)sockAddr;	// IMP=0x001000000006bc6b
@end


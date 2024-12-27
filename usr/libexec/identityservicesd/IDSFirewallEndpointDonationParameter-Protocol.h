//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "IDSPipelineParameter-Protocol.h"

@class IDSPeerMessage, NSArray, NSString;

@protocol IDSFirewallEndpointDonationParameter <IDSPipelineParameter>
- (IDSPeerMessage *)messageToSend;
- (NSArray *)endpoints;
- (_Bool)wantsFirewallDonation;
- (NSString *)service;
- (NSString *)guid;
@end


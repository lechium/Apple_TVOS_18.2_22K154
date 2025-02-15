//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "IDSPipelineParameter-Protocol.h"

@class IDSPeerMessage, NSArray, NSString;

@protocol IDSIMLMessageFactoryParameter <IDSPipelineParameter>
- (void)setAggregatableMessages:(NSArray *)arg1;
- (NSString *)fromShortHandle;
- (NSArray *)endpoints;
- (IDSPeerMessage *)messageToSend;
- (unsigned long long)maxSize;
- (NSString *)service;
- (NSString *)fromID;
- (unsigned long long)encryptionType;
- (_Bool)wantsCertifiedDelivery;
- (_Bool)wantsDeliveryStatus;
- (_Bool)forceAttachmentMessage;
- (NSString *)guid;
@end


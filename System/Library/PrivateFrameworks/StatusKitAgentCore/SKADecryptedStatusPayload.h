//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SKADatabaseReceivedInvitation, SKStatusPayload;

__attribute__((visibility("hidden")))
@interface SKADecryptedStatusPayload : NSObject
{
    SKStatusPayload *_statusPayload;	// 8 = 0x8
    SKADatabaseReceivedInvitation *_invitation;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000067047
@property(readonly, nonatomic) SKADatabaseReceivedInvitation *invitation; // @synthesize invitation=_invitation;
@property(readonly, nonatomic) SKStatusPayload *statusPayload; // @synthesize statusPayload=_statusPayload;
- (id)description;	// IMP=0x0000000000066f7d
- (id)initWithStatusPayload:(id)arg1 invitation:(id)arg2;	// IMP=0x0000000000066ee4

@end


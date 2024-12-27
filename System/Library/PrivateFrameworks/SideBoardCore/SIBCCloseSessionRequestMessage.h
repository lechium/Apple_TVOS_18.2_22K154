//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface SIBCCloseSessionRequestMessage : NSObject
{
    _Bool _force;	// 8 = 0x8
    NSUUID *_hubIdentifier;	// 16 = 0x10
}

+ (id)responseMessageId;	// IMP=0x00100000000130d3
+ (id)messageId;	// IMP=0x00100000000130bf
- (void).cxx_destruct;	// IMP=0x0000000000013103
@property(nonatomic) _Bool force; // @synthesize force=_force;
@property(readonly, nonatomic) NSUUID *hubIdentifier; // @synthesize hubIdentifier=_hubIdentifier;
- (id)initWithEncodedDictionary:(id)arg1;	// IMP=0x00000000000130b1
- (id)dictionaryEncoding;	// IMP=0x0000000000012f76
@property(readonly, copy) NSString *description;
- (id)initWithHubIdentifier:(id)arg1;	// IMP=0x0000000000012e6f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


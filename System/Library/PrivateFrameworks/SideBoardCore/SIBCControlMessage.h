//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface SIBCControlMessage : NSObject
{
    NSNumber *_warmUp;	// 8 = 0x8
}

+ (id)messageId;	// IMP=0x001000000000c560
- (void).cxx_destruct;	// IMP=0x000000000000c57e
@property(readonly, nonatomic) NSNumber *warmUp; // @synthesize warmUp=_warmUp;
- (id)initWithEncodedDictionary:(id)arg1;	// IMP=0x000000000000c49a
- (id)dictionaryEncoding;	// IMP=0x000000000000c404

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


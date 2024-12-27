//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface HMDWakeConfigurationParameters : NSObject
{
    NSData *_delimiter;	// 8 = 0x8
    NSData *_primaryIdentifier;	// 16 = 0x10
    NSMutableArray *_secondaryIdentifier;	// 24 = 0x18
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000e81e79
- (void).cxx_destruct;	// IMP=0x0000000000e81e46
@property(retain, nonatomic) NSMutableArray *secondaryIdentifier; // @synthesize secondaryIdentifier=_secondaryIdentifier;
@property(retain, nonatomic) NSData *primaryIdentifier; // @synthesize primaryIdentifier=_primaryIdentifier;
@property(retain, nonatomic) NSData *delimiter; // @synthesize delimiter=_delimiter;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e81a66
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e819ae
- (id)serializeWithError:(id *)arg1;	// IMP=0x0000000000e813b6
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000e80f72
- (id)initWithDelimiter:(id)arg1 primaryIdentifier:(id)arg2 secondaryIdentifier:(id)arg3;	// IMP=0x0000000000e80ea8
- (id)init;	// IMP=0x0000000000e80e79

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


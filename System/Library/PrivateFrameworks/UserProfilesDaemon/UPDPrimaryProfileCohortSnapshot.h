//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface UPDPrimaryProfileCohortSnapshot : NSObject
{
    unsigned long long _supportedSources;	// 8 = 0x8
    unsigned long long _availableSources;	// 16 = 0x10
    NSDictionary *_memberByAltDSID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000556fe
@property(readonly, copy, nonatomic) NSDictionary *memberByAltDSID; // @synthesize memberByAltDSID=_memberByAltDSID;
@property(readonly, nonatomic) unsigned long long availableSources; // @synthesize availableSources=_availableSources;
@property(readonly, nonatomic) unsigned long long supportedSources; // @synthesize supportedSources=_supportedSources;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000555c9
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000055579
- (id)succinctDescriptionBuilder;	// IMP=0x00000000000554ca
- (id)succinctDescription;	// IMP=0x000000000005547a
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000055234
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000055189
- (id)memberForAltDSID:(id)arg1;	// IMP=0x0000000000055173
@property(readonly, copy, nonatomic) NSSet *members;
- (_Bool)areSourcesSupported:(unsigned long long)arg1;	// IMP=0x00000000000550f9
- (_Bool)areSourcesAvailable:(unsigned long long)arg1;	// IMP=0x00000000000550e6
@property(readonly, nonatomic) _Bool areAllSupportedSourcesAvailable;
- (id)initWithSupportedSources:(unsigned long long)arg1 availableSources:(unsigned long long)arg2 members:(id)arg3;	// IMP=0x0000000000054f33
- (id)initWithSupportedSources:(unsigned long long)arg1 availableSources:(unsigned long long)arg2 memberByAltDSID:(id)arg3;	// IMP=0x0000000000054c81
- (_Bool)_isSourceUsable:(unsigned long long)arg1;	// IMP=0x000000000005573c
@property(readonly, nonatomic) _Bool isHomeSourceUsable;
@property(readonly, nonatomic) _Bool isFamilySourceUsable;

// Remaining properties
@property(readonly) Class superclass;

@end


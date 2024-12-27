//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface TVSSSensorActivityAttribution
{
    _Bool _usedRecently;	// 8 = 0x8
    unsigned long long _sensorType;	// 16 = 0x10
}

@property(readonly, nonatomic) _Bool usedRecently; // @synthesize usedRecently=_usedRecently;
@property(readonly, nonatomic) unsigned long long sensorType; // @synthesize sensorType=_sensorType;
- (id)succinctDescriptionBuilder;	// IMP=0x0010000000150480
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000014ff10
- (id)initWithSTUIDataAccessAttribution:(id)arg1;	// IMP=0x001000000014fce0
- (id)_effectiveDisplayName;	// IMP=0x00100000000c60c0

// Remaining properties
@property(readonly, copy, nonatomic) NSString *bundleIdentifier;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) Class superclass;

@end


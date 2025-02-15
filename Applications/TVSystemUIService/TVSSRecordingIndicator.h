//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TVSSRecordingIndicator : NSObject
{
    long long _displayLocation;	// 8 = 0x8
    long long _recordingType;	// 16 = 0x10
}

@property(readonly, nonatomic) long long recordingType; // @synthesize recordingType=_recordingType;
@property(readonly, nonatomic) long long displayLocation; // @synthesize displayLocation=_displayLocation;
- (id)stateDumpBuilder;	// IMP=0x001000000003c900
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x001000000003c850
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x001000000003c7b0
- (id)succinctDescriptionBuilder;	// IMP=0x001000000003c6c0
- (id)succinctDescription;	// IMP=0x001000000003c650
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000003c2c0
- (id)initRecordingIndicatorWithDisplayLocation:(long long)arg1 recordingType:(long long)arg2;	// IMP=0x001000000003c220

// Remaining properties
@property(readonly) Class superclass;

@end


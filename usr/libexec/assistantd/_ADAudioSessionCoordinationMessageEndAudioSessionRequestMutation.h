//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADAudioSessionCoordinationMessageEndAudioSessionRequest, NSDate, NSString;

@interface _ADAudioSessionCoordinationMessageEndAudioSessionRequestMutation : NSObject
{
    ADAudioSessionCoordinationMessageEndAudioSessionRequest *_base;	// 8 = 0x8
    NSDate *_effectiveDate;	// 16 = 0x10
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasEffectiveDate:1;
    } _mutationFlags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000fb8e8
- (void)setEffectiveDate:(id)arg1;	// IMP=0x00100000000fb8c8
- (id)getEffectiveDate;	// IMP=0x00100000000fb890
- (_Bool)isDirty;	// IMP=0x00100000000fb885
- (id)initWithBase:(id)arg1;	// IMP=0x00100000000fb81a

// Remaining properties
// Error: Property attributes should begin with the type ('T') attribute, property name: debugDescription
// Property attributes: (null)

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


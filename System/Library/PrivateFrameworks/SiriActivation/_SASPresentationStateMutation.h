//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SASPresentationState;

__attribute__((visibility("hidden")))
@interface _SASPresentationStateMutation : NSObject
{
    SASPresentationState *_baseModel;	// 8 = 0x8
    NSString *_presentationIdentifier;	// 16 = 0x10
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasPresentationIdentifier:1;
    } _mutationFlags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000041c1d
- (id)generate;	// IMP=0x0000000000041b70
- (void)setPresentationIdentifier:(id)arg1;	// IMP=0x0000000000041b50
- (id)initWithBaseModel:(id)arg1;	// IMP=0x0000000000041ae5
- (id)init;	// IMP=0x0000000000041ad1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


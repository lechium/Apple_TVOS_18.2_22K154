//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MusicKit_SoftLinking_MPModelObject, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MusicKit_SoftLinking_MPModelResponseDetailedKeepLocalStatusRequesting : NSObject
{
    MusicKit_SoftLinking_MPModelObject *_modelObject;	// 8 = 0x8
    NSArray *_children;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000007f0b
@property(copy, nonatomic) NSArray *children; // @synthesize children=_children;
@property(retain, nonatomic) MusicKit_SoftLinking_MPModelObject *modelObject; // @synthesize modelObject=_modelObject;
- (id)newOperationForDetailedKeepLocalStatusConfigurationForSectionAtIndex:(long long)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007b87
- (id)initWithModelObject:(id)arg1 children:(id)arg2;	// IMP=0x0000000000007adc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface VOTVisionOptions : NSObject
{
    _Bool _includeFullImageDescriptionsForValidElements;	// 8 = 0x8
    _Bool _includeFullImageDescriptionsForAllElements;	// 9 = 0x9
    _Bool _includeSceneDetection;	// 10 = 0xa
    _Bool _userCommandInitiated;	// 11 = 0xb
}

@property(nonatomic) _Bool userCommandInitiated; // @synthesize userCommandInitiated=_userCommandInitiated;
@property(nonatomic) _Bool includeSceneDetection; // @synthesize includeSceneDetection=_includeSceneDetection;
@property(nonatomic) _Bool includeFullImageDescriptionsForAllElements; // @synthesize includeFullImageDescriptionsForAllElements=_includeFullImageDescriptionsForAllElements;
@property(nonatomic) _Bool includeFullImageDescriptionsForValidElements; // @synthesize includeFullImageDescriptionsForValidElements=_includeFullImageDescriptionsForValidElements;
- (id)init;	// IMP=0x001000000012b5bc

@end


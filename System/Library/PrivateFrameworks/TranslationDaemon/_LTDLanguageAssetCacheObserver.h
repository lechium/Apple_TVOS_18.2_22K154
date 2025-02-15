//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID;

__attribute__((visibility("hidden")))
@interface _LTDLanguageAssetCacheObserver : NSObject
{
    _Bool _isIndeterminate;	// 8 = 0x8
    NSUUID *_observerId;	// 16 = 0x10
    unsigned long long _type;	// 24 = 0x18
    CDUnknownBlockType _observations;	// 32 = 0x20
    CDUnknownBlockType _completion;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000001ba07
@property(readonly, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) CDUnknownBlockType observations; // @synthesize observations=_observations;
@property(readonly, nonatomic) _Bool isIndeterminate; // @synthesize isIndeterminate=_isIndeterminate;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSUUID *observerId; // @synthesize observerId=_observerId;
- (id)initWithID:(id)arg1 type:(unsigned long long)arg2 progress:(_Bool)arg3 observations:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000001b8ea

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface VFXBufferBinding : NSObject
{
    NSString *_name;	// 8 = 0x8
    long long _frequency;	// 16 = 0x10
    CDUnknownBlockType _block;	// 24 = 0x18
}

@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) long long frequency; // @synthesize frequency=_frequency;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)dealloc;	// IMP=0x000000000014d467

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface APSPair : NSObject
{
    id _first;	// 8 = 0x8
    id _second;	// 16 = 0x10
}

+ (id)pairWithFirst:(id)arg1 second:(id)arg2;	// IMP=0x0040000000002749
- (void).cxx_destruct;	// IMP=0x00200000000027ed
@property(retain, nonatomic) id second; // @synthesize second=_second;
@property(retain, nonatomic) id first; // @synthesize first=_first;
- (id)initWithFirst:(id)arg1 second:(id)arg2;	// IMP=0x00100000000026b0

@end


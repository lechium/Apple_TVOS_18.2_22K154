//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MTRErrorHolder : NSObject
{
    struct ChipError _error;	// 8 = 0x8
}

@property(readonly, nonatomic) struct ChipError error; // @synthesize error=_error;
- (id)initWithError:(struct ChipError)arg1;	// IMP=0x00000000004cee8c

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

@class NWURLError;

__attribute__((visibility("hidden")))
@interface NWURLErrorUserInfoDictionaryEnumerator : NSEnumerator
{
    NWURLError *_error;	// 8 = 0x8
    NSEnumerator *_userInfoKeyEnumerator;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000ac5f10
@property(retain, nonatomic) NSEnumerator *userInfoKeyEnumerator; // @synthesize userInfoKeyEnumerator=_userInfoKeyEnumerator;
@property(retain, nonatomic) NWURLError *error; // @synthesize error=_error;
- (id)nextObject;	// IMP=0x0000000000ac5d00

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface EARTokenPronounciations : NSObject
{
    NSString *_token;	// 8 = 0x8
    NSArray *_pronunciations;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003a11f4
@property(copy, nonatomic) NSArray *pronunciations; // @synthesize pronunciations=_pronunciations;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
- (struct TokenProns)_quasarProns;	// IMP=0x00000000003a0cf1
- (id)initWithToken:(id)arg1 pronunciations:(id)arg2;	// IMP=0x00000000003a0c0e

@end

